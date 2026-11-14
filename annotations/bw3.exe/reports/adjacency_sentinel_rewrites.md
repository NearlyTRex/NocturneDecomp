# Adjacency-Sentinel Rewrites

Loops auto-rewritten by the exporter. Watcom's end-of-array sentinel
was the next named global in the original binary; our linker reorders
globals so the sentinel never matches. See `docs/decompiler-artifacts.md` §16.

## Summary

- Rewrites applied: **1**
- Functions touched: **1**
- Pools indexed: **34**
- Adjacency pairs in lookup: **34**

## Rewrites by function

### `core_dmodel.cpp_freeAllModels_FUN_004624d0`

- Pool `g_CKeyFramedModelPool` sentinel `g_CZombieDogClassInfo` (count 256)
  - Before: `while (pCVar1 != (CKeyFramedModel *)&g_CZombieDogClassInfo)`
  - After:  `while (pCVar1 != g_CKeyFramedModelPool + sizeof(g_CKeyFramedModelPool) / sizeof(g_CKeyFramedModelPool[0]))`
