---
id: if-a-keep-already-exists-for-the-target-function
kind: rule
title: "If a `.keep` Already Exists for the Target Function"
requires: [rules]
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

When the user asks about a function that already has a `.keep.cpp`/`.keep.c`, **audit the existing `.keep` before doing anything else**. An existing `.keep` is not a signal that the function is "done" — it may be:

1. **Out of date.** The original `.cpp` has been re-exported from Ghidra since the `.keep` was written, and the upstream decompilation has improved (better types, better signatures, a bug fix). Diff the `.keep` body against the current `.cpp` body to see whether the `.keep` is still solving a real problem. If the current `.cpp` compiles and is semantically correct, the `.keep` may be obsolete and a candidate for deletion.
2. **Fixing compilation but harboring a runtime trap.** The `.keep` was written to get the function to compile, but the *logic* it ported over may itself be a decompilation artifact that compiles cleanly and silently misbehaves at runtime. Specifically check for:
   - **Adjacency-sentinel loops**  — `while (p != &g_SomeOtherGlobal)` style pool-init loops that depend on original-binary memory layout. These compile fine and trip AddressSanitizer as `global-buffer-overflow` at runtime.
   - **Wrong-global accesses from Watcom 1-based indexing**  — `.keep` carried forward a `g_VertexNormalArray[20000]` that Ghidra resolved incorrectly.
   - **Broken `ADJ()` usage** — an older `.keep` may have kept raw `ADJ(ptr)->field` writes that were landing at the wrong offset before the exporter's `adj()` fix. If the `.keep` pre-dates that fix, it might have worked-around the symptoms (by bypassing ADJ) in a way that's now unnecessary or actively wrong.
   - **Stale pointer-reuse workarounds** — `(float *)&` casts to paper over Watcom stack-slot reuse that has since been correctly retyped upstream.
3. **Reporting `.keep` status honestly.** Before editing an existing `.keep`, tell the user what you found: "this `.keep` predates the `adj()` fix and rewrites the loop bounds manually — both are now unnecessary," or "this `.keep` still fixes a real compile error but the loop inside is pattern an adjacency-sentinel init loop and will crash at runtime." Let the user decide between "update minimally," "rewrite to remove obsolete workarounds," or "delete since the upstream `.cpp` now compiles."

Rule of thumb: a `.keep` is a liability that needs to justify its existence on every re-export. Treat the existing one as a hypothesis about what the decompiler got wrong, not as a finished answer.
