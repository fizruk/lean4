/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Meta.Tactic.Util

namespace Lean.Meta

def revert (mvarId : MVarId) (fvars : Array FVarId) (preserveOrder : Bool := false) : MetaM (Array FVarId × MVarId) := do
  if fvars.isEmpty then
    pure (fvars, mvarId)
  else withMVarContext mvarId do
    let tag ← getMVarTag mvarId
    checkNotAssigned mvarId `revert
    -- Set metavariable kind to natural to make sure `elimMVarDeps` will assign it.
    setMVarKind mvarId MetavarKind.natural
    let (e, toRevert) ←
      try
        liftMkBindingM <| MetavarContext.revert (fvars.map mkFVar) mvarId preserveOrder
      finally
        setMVarKind mvarId MetavarKind.syntheticOpaque
    let mvar := e.getAppFn
    setMVarTag mvar.mvarId! tag
    return (toRevert.map Expr.fvarId!, mvar.mvarId!)

end Lean.Meta
