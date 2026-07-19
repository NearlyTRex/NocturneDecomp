# Adjacency-Sentinel Rewrites

Loops auto-rewritten by the exporter. Watcom's end-of-array sentinel
was the next named global in the original binary; our linker reorders
globals so the sentinel never matches. See `prompts/fix_compilation.md` §16.

## Summary

- Rewrites applied: **2**
- Functions touched: **2**
- Pools indexed: **16**
- Adjacency pairs in lookup: **16**

## Rewrites by function

### `dll_dx7.cpp_expandTextureAndBuildMips_FUN_10003830`

- Pool `g_PackedPalette` sentinel `g_HWBlueShift` (count 256)
  - Before: `while (puVar8 < &g_HWBlueShift)`
  - After:  `while (puVar8 != g_PackedPalette + sizeof(g_PackedPalette) / sizeof(g_PackedPalette[0]))`

### `dll_dx7.cpp_releaseAllTextures_FUN_10002ea0`

- Pool `g_TextureSurfaces` sentinel `g_ColorPalette` (count 4096)
  - Before: `while (pSVar4 < &g_ColorPalette)`
  - After:  `while (pSVar4 != g_TextureSurfaces + sizeof(g_TextureSurfaces) / sizeof(g_TextureSurfaces[0]))`
