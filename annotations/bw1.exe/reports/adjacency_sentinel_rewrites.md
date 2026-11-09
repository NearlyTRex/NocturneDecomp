# Adjacency-Sentinel Rewrites

Loops auto-rewritten by the exporter. Watcom's end-of-array sentinel
was the next named global in the original binary; our linker reorders
globals so the sentinel never matches. See `docs/decompiler-artifacts.md` §16.

## Summary

- Rewrites applied: **3**
- Functions touched: **3**
- Pools indexed: **33**
- Adjacency pairs in lookup: **33**

## Rewrites by function

### `core_fire.cpp_CFireEffect_init_FUN_004b4b30`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while (pCVar21 != (CRainDrop *)&g_CFlameClassInfo)`
  - After:  `while (pCVar21 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`

### `core_fire.cpp_FUN_004b4dd0`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while (pCVar11 != (CRainDrop *)&g_CFlameClassInfo)`
  - After:  `while (pCVar11 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`

### `core_fire.cpp_FUN_004b5100`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while (pCVar10 != (CRainDrop *)&g_CFlameClassInfo)`
  - After:  `while (pCVar10 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
