---
id: pre-increment-array-walk-loop-idiom-ghidra
kind: recipe
title: Pre-increment-array-walk loop idiom (Ghidra decode artifact)
legacy_section: 19
requires: []
triggers: [preinc_loop_idiom, static_self_assignment]
provides: []
---

**Cause:** Watcom emitted array-init/walk loops using compensated offsets (e.g. `ADD EAX, stride; MOV [EAX + (array_base - stride)], value`) or unrolled struct copies. Ghidra mistranslates these into a `do { ... } while(...)` loop with a pre-incremented pointer walked via struct-field pointer arithmetic, a constant `[0]` index on the advanced pointer, and a `pX = pX;` self-assign no-op.

**Symptoms — a per-iteration pointer advance + constant-index store on the advanced pointer, in one of two forms:**
- **Single-variable form** (all three markers on the same `pX` in the `do/while` body):
  - A pre-increment via struct-field arithmetic: `pX = (T *)&(pX->field)...;` or `pX = (T *)((int)&(pX->field) + N);`
  - A constant-index array access on the advanced pointer: `pX->arr[0].member = value;`
  - A self-assignment no-op on the same variable: `pX = pX;`
- **Two-variable ping-pong form** (no `pX = pX;` — the advance is split across a temp):
  - A temp gets the *address of a sub-field* within the walked pointer: `pTmp = &(pBase->field)...;` (this is the byte-offset stride)
  - A constant-index store on the walked pointer, possibly through a nested field: `(pBase->base).arr[0].member = value;`
  - An advance that copies the temp back: `pBase = (T *)pTmp;`
  - The `do/while` sentinel compares the temp against a baked address (`pTmp != (T *)(base_field + CONST)`).

Both forms bake the stride and loop bound from the **original 32-bit struct layout**, so they overrun on any layout change — most notably the 64-bit port, where every pointer field widens 4→8 bytes and shifts every offset. `CHero::reset` (clearing `carry_hands[i].carry_actor`), `CTextureCache::ctor` (four parallel `[1024]` pointer arrays), and `CCrater::activate` (`smoke_positions[3]`) are all the two-variable form.

**Canonical examples:**
```cpp promptc:noverify
// CPlatform::ctor — single-variable, compensated-offset array init:
pCVar6 = this_ptr;
do {
    pCVar6 = (CPlatform *)((int)&(pCVar6->base).orient + 4);
    pCVar6->attach_actors[0].actor = (CDemonActor *)0x0;   // skips slot 0, corrupts past slot 9
    pCVar6 = pCVar6;
} while (pCVar6 != (CPlatform *)((...)->model.model_name + 0x38));

// CDemonCamera::precomputeLight — single-variable, phantom pre-increment (asm doesn't advance at all):
pCVar3 = light_source;
do {
    pCVar3 = (CDemonLight *)&(pCVar3->base).base.position;
    pCVar3->left_extent[0] = 999;                           // actually writes same address N times
    pCVar3->right_extent[0] = 0;
    pCVar3 = pCVar3;
} while (iVar8 < count);

// CHero::reset — two-variable ping-pong (pfVar2 holds the stride, pCVar1 = pfVar2 advances):
pCVar1 = this_ptr;
do {
    pfVar2 = &(pCVar1->base).base.orient_matrix.m[0].z;    // stride = offset of that field
    (pCVar1->base).carry_hands[0].carry_actor = (CDemonActor *)0x0;
    pCVar1 = (CHero *)pfVar2;
} while (pfVar2 != (float *)((this_ptr->base).base.create_event + 0x10));
// FIXED: for (i = 0; i < 2; i++) (this_ptr->base).carry_hands[i].carry_actor = (CDemonActor *)0x0;
```

**Why this is always wrong:** The decompile is never semantically correct as-decoded. It either:
1. **Skips element [0]** — asm uses `[EAX + (array_offset - stride)]` with pre-increment, correctly hitting `array[0..N-1]`. Naive translation loses the compensation and starts at `array[1]`, overrunning past the last element.
2. **Phantom iteration** — asm writes the same address repeatedly without advancing inside the loop body. Decompile invents a pointer advance that isn't there.
3. **Unrolled struct copy** — asm is a MOVSD/REP or byte-by-byte struct copy, not a repeated-write loop.

**Fix:** cross-reference the asm for the offsets and compensations, then rewrite with a clean `for`-loop (or `memcpy`/assignment when the asm is actually a struct copy). Examples:

```cpp promptc:noverify
// FIXED (compensated-offset init — CPlatform::ctor, CCharacter::ctor):
for (int i = 0; i < N; i++) {
    this_ptr->array[i].field = value;
}

// FIXED (phantom iteration — asm writes same address, decompile shows a fake loop):
if (count > 0) {
    base->left_extent[0] = 999;
    base->right_extent[0] = 0;
}
// or, if truly intended as a loop, iterate with an explicit index that the asm uses

// FIXED (unrolled struct copy):
memcpy(&dst, &src, sizeof(dst));
```

**Don't mechanically translate the pre-increment** — the decompile's `pX = (T *)&pX->field` advance doesn't reflect the real asm stride. Always check the asm first.

This is a `.keep`-layer fix: it's a Ghidra decode artifact specific to one function, not a type/signature issue that would propagate. Retyping locals or fixing the signature won't change the loop decode.
