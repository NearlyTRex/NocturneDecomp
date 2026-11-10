# Adjacency-Sentinel Rewrites

Loops auto-rewritten by the exporter. Watcom's end-of-array sentinel
was the next named global in the original binary; our linker reorders
globals so the sentinel never matches. See `docs/decompiler-artifacts.md` §16.

## Summary

- Rewrites applied: **3**
- Functions touched: **3**
- Pools indexed: **31**
- Adjacency pairs in lookup: **31**

## Rewrites by function

### `core_fire.cpp_CFireEffect_init_FUN_0049c190`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while (pCVar21 != (CRainDrop *)&g_CFlameClassInfo)`
  - After:  `while (pCVar21 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`

### `core_fire.cpp_CFireEffect_process_FUN_0049c430`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while (pCVar11 != (CRainDrop *)&g_CFlameClassInfo)`
  - After:  `while (pCVar11 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`

### `core_fire.cpp_CFireEffect_render_FUN_0049c780`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while (pCVar11 != (CRainDrop *)&g_CFlameClassInfo)`
  - After:  `while (pCVar11 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
