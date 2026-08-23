---
id: shadow-pointer-walk-via-struct-field-byte
kind: recipe
title: Shadow-pointer walk via struct-field byte arithmetic
legacy_section: 24
requires: []
triggers: [shadow_pointer_walk]
provides: []
---

**Cause:** Watcom optimized loops that index `original->arr[i]` by maintaining a *shadow* pointer initialized to `original` and advanced by `sizeof(arr[0])` each iteration, so `shadow->arr[0]` resolves to `original->arr[i]`. The asm form is just `LEA shadow, [shadow + ELEMENT_SIZE]`. Ghidra cannot recognize this as a pointer-stride advance; it picks any sibling field whose address-after-itself happens to land at the right byte offset and emits a self-update through that field's address arithmetic.

**Symptoms:**
- A pointer self-update of the form `IDENT = (TYPE *)((IDENT->FIELD).ARRAY[N] + CONST);` inside a loop body.
- The same `IDENT` appears on both sides — strong shadow-walk signal.
- `IDENT` was initialized just above the loop to some other pointer (`IDENT = real_ptr;`).
- Inside the loop, `IDENT->arr[0]` (or similar zero-index access) reads what should be `real_ptr->arr[i]`.
- The chosen `FIELD.ARRAY[N] + CONST` is always nonsense — for example `(skel->motion_list).state_names[1] + 2`, where Watcom advanced by `sizeof(SBone) = 0x24` and Ghidra found offset `0x24` lands inside `state_names[1] + 2`.

**Canonical example (`CGame::processCheatCodes` BIGHEAD cheat):**
```cpp promptc:noverify
// BROKEN — shadow-walk through "state_names" because that field happens to
// be at the right byte offset for sizeof(SBone) per step:
iVar13 = 0;
pCVar18 = pCVar17;
do {
    if (iVar6 == pCVar18->bone_list[0].parent_index) {
        scaleBoneRecursive(this_ptr_04, pCVar17, fStack_144, iVar13);
    }
    iVar13 = iVar13 + 1;
    pCVar18 = (CSkeleton *)((pCVar18->motion_list).state_names[1] + 2);
} while (iVar13 < pCVar17->bone_count);

// FIXED — direct array indexing on the original pointer, drop the shadow:
iVar13 = 0;
do {
    if (iVar6 == pCVar17->bone_list[iVar13].parent_index) {
        scaleBoneRecursive(this_ptr_04, pCVar17, fStack_144, iVar13);
    }
    iVar13 = iVar13 + 1;
} while (iVar13 < pCVar17->bone_count);
```

**Decoding the byte offset (sanity check before rewriting):** compute the byte offset that `(IDENT->FIELD).ARRAY[N] + CONST` lands at relative to `IDENT`'s address, then confirm it equals `sizeof(element)` of whatever array the loop is supposed to walk. In the example: `state_names` is `char[80][30]` at offset `0x4` of `CMotionList` (which is at offset `0x0` of `CSkeleton`), so `state_names[1] + 2 = 0x4 + 30 + 2 = 0x24 = sizeof(SBone)`. ✓

**Eligibility:** `.keep`-layer fix. The `shadow_pointer_walk` suspect type flags the self-update line. Replacing the shadow-walk with direct indexing typically renders the shadow-pointer local unused — drop its declaration in the same edit.
