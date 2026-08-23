---
id: adjacency-sentinel-init-loops-runtime-bug
kind: recipe
title: Adjacency-sentinel init loops (runtime bug, compiles cleanly)
legacy_section: 16
requires: [magic-numbers-with-obvious-symbolic-equivalents]
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

**Cause:** Watcom emitted pool-initialization loops that use "pointer reaches next global" as the end-of-array check, because in the original binary the next global sat immediately after the array. Our linker places globals in arbitrary order, so the sentinel never matches the pool's true end and the loop walks past it, corrupting every global in between. This compiles without warnings — AddressSanitizer catches it at runtime as `global-buffer-overflow`.

**Symptoms in the `.cpp`:**
- A `do/while` or `while` loop whose exit condition is `p != (T *)&g_SomeGlobal` where `g_SomeGlobal` is NOT the pool being iterated
- The iterator was initialized from a pool declared as `g_PoolName[N]` earlier in the same function
- The loop body resets one element per iteration (calls a reset/ctor function, or writes a field directly)

**Canonical examples from `CFireEffect::init`:**
```cpp promptc:noverify
// Style A — calls reset function:
this_ptr_00 = g_SmokeParticlePool;
do {
    CSmokeParticle_reset(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
} while (this_ptr_00 != (CSmokeParticle *)&g_BulletHoleActiveCount);   // !! adjacency sentinel

// Style B — inline field write:
pCVar1 = g_SparkPool;
do {
    pCVar2 = pCVar1 + 1;
    (pCVar1->base).lifetime_remaining = 0.0;
    pCVar1 = pCVar2;
} while (pCVar2 != (CSpark *)&g_MuzzleFlashAllocIndex);                // !! adjacency sentinel
```

**Diagnosis:** Grep the function for `!= (<Type> *)&g_<something>`. If that `g_<something>` is not the same as the pool the iterator was initialized from, it's the adjacency-sentinel pattern.

**Fix:** Rewrite the loop bounded by the pool's own element count, **derived from the pool declaration rather than written as a literal** (see {{ref:magic-numbers-with-obvious-symbolic-equivalents}}a — a literal decouples from the array the moment it is resized). Confirm the count against the pool's global declaration in `src/globals/` (e.g., `CSmokeParticle g_SmokeParticlePool[2048] = {};`) *and* against the sentinel span in the asm; they must agree.

```cpp promptc:noverify
// FIXED (Style A):
for (int i = 0; i < (int)(sizeof(g_SmokeParticlePool) / sizeof(g_SmokeParticlePool[0])); i++)
    CSmokeParticle_reset(&g_SmokeParticlePool[i]);

// FIXED (Style B):
for (int i = 0; i < (int)(sizeof(g_SparkPool) / sizeof(g_SparkPool[0])); i++)
    g_SparkPool[i].base.lifetime_remaining = 0.0f;
```

**Deriving the count from the asm:** the sentinel gives you a byte span, not an element count — divide by the element size and check it matches the declaration. E.g. `CMP ESI, <sentinel>` with base `0x1020de40` and sentinel `0x10215e40` is `32768` bytes; `32768 / sizeof(STextureSurfaceSlot)` = `32768 / 8` = `4096`, matching `g_TextureSurfaces[4096]`. If the two disagree, that is a real finding — see {{ref:magic-numbers-with-obvious-symbolic-equivalents}}a.

**Scope:** Every `*_static_init` / pool-init in the game likely has this shape. If you're fixing one, eyeball the rest of the function — they often come in clusters (one init function sets up a dozen pools).
