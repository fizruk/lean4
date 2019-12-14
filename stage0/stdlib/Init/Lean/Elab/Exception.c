// Lean compiler output
// Module: Init.Lean.Elab.Exception
// Imports: Init.Lean.Meta
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
extern lean_object* l_String_splitAux___main___closed__1;
lean_object* l_Lean_Elab_mkMessageCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkMessageCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkExceptionCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkExceptionCore(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkMessageCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_Lean_FileMap_toPosition(x_2, x_5);
x_7 = lean_box(0);
x_8 = l_String_splitAux___main___closed__1;
x_9 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_7);
lean_ctor_set(x_9, 3, x_8);
lean_ctor_set(x_9, 4, x_3);
lean_ctor_set_uint8(x_9, sizeof(void*)*5, x_4);
return x_9;
}
}
lean_object* l_Lean_Elab_mkMessageCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Elab_mkMessageCore(x_1, x_2, x_3, x_6, x_5);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Elab_mkExceptionCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Lean_FileMap_toPosition(x_2, x_4);
x_6 = lean_box(0);
x_7 = 2;
x_8 = l_String_splitAux___main___closed__1;
x_9 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 2, x_6);
lean_ctor_set(x_9, 3, x_8);
lean_ctor_set(x_9, 4, x_3);
lean_ctor_set_uint8(x_9, sizeof(void*)*5, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_mkExceptionCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_mkExceptionCore(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init_Lean_Meta(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_Elab_Exception(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Lean_Meta(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif