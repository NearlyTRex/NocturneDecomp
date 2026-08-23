---
id: adj-pointer-adjustment-issues
kind: recipe
title: "`ADJ()` pointer adjustment issues"
legacy_section: 4
requires: []
triggers: [text_adj_pointer]
provides: []          # TODO: terms of art this fragment defines
---

**Cause:** Ghidra uses offset pointer types (e.g., `CAmmo_ptr_158`) when the decompiler tracks a pointer into the middle of a struct. `ADJ()` adjusts back to the base. Compilation fails when the offset pointer type isn't properly defined.

**Fix:** If the ADJ infrastructure works, keep it. If it causes type errors, replace with explicit pointer arithmetic:
```cpp promptc:noverify
// If ADJ(pCVar2)->field fails to compile:
((BaseType *)((char *)pCVar2 - OFFSET))->field
```
