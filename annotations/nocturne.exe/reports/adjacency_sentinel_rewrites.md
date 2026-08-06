# Adjacency-Sentinel Rewrites

Loops auto-rewritten by the exporter. Watcom's end-of-array sentinel
was the next named global in the original binary; our linker reorders
globals so the sentinel never matches. See `prompts/fix_compilation.md` §16.

## Summary

- Rewrites applied: **5**
- Functions touched: **5**
- Pools indexed: **134**
- Adjacency pairs in lookup: **134**

## Rewrites by function

### `core_dmodel.cpp_FUN_00454460`

- Pool `g_CKeyFramedModel_ARRAY_01abb65c` sentinel `g_CZombieDogActorType_01af4e5c` (count 256)
  - Before: `while (this_ptr != (CKeyFramedModel *)&g_CZombieDogActorType_01af4e5c)`
  - After:  `while (this_ptr != g_CKeyFramedModel_ARRAY_01abb65c + sizeof(g_CKeyFramedModel_ARRAY_01abb65c) / sizeof(g_CKeyFramedModel_ARRAY_01abb65c[0]))`

### `core_fire.cpp_CFireEffect_init_FUN_0048a150`

- Pool `g_CRainDrop_ARRAY_01c6ce18` sentinel `g_CFlameActorType_01c70618` (count 256)
  - Before: `while ((CDemonActorType *)pCVar17 != &g_CFlameActorType_01c70618)`
  - After:  `while (pCVar17 != g_CRainDrop_ARRAY_01c6ce18 + sizeof(g_CRainDrop_ARRAY_01c6ce18) / sizeof(g_CRainDrop_ARRAY_01c6ce18[0]))`

### `core_fire.cpp_CFireEffect_process_FUN_0048a390`

- Pool `g_CRainDrop_ARRAY_01c6ce18` sentinel `g_CFlameActorType_01c70618` (count 256)
  - Before: `while ((CDemonActorType *)this_ptr_16 != &g_CFlameActorType_01c70618)`
  - After:  `while (this_ptr_16 != g_CRainDrop_ARRAY_01c6ce18 + sizeof(g_CRainDrop_ARRAY_01c6ce18) / sizeof(g_CRainDrop_ARRAY_01c6ce18[0]))`

### `core_fire.cpp_CFireEffect_render_FUN_0048a650`

- Pool `g_CRainDrop_ARRAY_01c6ce18` sentinel `g_CFlameActorType_01c70618` (count 256)
  - Before: `while ((CDemonActorType *)this_ptr_14 != &g_CFlameActorType_01c70618)`
  - After:  `while (this_ptr_14 != g_CRainDrop_ARRAY_01c6ce18 + sizeof(g_CRainDrop_ARRAY_01c6ce18) / sizeof(g_CRainDrop_ARRAY_01c6ce18[0]))`

### `core_moon.cpp_CMoon_free_FUN_004dea60`

- Pool `g_CCourse_ARRAY_01ccdec8` sentinel `g_SBat_ARRAY_01ccdeec` (count 3)
  - Before: `while ((SBat *)this_ptr_00 != g_SBat_ARRAY_01ccdeec)`
  - After:  `while (this_ptr_00 != g_CCourse_ARRAY_01ccdec8 + sizeof(g_CCourse_ARRAY_01ccdec8) / sizeof(g_CCourse_ARRAY_01ccdec8[0]))`
