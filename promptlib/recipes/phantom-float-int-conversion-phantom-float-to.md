---
id: phantom-float-int-conversion-phantom-float-to
kind: recipe
title: "Phantom float→int conversion (`phantom_float_to_int`)"
legacy_section: 32
requires: [inline-fast-inverse-sqrt-bit-trick, pointer-truncation-via-int-uint-cast-64-bit]
triggers: [phantom_float_to_int]
provides: []
---

**Cause:** On x87 a float→int *numeric* conversion requires a store-integer instruction — `FIST`/`FISTP`. Watcom 11 emits these inline (this codebase has no `_ftol`-style helper calls). So when a function's `.asm` contains **no `FIST`/`FISTP` at all**, every `(int)<float>` in its decompile is fabricated: Ghidra assigned a float type to a stack slot the binary reads as an integer, or lost an integer local entirely and reached for a float field that occupies the slot it wanted.

**Canonical example (`CScat::blendAimBones` — a bone index served from a quaternion):**
```cpp promptc:noverify
// BROKEN — `.z` of the quaternion being passed alongside it stands in for the
// bone index; the blend went to whatever bone that float's bit pattern indexed:
blendBoneRotations(&(this_ptr->base).base.model, &local_6c, t, (int)local_6c.z,
                   blendWeightCallback);

// FIXED — the asm loads the index from g_ScatIndices, an int local Ghidra dropped:
local_18 = g_ScatIndices[5];        // (or [6] on the other hand_index branch)
...
blendBoneRotations(&(this_ptr->base).base.model, &local_6c, t, local_18,
                   blendWeightCallback);
```

**Triage:** the cast is never right, so the question is only *what the real integer was*. Read the asm at that call/index site and recover the value — usually a global array element, a loop counter, or a parameter whose stack slot Ghidra reassigned. If the recovered value is a local the decompile never declared, add it to the declaration block (§"all locals at the top") rather than inlining the global at every use, so the branch structure stays readable.

**Scope:** the detector reports the **field-path** shape (`(int)local.field`, `(int)local.a.b`) only. The bare-local shape (`(int)fVar4` on a mistyped `float` local used as a counter or index) has the same root cause but resolves to a Ghidra-side retype rather than a `.keep` edit, so it is deliberately not flagged. Three neighbours are owned by other detectors and are excluded: bit-pattern compares (`(int)x.f < 0x40c00001` → `bit_int_float_compare`), the fast-(inv-)sqrt magics ({{ref:inline-fast-inverse-sqrt-bit-trick}}), and pointer/array roots ({{ref:pointer-truncation-via-int-uint-cast-64-bit}}).

**Eligibility:** `.keep`-layer fix, but only once the asm tells you the real value — if it doesn't, say so rather than guessing an index. The suspect needs the `.asm`, so it appears in the export report, not in `test_suspects.sh`.
