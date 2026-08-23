---
id: redundant-null-check-possible-null-deref-static
kind: recipe
title: "Redundant null check / possible null deref (`static_null_pointer_redundant_check`)"
legacy_section: 30
requires: [dead-self-copy-guard-if-local-a-local-b-local-a]
triggers: [static_null_pointer_arithmetic_redundant_check, static_null_pointer_redundant_check]
provides: []
---

**Cause:** cppcheck's `nullPointerRedundantCheck` (and the `...ArithmeticRedundantCheck` pointer-subtraction variant) report "either this null check is redundant or there is a possible null dereference" — it saw the pointer dereferenced unconditionally on a path where it could still be null. In Ghidra output this is usually the **fatal-error-guard** pattern: `if (p == 0) { ...; displayErrorAndQuit(...); }` followed by an unconditional deref. Because the quit function can't be marked `noreturn` in Ghidra (it breaks other analysis), cppcheck thinks `p` may still be null afterward.

**Fix (the `displayErrorAndQuit` recipe — both steps; the return alone only shifts the warning):**
1. Add an explicit `return <fail-value>;` (e.g. `return 0;`) immediately after the `displayErrorAndQuit(...)` call inside the null-failure block. Dead code (quit never returns), behaviour-identical, but it tells cppcheck the null path terminates → `p` is provably non-null past the guard.
2. Drop any now-provably-redundant downstream `if (p != 0) { ... }` guard, keeping its body un-wrapped (always-true given step 1; same spirit as the {{ref:dead-self-copy-guard-if-local-a-local-b-local-a}} redundant-guard removal).

```cpp promptc:noverify
// BROKEN (flagged — cppcheck can't see displayErrorAndQuit as noreturn):
if (model_ptr == (SMRGLHeaderExtended *)0x0) {
    displayErrorAndQuit("null model");
}
return model_ptr->vertex_count;          // "possible null deref"

// FIXED:
if (model_ptr == (SMRGLHeaderExtended *)0x0) {
    displayErrorAndQuit("null model");
    return 0;                            // terminates the null path for cppcheck
}
return model_ptr->vertex_count;
```

**Triage:** confirm against the asm that the guarded path really terminates (a `CALL` to a fatal-error / `exit` helper) or that the inner check truly duplicates an outer one. If instead the deref is reachable with a real null — a missing early-return the decompiler lost — that's a genuine bug; reconstruct the missing null path from the asm rather than silencing the flag.
