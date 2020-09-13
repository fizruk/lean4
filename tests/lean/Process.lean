new_frontend
open IO.Process

def usingIO {α} (x : IO α) : IO α := x

#eval usingIO do
  child ← spawn { cmd := "sh", args := #["-c", "exit 1"] };
  child.wait

#eval usingIO do
  child ← spawn { cmd := "sh", args := #["-c", "echo hi!"] };
  child.wait

#eval usingIO do
  child ← spawn { cmd := "sh", args := #["-c", "echo ho!"], stdout := Stdio.piped };
  child.wait;
  child.stdout.readToEnd

#eval usingIO do
  child ← spawn { cmd := "head", args := #["-n1"], stdin := Stdio.piped, stdout := Stdio.piped };
  child.stdin.putStrLn "hu!";
  child.stdin.flush;
  child.wait;
  child.stdout.readToEnd

#eval usingIO do
  child ← spawn { cmd := "true", stdin := Stdio.piped };
  child.wait;
  child.stdin.putStrLn "ha!";
  child.stdin.flush <|> IO.println "flush of broken pipe failed"
