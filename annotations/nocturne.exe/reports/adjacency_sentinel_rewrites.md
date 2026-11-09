# Adjacency-Sentinel Rewrites

Loops auto-rewritten by the exporter. Watcom's end-of-array sentinel
was the next named global in the original binary; our linker reorders
globals so the sentinel never matches. See `docs/decompiler-artifacts.md` §16.

## Summary

- Rewrites applied: **5**
- Functions touched: **5**
- Pools indexed: **146**
- Adjacency pairs in lookup: **146**

## Rewrites by function

### `core_dmodel.cpp_freeAllModels_FUN_00454460`

- Pool `g_CKeyFramedModelPool` sentinel `g_CZombieDogActorType_01af4e5c` (count 256)
  - Before: `while (this_ptr != (CKeyFramedModel *)&g_CZombieDogActorType_01af4e5c)`
  - After:  `while (this_ptr != g_CKeyFramedModelPool + sizeof(g_CKeyFramedModelPool) / sizeof(g_CKeyFramedModelPool[0]))`

### `core_fire.cpp_CFireEffect_init_FUN_0048a150`

- Pool `g_RainDropPool` sentinel `g_CFlameActorType_01c70618` (count 256)
  - Before: `while ((CDemonActorType *)pCVar17 != &g_CFlameActorType_01c70618)`
  - After:  `while (pCVar17 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`

### `core_fire.cpp_CFireEffect_process_FUN_0048a390`

- Pool `g_RainDropPool` sentinel `g_CFlameActorType_01c70618` (count 256)
  - Before: `while ((CDemonActorType *)this_ptr_16 != &g_CFlameActorType_01c70618)`
  - After:  `while (this_ptr_16 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`

### `core_fire.cpp_CFireEffect_render_FUN_0048a650`

- Pool `g_RainDropPool` sentinel `g_CFlameActorType_01c70618` (count 256)
  - Before: `while ((CDemonActorType *)this_ptr_14 != &g_CFlameActorType_01c70618)`
  - After:  `while (this_ptr_14 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`

### `core_moon.cpp_CMoon_free_FUN_004dea60`

- Pool `g_MoonBatCourses` sentinel `g_SBat_ARRAY_01ccdeec` (count 3)
  - Before: `while ((SBat *)this_ptr_00 != g_SBat_ARRAY_01ccdeec)`
  - After:  `while (this_ptr_00 != g_MoonBatCourses + sizeof(g_MoonBatCourses) / sizeof(g_MoonBatCourses[0]))`
