---
id: loop-clobbered-constant-ghidra-register-spill
kind: recipe
title: Loop-clobbered constant (Ghidra register-spill artifact)
legacy_section: 25
requires: []
triggers: [loop_clobbered_constant]
provides: []
---

**Cause:** Watcom kept loop-invariant math constants in registers across iterations of a numeric init loop. Ghidra modeled the register-spill stores as reassignments to other local variables inside the loop body, which silently breaks the loop's math after iteration 0 — every subsequent iteration computes with the wrong values.

**Canonical example (the `requantizeLayer3Samples` gain-table bug):**

```c
base = (float10)2;
fVar7 = (float10)0.25;
iVar4 = 0;
do {
    fVar5 = (float10)-iVar4 * fVar7;
    fVar6 = pow(base, (float10)-iVar4 * fVar7);   // base used as math base
    base = fVar7;            // <-- swap chain: base becomes 0.25
    fVar7 = fVar5;           // <-- swap chain: fVar7 becomes 0
    g_MpegRequantGainTable[iVar4] = (double)fVar6;
    iVar4 = iVar4 + 1;
} while (iVar4 < 200);
```

After iteration 0: `base = 0.25`, `fVar7 = 0`. Every subsequent `pow(0.25, 0) = 1`, so the table fills with 1.0 across the board instead of the intended `pow(2, -i/4)` falloff. With `g_MpegRequantGainTable[i] = 1` for all `i`, the MP3 requantization formula loses its gain-attenuation step — samples come out 10-100× too loud and saturate to ±32767 in the synthesis filterbank.

**Symptoms:** A `do { ... } while (...)` loop body contains:
1. Adjacent simple-identifier assignments `A = B;` then `B = C;` with `A`, `B`, `C` all distinct (the swap chain).
2. `A` is also read elsewhere in the same loop body as a math arg (e.g. inside `pow(A, ...)`, `A * x`).
3. Before the loop, `A` was assigned a literal constant (optionally cast): `A = (float10)2;`, `A = 0.5f;`, `A = 0x1FC00000;`.

**Diagnosis:** the swap chain inside a numeric loop is the smoking gun. Linked-list traversal (`prev = curr; curr = curr->next;`) and array element swap (`arr[i] = arr[j]; arr[j] = tmp;`) don't match because the RHS isn't a bare identifier or the pre-loop literal init isn't there.

**Fix:** drop the swap-chain lines in a `.keep` so the loop runs with its original constants. The variables that were being "swapped into" (`base`/`fVar7` in the example) are pure spill scratch — removing the writes is safe.

```c
// FIXED:
iVar4 = 0;
do {
    fVar6 = pow((float10)2, (float10)-iVar4 * (float10)0.25);
    g_MpegRequantGainTable[iVar4] = (double)fVar6;
    iVar4 = iVar4 + 1;
} while (iVar4 < 200);
```

The intermediate locals (`base`, `fVar7`, `fVar5`) become unused and should be dropped from the declarations.

**Eligibility:** `.keep`-layer fix. The `loop_clobbered_constant` suspect flags the swap-chain line; the detector requires the full signature (do-loop + adjacent swap chain + math read of `A` + pre-loop literal init) so false positives on legitimate swaps/traversals are unlikely.
