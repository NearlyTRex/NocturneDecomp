---
id: missing-cave-block-struct-memcpy-uninit-struct
kind: recipe
title: Missing cave-block struct memcpy (uninit struct local)
legacy_section: 20
requires: []
triggers: [missing_cave_copy]
provides: []
---

**Cause:** When Watcom calls a function that returns a struct via an output-param-in-register convention (`__stack_esi`, `__stack2_esi`, etc.), the compiler often emits an inline struct memcpy *immediately after the call* to copy the callee's output into a different stack slot. Ghidra models these calls correctly but routinely *drops the post-call memcpy* from the decompile. The extended-block ("cave") is visible in the `.asm` as a run of 12+ consecutive `MOV ECX, [ESI+N] / MOV [EDI+N], ECX` pairs (48 bytes = one `CMatrix3x4f`).

**Symptoms in the `.cpp`:**
- Multiple struct-type locals (`CMatrix3x4f`, `CQuaternion4f`, etc.) are declared, passed once by address to a function, and *never referenced again* in the body.
- Typically appear in pairs — one "dead output" (passed as output of call A, never read) paired with an "uninit input" (passed as input to call B, never written).
- The `.asm` contains 2+ cave-block copies that have no counterpart in the `.cpp`.

**Canonical example (`CCloth::computeBoneTransform`):**
```cpp promptc:noverify
// BROKEN (decompile has two missing cave copies):
inverse(parent_matrix, &local_48);          // local_48 is written
multiply(&local_78,                          // local_78 UNINIT — missing copy from local_48
         &world_matrix, &local_d8);          // local_d8 is written
... stores from local_d8 ...
inverse(&local_138, &local_108);             // local_138 UNINIT — missing copy from local_d8
... reads from local_108 ...

// FIXED — skip the dropped intermediates and pass the real sources:
inverse(parent_matrix, &local_48);
multiply(&local_48, &world_matrix, &local_d8);
... stores from local_d8 ...
inverse(&local_d8, &local_108);
... reads from local_108 ...
```

**Why uninit is dangerous under ASAN:** On the original Windows build, the uninit stack bytes happened to be zero often enough that the game's defensive checks (e.g. `inverse()` computes `det == 0` and bails as "Singular matrix") mostly stayed quiet. On Linux with a different malloc and stack layout, the same bytes are arbitrary — the determinant can land anywhere, the bail-out fires, or the inverse computes garbage and ripples downstream.

**Fix:** identify which original local the cave-block was copying *from* (the source of the memcpy in the asm) and pass its address directly wherever the decompile now passes the uninit-scratch. Drop the scratch local from the declarations if nothing else references it. Alternative: add an explicit `local_scratch = local_src;` struct assignment just before the call — more faithful to the asm but adds a line.

**Eligibility:** `.keep`-layer fix. Retyping locals or signatures upstream won't change this — it's purely a Ghidra decode artifact. The `missing_cave_copy` suspect type (see "Reducing Flagged Suspects") flags functions whose `.cpp` and `.asm` agree on the pattern.

**Escape hatch — when the .asm itself looks wrong:** The cave blocks Ghidra shows in the `.asm` (`MOV ECX,[ESI]; MOV [EDI],ECX` pairs at far addresses like `0x60E45A`) are often **fabricated** by AND-ESP / cave-block fixup scripts that patch Ghidra's analysis. The actual binary has inline `MOVSD` instructions (1-byte `0xA5`) at the original site instead. The byte effect is the same memcpy, **but inline `MOVSD` does NOT clobber `ECX`** while the fake cave block's `MOV ECX,[ESI]` pattern does. This matters when the surrounding asm loads `ECX` (e.g. `MOV ECX,[ESP+0x910]`) right before the cave for use after — Ghidra's resolution will treat that load as dead and resolve the post-cave `PUSH ECX` to a junk value (often a float bit-pattern reinterpreted as a pointer), making the slerp/multiply/etc. call look like it has bogus args.

If you find yourself concluding "the original binary is buggy" or "this call gets a junk pointer that should crash but somehow doesn't" — **stop and verify with capstone before committing to that conclusion**:

```bash
python3 scripts/Python/disassemble_function.py <FunctionName_FUN_AAAAAA>
```

Compare the capstone output against the `.asm` at the suspect addresses. If the `.asm` has a `JMP 0xNNNNNN` to a far cave block and capstone shows 4× `movsd` instead, the cave is fake — the real binary preserves any register the surrounding code loaded before the cave. Re-resolve the symbolic args using the correct (cave-doesn't-touch-ECX) interpretation. Don't reach for this on every function — only when an .asm-driven analysis produces a result that contradicts what a working game would do.
