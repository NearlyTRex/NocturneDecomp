# Adjacency-Sentinel Rewrites

Loops auto-rewritten by the exporter. Watcom's end-of-array sentinel
was the next named global in the original binary; our linker reorders
globals so the sentinel never matches. See `docs/decompiler-artifacts.md` §16.

## Summary

- Rewrites applied: **2**
- Functions touched: **2**
- Pools indexed: **33**
- Adjacency pairs in lookup: **33**

## Rewrites by function

### `core_fire.cpp_CFireEffect_process_FUN_004b4dd0`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while ((CDemonActorType *)pCVar4 != &g_CFlameClassInfo)`
  - After:  `while (pCVar4 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`

### `core_fire.cpp_CFireEffect_render_FUN_004b5100`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while ((CDemonActorType *)pCVar3 != &g_CFlameClassInfo)`
  - After:  `while (pCVar3 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
