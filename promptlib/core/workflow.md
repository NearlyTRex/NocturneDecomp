---
id: workflow
kind: rule
title: Workflow
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

1. **Check for a `.chunked.cpp` file** (same base name, `.chunked.cpp` extension). If one exists, read it first — it splits the function into a context struct and small static helper functions, making it much easier to understand and fix large functions. Use it as a reference to understand which chunk each error falls in, but the `.keep` file is still based on the original `.cpp`.
2. **Read the original `.cpp` file** to understand the function and see the compilation error.
3. **Read the `.asm` file** (same base name, `.asm` extension) to understand what the assembly actually does. The `.asm` format is:
   ```
        INSTRUCTION  ; ADDRESS
   ```
4. **Identify the minimal fix** — change only what's needed to compile, but ensure the fix is **semantically faithful** to what the assembly is actually doing. Don't just slap a cast or dummy argument to silence the compiler — understand *why* the error exists and express the correct intent. If you can't determine what the code is actually doing from the assembly, skip the function rather than guessing.
5. **Create the `.keep` file** by running:
   ```
   scripts/Bash/prepare_keep.sh path/to/file.cpp
   ```
   This copies the original and adds the `// MANUAL RECONSTRUCTION` header line. Never write a `.keep` file from scratch.
6. **Edit the `.keep` file** — apply the minimal fix.
7. **Verify compilation** by running:
   ```
   scripts/Bash/test_compilation.sh path/to/file.keep.cpp
   ```
8. **Re-run suspect detection** to see what flagged patterns remain in the file:
   ```
   scripts/Bash/test_suspects.sh path/to/file.keep.cpp
   ```
   This runs the source-text regex detectors from `suspects.py` against the file's current content (no Ghidra needed) and prints any suspects still present, with line numbers and types. Use it to confirm a targeted suspect-cleanup edit actually cleared the pattern, and to spot remaining suspects you might want to address in the same `.keep` pass. Skips P-code / asm / interval-map detectors — those are decompiler-state-dependent and won't change from a `.keep` edit. Pass `--show-omitted` to also list types the exporter normally filters (e.g. `decompiler_intrinsic`, `mmx_assembly`).
9. **Suggest readability improvements** — after the `.keep` file compiles, review it for cases where the decompiler used wrong types that obscure the code's intent. Common examples: `CVector3i` fields holding float bit patterns (hex integers that are really IEEE 754 floats), `int` locals that are actually pointers, etc. If you spot these, **tell the user** what you found and what the correct types would be, but **do not apply the changes** unless the user approves. These are optional cleanups, not compilation fixes.
