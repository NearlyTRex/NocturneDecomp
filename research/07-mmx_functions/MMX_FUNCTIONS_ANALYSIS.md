# MMX Functions Analysis

**Date**: 2026-02-08
**Focus**: All 34 MMX/SIMD functions in `nocedit.exe`
**Status**: Complete inventory and rewrite feasibility analysis

---

## Executive Summary

Nocturne's software renderer uses Intel MMX instructions extensively for pixel blending, lightmap compositing, texture filtering, and buffer management. Ghidra's decompiler cannot produce usable pseudocode for these functions -- it expands packed byte/word operations into nested `CONCAT`/`SUB`/`uint7`/`int3` expressions that don't compile.

The export pipeline replaces these 34 functions with `__asm { }` inline assembly blocks sourced from the raw Ghidra assembly data. This document catalogs every MMX function, explains what it does, and assesses what would be needed to rewrite each one in portable C/C++.

Of the 34 functions, only 5 have existing non-MMX fallback paths. The remaining 29 are MMX-only -- the engine requires MMX support for its software rendering pipeline.

---

## Table of Contents

1. [Function Inventory](#function-inventory)
2. [Functional Categories](#functional-categories)
3. [Non-MMX Fallback Status](#non-mmx-fallback-status)
4. [Common MMX Idioms](#common-mmx-idioms)
5. [Shared Global State](#shared-global-state)
6. [Rewrite Feasibility by Category](#rewrite-feasibility-by-category)
7. [Detailed Function Reference](#detailed-function-reference)

---

## Function Inventory

| # | Function | Source File | Instructions | Category |
|---|----------|------------|:---:|----------|
| 1 | `saveMMXRegisters` | dstrender.cpp | ~8 | Utility |
| 2 | `memcpyMMX` | dstrender.cpp | ~26 | Memory copy |
| 3 | `mmxOptimizedMemcpy` | ckptutil.c | ~100 | Memory copy |
| 4 | `swapBuffers` | wddvmem.cpp | ~185 | Memory copy |
| 5 | `transformPoint` | windll.cpp | ~215 | Matrix math |
| 6 | `transformAndProjectPoint` | windll.cpp | ~215 | Matrix math |
| 7 | `blendSinglePixelLightmapMMX` | dstrender.cpp | ~41 | Lightmap (single pixel) |
| 8 | `blendSinglePixelLightmapNoRoundingMMX` | dstrender.cpp | ~30 | Lightmap (single pixel) |
| 9 | `blendLightmapToTextureMMX` | dstrender.cpp | ~165 | Lightmap (scanline, 16-bit) |
| 10 | `blendTextureWithLightmapMMX` | dstrender.cpp | ~295 | Lightmap (scanline, 16-bit) |
| 11 | `blendLightmapToTextureMMX_Variant2` | dstrender.cpp | ~285 | Lightmap (scanline, 16-bit) |
| 12 | `blendBilerpTextureWithLightmapMMX` | dstrender.cpp | ~185 | Lightmap (scanline, bilinear) |
| 13 | `blendLightmapToTexture64BitOutput` (x3) | dstrender.cpp | ~78-155 | Lightmap (scanline, 32-bit) |
| 14 | `blendLightmapToTexture32BitInputOutput` | dstrender.cpp | ~275 | Lightmap (scanline, 32-bit) |
| 15 | `blendBilerpLightmapToTexture64BitOutput` (x2) | dstrender.cpp | ~165-265 | Lightmap (scanline, bilinear 32-bit) |
| 16 | `alphaBlendPixelsMMX` | dstrender.cpp | ~38 | Alpha blend |
| 17 | `drawAlphaBlendedPixels` | font.cpp | ~40 | Alpha blend |
| 18 | `CFlies_FUN_004cc230` | flies.cpp | ~40 | Alpha blend |
| 19 | `blendCoronaTextureSpan` | dcamera.cpp | ~80 | Alpha blend |
| 20 | `renderAlphaRow16` | windll.cpp | ~75 | Alpha blend (16-bit) |
| 21 | `renderAlphaRow32` | windll.cpp | ~52 | Alpha blend (32-bit) |
| 22 | `verticalBlur3TapMMXStride320` | dstrender.cpp | ~75 | Image filter |
| 23 | `verticalBlur3TapMMXStride256` | dstrender.cpp | ~75 | Image filter |
| 24 | `verticalBlur3TapMMXStride128` | dstrender.cpp | ~75 | Image filter |
| 25 | `spatialFilter9TapMMX` | dstrender.cpp | ~46 | Image filter |
| 26 | `renderTexturedDecalMMXScanline` | dstrender.cpp | ~73 | Scanline renderer |
| 27 | `renderTexturedAlphaMMXScanline` | dstrender.cpp | ~75 | Scanline renderer |
| 28 | `renderPerspectiveTexturedScanline` | dstrender.cpp | ~60 | Scanline renderer |
| 29 | `renderMMXPerspectiveScanline16` | windll.cpp | ~540 | Scanline renderer |
| 30 | `renderMMXPerspectiveScanline32` | windll.cpp | ~495 | Scanline renderer |
| 31 | `CMoon_render` | moon.cpp | ~235 | Special effect |

---

## Functional Categories

### 1. Utility / Memory Copy (4 functions)

Simple register saves and block memory transfers. These use MMX only for wider load/store (movq = 8 bytes per instruction) and could be trivially replaced with `memcpy()` or removed entirely.

- `saveMMXRegisters` -- saves MM0-MM7 to globals
- `memcpyMMX` -- 8-byte-at-a-time copy with prefetch
- `mmxOptimizedMemcpy` -- 32-byte-at-a-time copy with alignment handling
- `swapBuffers` -- copies back buffer to DirectDraw surface (32 bytes/iter)

### 2. Matrix Transform (2 functions)

Fixed-point 3x3 matrix multiply with perspective projection. These use MMX registers purely as extra scratch storage (movd to/from MM0-MM6) to avoid memory round-trips during the computation. The actual arithmetic is done with `imul`/`shrd` on general-purpose registers.

- `transformPoint` -- camera-relative transform + project
- `transformAndProjectPoint` -- origin-relative transform + project

### 3. Lightmap Compositing (12 functions)

The core of the software lighting system. These blend pre-computed lightmap data with texture palette colors to produce lit pixels. All variants follow the same pattern with differences in input/output format, bilinear interpolation, and bias constants.

Each function: looks up texture palette color via `g_LightmapTexturePalette[index]`, multiplies by lightmap value from `g_LightmapData[index]`, applies XOR mask (`g_LightmapXorMask`), optionally adds solid color contribution, adds ambient/bias, and converts to output format.

**16-bit output variants** (convert 32-bit intermediate to 16-bit packed via channel masks):
- `blendLightmapToTextureMMX` -- 64-bit texture input, processes 2 pixels/iter
- `blendTextureWithLightmapMMX` -- 32-bit texture input, processes 2 pixels/iter
- `blendLightmapToTextureMMX_Variant2` -- bilinear averaging of adjacent pixels
- `blendBilerpTextureWithLightmapMMX` -- bilinear averaging across rows (stride 0x140)

**32-bit output variants** (direct 32-bit pixel output):
- `blendLightmapToTexture64BitOutput` (3 variants) -- different bias constants
- `blendLightmapToTexture32BitInputOutput` -- 32-bit input and output
- `blendBilerpLightmapToTexture64BitOutput` (2 variants) -- bilinear, different bias

**Single-pixel variants** (no loop, one pixel at a time):
- `blendSinglePixelLightmapMMX` -- 16-bit output
- `blendSinglePixelLightmapNoRoundingMMX` -- 32-bit output, no bias

### 4. Alpha Blending (6 functions)

Per-pixel alpha blending operations used for particles, fonts, UI overlays, coronas, and fog planes. All follow the standard MMX alpha blend idiom (see [Common MMX Idioms](#common-mmx-idioms)).

- `alphaBlendPixelsMMX` -- blends two buffers with separate alpha values
- `drawAlphaBlendedPixels` -- font rendering with per-glyph alpha from color table
- `CFlies_FUN_004cc230` -- single fly pixel blend with Z-test
- `blendCoronaTextureSpan` -- corona/lens-flare scaled additive blend
- `renderAlphaRow16` -- alpha row to 16-bit framebuffer with blend modes
- `renderAlphaRow32` -- alpha row to 32-bit framebuffer

### 5. Image Filters (4 functions)

Convolution filter kernels for post-processing effects (corona blur, etc.).

- `verticalBlur3TapMMXStride320/256/128` -- identical algorithm, different row stride. Vertical 3-tap blur (current row + row above + row below), followed by horizontal 3-tap. Processes 8 pixels per iteration.
- `spatialFilter9TapMMX` -- cross-shaped 9-tap kernel: center x4, cardinal neighbors x2, diagonal neighbors x1, total /16. Processes 1 pixel per iteration.

### 6. Scanline Renderers (5 functions)

Software rasterizer inner loops. These compute perspective-correct texture coordinates per pixel, sample textures, optionally apply lighting/alpha/Z-buffer, and write to the framebuffer. The two windll.cpp functions are the most complex code in the entire codebase.

- `renderTexturedDecalMMXScanline` -- textured with Z-test, 32-bit output
- `renderTexturedAlphaMMXScanline` -- Z-only alpha pass (writes depth, not color)
- `renderPerspectiveTexturedScanline` -- textured without Z-test, 32-bit output
- `renderMMXPerspectiveScanline16` -- full-featured: per-vertex color, fog, alpha, Z, blend modes, 16-bit output (~540 instructions)
- `renderMMXPerspectiveScanline32` -- same feature set, 32-bit output (~495 instructions)

### 7. Special Effects (1 function)

- `CMoon_render` -- renders moon scene with cloud overlay using `paddusb` (saturated additive blend). Mostly non-MMX (x87 FPU for 3D math, regular x86 for bat animation), with MMX only in the cloud texture blending loop.

---

## Non-MMX Fallback Status

| Function | Fallback | Mechanism |
|----------|:--------:|-----------|
| `transformPoint` | Yes | Internal `g_MMXSupported` branch; non-MMX path uses global temporaries |
| `transformAndProjectPoint` | Yes | Same internal gate pattern |
| `mmxOptimizedMemcpy` | Yes | `getOptimizedMemcpyFunction()` returns `optimizedMemcpy` (FPU-based) when no MMX |
| `renderMMXPerspectiveScanline16` | Yes | `3d.c` callers dispatch to `renderPerspectiveCorrectScanline16` |
| `renderMMXPerspectiveScanline32` | Yes | `3d.c` callers dispatch to `renderPerspectiveCorrectScanline32` |
| All other 29 functions | **No** | Called unconditionally; engine requires MMX |

The `3d.c` polygon rendering functions (50+ of them) check `g_MMXSupported` to select which scanline renderer function pointer to assign to `g_ScanlineRenderFunc`. This is the only dispatch point -- the rest of the rendering pipeline (`dstrender.cpp`, `dcamera.cpp`, `dlight.cpp`) calls MMX functions directly.

---

## Common MMX Idioms

These patterns appear repeatedly across the 34 functions. Understanding them is key to any rewrite effort.

### Alpha Blend (per-pixel)

The canonical MMX alpha blend for 32-bit ARGB pixels:

```
pxor    mm7, mm7              ; mm7 = 0 (used for unpacking)
movd    mm0, [src]            ; mm0 = 0x00RRGGBB (source pixel)
movd    mm1, [dst]            ; mm1 = 0x00RRGGBB (dest pixel)
punpcklbw mm0, mm7            ; mm0 = [00 RR 00 GG 00 BB 00 AA] (bytes -> words)
punpcklbw mm1, mm7            ; mm1 = same for dest
psubw   mm0, mm1              ; mm0 = src - dst (per channel)
pmullw  mm0, mm2              ; mm0 *= alpha (per channel, 16-bit multiply)
psrlw   mm0, 8                ; mm0 >>= 8 (normalize from 0-65535 to 0-255)
paddw   mm0, mm1              ; mm0 += dst (add back the destination)
packuswb mm0, mm7             ; pack words back to bytes with saturation
movd    [dst], mm0            ; write result
```

Equivalent C:
```c
for (int ch = 0; ch < 4; ch++)
    dst[ch] = dst[ch] + ((src[ch] - dst[ch]) * alpha) >> 8;
```

Variations: additive blend uses `paddusb` (saturated add, no multiply), dual-alpha uses separate alpha values per source.

### 16-bit Color Packing

Converting 32-bit ARGB to 16-bit packed (typically RGB565 or RGB555):

```
movd    mm0, [pixel32]        ; 32-bit ARGB
movq    mm1, mm0
movq    mm2, mm0
pand    mm0, [g_BlueMask32]   ; isolate blue channel
pand    mm1, [g_GreenMask32]  ; isolate green channel
pand    mm2, [g_RedMask32]    ; isolate red channel
psrlq   mm0, [g_BlueBitShift] ; shift blue to bit position 0
psrlq   mm1, [g_GreenBlueBits]; shift green to its position
psrlq   mm2, [g_TotalColorBits]; shift red to its position
por     mm0, mm1              ; combine channels
por     mm0, mm2
movd    [pixel16], mm0        ; write 16-bit result
```

This pattern appears in all 16-bit output lightmap functions and `renderAlphaRow16`.

### Lightmap Multiply

The core lightmap compositing operation:

```
movzx   eax, byte [texture_index]      ; read texture index
movd    mm2, [g_LightmapTexturePalette + eax*4]  ; palette lookup
movzx   edx, byte [lightmap_index]     ; read lightmap index
movq    mm3, [g_LightmapData + edx*8]  ; lightmap value (8 bytes)
punpcklbw mm2, mm7                      ; unpack texture color to words
pxor    mm2, [g_LightmapXorMask]        ; XOR inversion
pmullw  mm2, mm3                        ; multiply texture * lightmap
psrlw   mm2, 8                          ; normalize
; optionally add ambient/bias here
packuswb mm2, mm7                        ; pack back to bytes
```

### Cache Prefetch

Many dstrender.cpp functions include a large block of sequential memory reads that touch cache lines before the main loop:

```
mov     eax, [buffer]
mov     eax, [buffer + 0x20]
mov     eax, [buffer + 0x40]
; ... every 32 bytes for the entire working set
```

This is a manual software prefetch (Pentium/Pentium MMX had no `prefetch` instruction). A C rewrite would not need this on modern hardware.

---

## Shared Global State

### Lightmap System Globals

Used by all 12 lightmap functions:

| Global | Type | Purpose |
|--------|------|---------|
| `g_LightmapTexturePalette` | `uint[256]` | Palette: texture index -> 32-bit ARGB color |
| `g_LightmapData` | `ulonglong[256]` | Lightmap: index -> packed light intensity (4x 16-bit channels) |
| `g_LightmapXorMask` | `ulonglong` | XOR mask applied after palette lookup (inverts channels) |
| `g_SolidColorMode` | `uint` | When set, overrides texture color with solid color |
| `g_AmbientLightMMX1/2` | `ulonglong` | Ambient light bias (packed 4x 16-bit) -- used by some variants |
| `g_LightmapBlendBias1-6` | `ulonglong` | Blend bias values -- used by other variants |

### 16-bit Color Conversion Globals

Used by all functions that output 16-bit pixels:

| Global | Type | Purpose |
|--------|------|---------|
| `g_BlueMask32` / `g_GreenMask32` / `g_RedMask32` | `ulonglong` | Channel isolation masks (64-bit for MMX) |
| `g_BlueBitShift` | `ulonglong` | Right-shift amount for blue channel |
| `g_GreenBlueBits` | `ulonglong` | Right-shift for green (accounts for blue bits) |
| `g_TotalColorBits` | `ulonglong` | Right-shift for red (accounts for green+blue) |

### Scanline Renderer Globals

Used by the 5 scanline renderers:

| Global | Type | Purpose |
|--------|------|---------|
| `g_ScreenBufferArray` | `uint*[]` | Per-scanline pointers to screen buffer |
| `g_ZBufferScanlineArray` | `uint*[]` | Per-scanline pointers to Z-buffer |
| `g_CurrentTextureData` | `byte*` | Current texture bitmap |
| `g_CurrentTextureOpacityData` | `byte*` | Opacity/alpha channel of texture |
| `g_Hardware32BitPalette` | `uint[256]` | Hardware palette for index-to-ARGB conversion |
| `g_TextureShift1/2`, `g_TextureMask1/2` | `uint` | Texture coordinate wrapping parameters |
| `g_DeltaTextureU/V` | `int` | Per-pixel UV step (fixed-point) |
| `g_StartDepthZ`, `g_DeltaDepthZ` | `int` | Z-buffer start and per-pixel delta |
| `g_AlphaTable` | struct array | Pre-computed alpha multiplication lookup |

---

## Rewrite Feasibility by Category

### Tier 1: Trivial (4 functions)

**Effort: Minutes. No domain knowledge needed.**

| Function | Rewrite |
|----------|---------|
| `saveMMXRegisters` | Remove entirely (only needed for MMX context save) |
| `memcpyMMX` | `memcpy(dest, src, byte_count)` |
| `mmxOptimizedMemcpy` | `memcpy(dest, src, byte_count)` |
| `swapBuffers` | Replace the `movq` copy loop with `memcpy(dest_scanline, src_scanline, width * bpp)` per row |

### Tier 2: Easy -- Already Have Non-MMX Code (2 functions)

**Effort: Copy-paste the fallback path. The non-MMX code already exists in the binary.**

| Function | Non-MMX path |
|----------|-------------|
| `transformPoint` | Remove the `g_MMXSupported` branch; keep only the non-MMX path (uses `g_TempX/Y/Z` globals instead of MM registers) |
| `transformAndProjectPoint` | Same -- remove the MMX branch, keep the scalar path |

### Tier 3: Mechanical -- Standard Alpha Blend Pattern (6 functions)

**Effort: 1-2 hours each. Requires understanding the [alpha blend idiom](#alpha-blend-per-pixel) and translating it to a per-channel C loop.**

All follow the pattern: unpack bytes to words, multiply by alpha, shift, pack back. The C equivalent is a 4-iteration loop over ARGB channels.

| Function | Notes |
|----------|-------|
| `alphaBlendPixelsMMX` | Two source buffers, two alpha values. Straightforward dual blend. |
| `drawAlphaBlendedPixels` | Font renderer. Alpha comes from a lookup table indexed by glyph data. |
| `CFlies_FUN_004cc230` | Single pixel blend with Z-test guard. ~10 lines of C. |
| `blendCoronaTextureSpan` | Scale source by intensity factor, saturated add to dest. Handle alignment edge cases with scalar path (already exists in the function). |
| `renderAlphaRow32` | Per-pixel alpha from index * global alpha, palette lookup, blend. Two blend modes (standard/additive). |
| `renderAlphaRow16` | Same as renderAlphaRow32 but adds 16-bit color packing. Need to replicate the channel mask logic. |

### Tier 4: Moderate -- Lightmap Compositing (12 functions)

**Effort: 1-2 days total (they share 90% of their logic). Requires understanding the [lightmap multiply idiom](#lightmap-multiply), the palette/lightmap data structures, and the 16-bit color packing.**

These 12 functions are all variations of the same algorithm:
1. Read texture index, look up `g_LightmapTexturePalette[index]`
2. Read lightmap index, look up `g_LightmapData[index]`
3. Multiply (per channel), apply XOR mask, add bias
4. Pack to output format (16-bit or 32-bit)

The differences between variants:
- **Input format**: 64-bit (movq, 2 pixels packed) vs 32-bit (movd, 1 pixel)
- **Output format**: 16-bit packed vs 32-bit direct
- **Bilinear interpolation**: Some average adjacent pixels or adjacent rows (stride 0x140)
- **Bias constants**: g_AmbientLightMMX1/2 vs g_LightmapBlendBias1-6

A rewrite would best implement one core function and parameterize the variants:

```c
void blendLightmapToTexture(
    void* output, void* texture, byte* tex_indices, byte* lm_indices,
    int count, int output_bpp, int input_bpp, bool bilinear,
    uint64_t bias1, uint64_t bias2)
{
    for (int i = 0; i < count; i++) {
        uint32_t texel = g_LightmapTexturePalette[tex_indices[i]];
        uint64_t light = g_LightmapData[lm_indices[i]];
        // unpack, multiply, xor, add bias, pack to output_bpp
    }
}
```

The trickiest part is the 16-bit color packing, which uses 6 globals to define the bit layout. These are runtime-configured based on the display mode (RGB565 vs RGB555 vs other).

### Tier 5: Moderate -- Image Filters (4 functions)

**Effort: A few hours. Standard image processing, well-understood algorithms.**

| Function | Rewrite approach |
|----------|-----------------|
| `verticalBlur3TapMMX` (x3) | One parameterized function with stride argument. For each pixel: `out = (row[-stride] + row[0] + row[+stride]) / 3`, then horizontal blur on the result. Process 4 bytes (1 ARGB pixel) at a time. |
| `spatialFilter9TapMMX` | Cross-shaped kernel: `out = (4*center + 2*(left+right+up+down) + (upleft+upright+downleft+downright)) / 16`. Row stride is 0x500 (1280 bytes = 320 pixels * 4 bpp). |

The blur functions process 8 bytes (2 pixels) per iteration using `movq`, so a C version would process 1 pixel (4 bytes/channels) at a time in a simple loop.

### Tier 6: Hard -- Scanline Renderers (5 functions)

**Effort: Days to weeks. Requires deep understanding of the software rasterizer architecture.**

| Function | Complexity | Notes |
|----------|:---:|-------|
| `renderTexturedDecalMMXScanline` | Medium | Textured + Z-test. ~73 instructions. Main challenge is the fixed-point UV math with texture coordinate wrapping via shifts/masks. |
| `renderTexturedAlphaMMXScanline` | Medium | Z-only pass. Similar to decal but writes depth instead of color. |
| `renderPerspectiveTexturedScanline` | Medium | Textured without Z-test. Simplest of the perspective scanline renderers. |
| `renderMMXPerspectiveScanline32` | **Very hard** | ~495 instructions. Full-featured: perspective-correct UV, per-vertex color interpolation, fog, alpha blending with opacity maps, Z-buffer, additive blending, solid color mode. Multiple code paths branched on `g_RenderStateFlags`. |
| `renderMMXPerspectiveScanline16` | **Very hard** | ~540 instructions. Same as 32-bit version plus 16-bit color packing. The most complex single function in the codebase. |

The two large scanline renderers (`renderMMXPerspectiveScanline16/32`) already have non-MMX equivalents (`renderPerspectiveCorrectScanline16/32` in windll.cpp) that are dispatched via the `g_MMXSupported` check in `3d.c`. These non-MMX versions could serve as a reference implementation for understanding the algorithm.

The three dstrender.cpp scanline renderers have no fallbacks. They would need to be rewritten from scratch, though the algorithm is similar (just with fewer render state variations).

### Tier 7: Special Case (1 function)

| Function | Notes |
|----------|-------|
| `CMoon_render` | A large function (~235 instructions) that is mostly non-MMX. Only the cloud texture overlay loop (roughly lines 170-213 of the asm block) uses MMX for saturated additive blending (`paddusb`). A rewrite would keep 90% of the function as-is and replace the cloud loop with `pixel = min(pixel + cloud_color, 255)` per channel. |

---

## Rewrite Priority Recommendation

If a portable C rewrite is needed, the recommended order is:

1. **Tier 1** (trivial) -- replace with `memcpy()`, delete `saveMMXRegisters`
2. **Tier 2** (already done) -- strip the MMX branch from `transformPoint`/`transformAndProjectPoint`
3. **Tier 3** (alpha blend) -- implement one generic `alphaBlendPixel()` helper, use it in all 6 functions
4. **Tier 5** (filters) -- standard convolution kernels, straightforward
5. **Tier 7** (moon) -- only the cloud loop needs rewriting
6. **Tier 4** (lightmaps) -- implement one core function, parameterize the 12 variants
7. **Tier 6** (scanline renderers) -- hardest; use the existing non-MMX `renderPerspectiveCorrectScanline16/32` as reference for the windll.cpp functions. The dstrender.cpp scanline renderers need to be understood from the assembly.

Total estimated effort for a complete rewrite: roughly 2-4 weeks for an engineer familiar with software rendering, or significantly longer without that background. The lightmap functions are the bulk of the work (12 variants) but share enough structure that they could be tackled systematically.

The manual prefetch blocks (touching memory every 32 bytes) found in many dstrender.cpp functions can be entirely omitted in a rewrite -- they were necessary for Pentium MMX-era cache behavior but are handled automatically by modern hardware prefetchers.
