---
id: prefer-ghidra-fixes-over-code-fixes
kind: rule
title: Prefer Ghidra Fixes Over Code Fixes
requires: [rules]
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

Before writing a `.keep` file, check whether the compilation error is caused by something that can be fixed upstream in Ghidra. If the root cause is a wrong type annotation in Ghidra, fixing it there will produce correct decompiler output for ALL functions that use it — a `.keep` file only fixes one function.

**If you identify any of these, STOP and tell the user to fix it in Ghidra. Skip the function and move on to the next one:**
- **Wrong global variable type** — e.g., a global typed as `float` that should be a `float *`, or an `int` that should be a struct pointer. Fix the type in Ghidra's data type manager.
- **Wrong function return type** — e.g., a function returning `CPackedBitmapSet *` when it should return `void` (common when Ghidra infers a return from EAX being live at RET but no caller uses it). Fix the function signature in Ghidra.
- **Wrong function parameter types/count or calling convention** — Fix the function signature in Ghidra.
- **Wrong struct field type or layout** — a field typed as `int` that should be `float`, or a struct with wrong size/alignment. Fix the struct definition in Ghidra.
- **Wrong calling convention on a vtable entry** — causes ESP tracking drift for the rest of the function. Fix the convention on the function pointer type in the vtable struct.
- **Missing or wrong function pointer type** — e.g., a vtable slot typed as `int` instead of a function pointer. Fix the vtable struct in Ghidra.

A `.keep` file is the right approach when the error is a **decompiler limitation** (split doubles, MOVSD artifacts, ADJ pointer quirks, format string splitting, etc.) that cannot be fixed by changing types in Ghidra.
