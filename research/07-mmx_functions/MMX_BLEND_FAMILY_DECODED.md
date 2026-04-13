# MMX Blend Family — Decoded from `.keep` Conversions

**Date**: 2026-04-12
**Scope**: Findings from promoting the `core_dstrender.cpp` / `core_dcamera.cpp` MMX blend functions to portable `.keep.cpp` files.
**Companion to**: `MMX_FUNCTIONS_ANALYSIS.md` (which is a high-level inventory of all 34 MMX functions). This document captures the **concrete formulas and translation recipes** that came out of actually decoding each function byte-for-byte.

---

## Summary

The rendering pipeline contains ~10 variants of the same underlying pixel-blend algorithm, plus 2 spatial-blur routines and 1 corona-blend routine. All were rewrites into scalar portable C that match the semantics exactly. The blend family all reduces to **one shared formula** with knobs for:

- Palette sampling cadence (direct / horizontal bilerp / vertical+horizontal bilerp)
- Lightmap sampling cadence (per-pixel / shared across N pixels)
- I/O width (uint* / ulonglong*)
- Output conversion (direct 32-bit / 16-bit packed into half a uint)
- Bias global pair (6 different MMX_INTEGER globals rotate through the variants)
- Pixels per iteration (1 / 2 / 4)

This document captures all of it.

---

## Part 1 — The Blend Formula

Every lightmap-blend function in the family (see the variant matrix below) computes this per output byte, where each "pixel" is 4 bytes laid out as 4 channels (the code treats them symmetrically — no channel is special):

```
pix_pal_low    = (texture_byte * palette_byte) & 0xFFFF          // pmullw
mul1_hi        = high16(pix_pal_low × lm_xored_word)   (signed)  // pmulhw
solid_hi       = high16((solid_byte << 6) × lm_data_word) (signed) // pmulhw
sum_signed_16  = mul1_hi + solid_hi + bias_word       (signed)   // paddw
shifted        = (uint16_t)sum_signed_16 >> 4                    // psrlw 4
out_byte       = min(0xFF, shifted)                              // packuswb
```

Where:

- `lm_data` is 8 bytes fetched from `g_LightmapData` at a per-pixel-or-shared index.
- `lm_xored = lm_data XOR __BITCAST_UINT64(g_LightmapXorMask)`. `g_LightmapXorMask` is declared in `constants_670000.h` as `static double = 0.12694552529182901` — the double's bit pattern is what the `pxor` actually uses. The keep fetches it via `__BITCAST_UINT64(g_LightmapXorMask)`.
- `solid_byte` is one of the 4 bytes of `g_SolidColorMode` (a `ulong` global). The `<< 6` is the MMX `psllw MM5, 6` on the unpacked word.
- `bias_word` is the corresponding 16-bit word of `g_AmbientLightMMX1/2` OR `g_LightmapBlendBias1..6`, depending on the variant.
- `packuswb`-style saturation: the keeps use `(shifted > 0xFF) ? 0xFF : shifted`. After the `>> 4` of a `ushort`, the value is in `[0, 0x0FFF]`, always positive in signed int16 — so the underflow-to-0 case of `packuswb` never fires in practice.

**What the formula actually computes (semantically):** A lighting modulation of a texture byte by a lightmap byte, plus a solid-color-times-lightmap contribution, plus a per-channel bias. The `>> 4` normalizes (kernel weights sum to 16). The XOR-masked lightmap is likely the "negative" or inverted form that the compiler pre-baked for faster `pmulhw` (which is signed multiply); the XOR restores the true unsigned interpretation when interpreted as int16.

---

## Part 2 — The Variant Matrix

10 variants of the blend formula exist. Each makes a specific choice along each axis. The choice is encoded in the function name (inconsistently — names like `64BitOutputAmbient` mix output width and bias-pair).

| # | Function | Palette bilerp | Lightmap share | Input | Output | Bias pair | Px/iter | Idx stride |
|---|---|---|---|---|---|---|---|---|
| 1 | `blendSinglePixelLightmapNoRoundingMMX_FUN_00491f90` | none | shared (single) | `uint *` | 32-bit | **none** | 1 | N/A |
| 2 | `blendSinglePixelLightmapMMX_FUN_004937b6` | none | shared (single) | `uint *` | 16-bit packed | **none** | 1 | N/A |
| 3 | `blendLightmapToTexture32BitInputOutput_FUN_004926e1` | none | per-pixel | `uint *` | 32-bit each | `BlendBias1/2` | 2 | 2 |
| 4 | `blendLightmapToTexture32BitOutputAmbient_FUN_00492bd5` | none | per-pixel | `ulonglong *` | 32-bit each | `AmbientLightMMX1/2` | 2 | 2 |
| 5 | `blendLightmapToTexture64BitOutputAmbient_FUN_004925c5` | none | shared (4px) | `ulonglong *` | 64-bit packed | `AmbientLightMMX1/2` | 4 | 1 |
| 6 | `blendLightmapToTexture64BitOutputBlendBias_FUN_004924a9` | none | shared (4px) | `ulonglong *` | 64-bit packed | `BlendBias1/2` | 4 | 1 |
| 7 | `blendLightmapToTextureMMX64BitAmbient_FUN_00493dc4` | none | per-pixel | `ulonglong *` | 16-bit packed | `AmbientLightMMX1/2` | 2 | 2 |
| 8 | `blendTextureWithLightmapMMX_FUN_00493860` | none | per-pixel | `uint *` | 16-bit packed | `BlendBias1/2` | 2 | 2 |
| 9 | `blendLightmapToTextureMMX32BitBlendBias_FUN_00492f03` | horiz (pix 1) | shared | `ulonglong *` | 16-bit packed | `BlendBias5/6` | 2 | 1 |
| 10 | `blendBilerpLightmapToTexture64BitOutputOffset_FUN_00491c9a` | vert+horiz | shared | `ulonglong *` | 64-bit packed | `AmbientLightMMX1/2` | 2 | 1 |
| 11 | `blendBilerpLightmapToTexture64BitOutput_FUN_004917bc` | horiz (pix 1) | shared | `ulonglong *` | 64-bit packed | `BlendBias1/2` | 2 | 1 |
| 12 | `blendBilerpTextureWithLightmapMMX_FUN_00493450` | vert+horiz | shared | `ulonglong *` | 16-bit packed | `BlendBias3/4` | 2 | 1 |

### Palette bilerp patterns

- **none**: `palette[i] = g_LightmapTexturePalette[texture_indices[i]]` — direct lookup.
- **horiz (pix 1)**: pixel 0 uses `palette0` directly; pixel 1 uses `(palette0 + palette1) / 2` — a half-step horizontal interpolation for the second pixel in a pair.
- **vert+horiz**: each palette sample is `g_LightmapTexturePalette[(tex_indices[off] + tex_indices[off+0x140]) >> 1]` — vertical average with a neighbor scanline, 0x140 bytes apart. Then pixel 1 gets horizontal avg of its own and the adjacent vertical-averaged palette.

### Lightmap sharing patterns

- **shared**: one `g_LightmapData` fetch per iteration, used across all processed pixels.
- **per-pixel**: each pixel computes its own `lm_idx = lightmap_indices[p] + (texture_indices[p] >> 1)`.
- **shared (4px)**: one fetch per 4 pixels (only in the `64BitOutput Ambient/BlendBias` pair — `pixel_count -= 4`, `texture_indices += 1`).

### Output conversion patterns

- **32-bit direct**: bytes concatenated into a `uint` and stored. No display-mode conversion.
- **16-bit packed**: after saturation, each pixel's 4 bytes go through:
  ```
  pix16 = (pix & g_BlueMask32.mm)  >> g_BlueBitShift.mm
        | (pix & g_GreenMask32.mm) >> g_GreenBlueBits.mm
        | (pix & g_RedMask32.mm)   >> g_TotalColorBits.mm
  ```
  And two 16-bit pixels are `|`'d together (pix1 shifted left by 16) into one `uint` write. The masks and shift counts are **runtime-configured** — set per display mode (RGB555 vs RGB565 etc.).

### Bias pair patterns

Every variant with a loop uses two bias globals — one for even-indexed output pixels (0, 2, ...) and one for odd-indexed (1, 3, ...). The pairs rotate:

- `g_AmbientLightMMX1 / g_AmbientLightMMX2` — ambient-lit scene compositing
- `g_LightmapBlendBias1 / g_LightmapBlendBias2` — standard lightmap pass
- `g_LightmapBlendBias3 / g_LightmapBlendBias4` — bilerp scene pass
- `g_LightmapBlendBias5 / g_LightmapBlendBias6` — specific blend-bias 32bit path

The single-pixel variants have **no bias** at all — the formula reduces to `mul1_hi + solid_hi` with no additive term.

---

## Part 3 — The Scalar-Translation Recipe

Every keep in the family follows this template. Dropping it into a new function and plugging in the right knobs from the matrix above takes ~5 minutes once you know the pattern.

```c
#include "nocturne.h"

void __cdecl FUNCTION_NAME(/* preserved signature */)
{
  // Standard setup — same in every variant
  ushort solid_ws[4];
  uint solid_raw = (uint)g_SolidColorMode;
  solid_ws[0] = (ushort)((solid_raw & 0xff) << 6);
  solid_ws[1] = (ushort)(((solid_raw >> 8) & 0xff) << 6);
  solid_ws[2] = (ushort)(((solid_raw >> 16) & 0xff) << 6);
  solid_ws[3] = (ushort)(((solid_raw >> 24) & 0xff) << 6);

  ulonglong xor_mask_bits = __BITCAST_UINT64(g_LightmapXorMask);

  do {
    // Lookups (placement depends on sharing pattern)
    uint palette = g_LightmapTexturePalette[texture_indices[p]];
    uint lm_idx  = (uint)lightmap_indices[p] + ((uint)texture_indices[p] >> 1);
    ulonglong lm_data  = *(ulonglong *)((char *)g_LightmapData + lm_idx * 8);
    ulonglong lm_xored = lm_data ^ xor_mask_bits;

    // Per-pixel loop
    for (int p = 0; p < N_PIXELS_PER_ITER; p++) {
      ulonglong bias_val = (p % 2 == 0) ? BIAS1.mm : BIAS2.mm;
      uint tex_pix = /* extract from input buffer */;
      uint out_pix = 0;

      // Per-channel scalar translation of the MMX chain
      for (int c = 0; c < 4; c++) {
        ushort pix = (ushort)((tex_pix >> (c * 8)) & 0xff);
        ushort pal_byte = (ushort)((palette >> (c * 8)) & 0xff);

        ushort pix_pal_low = (ushort)(pix * pal_byte);

        short lm_x_w = (short)((lm_xored >> (c * 16)) & 0xffff);
        short mul1_hi = (short)(((int)(short)pix_pal_low * (int)lm_x_w) >> 16);

        short lm_w = (short)((lm_data >> (c * 16)) & 0xffff);
        short solid_hi = (short)(((int)(short)solid_ws[c] * (int)lm_w) >> 16);

        short bias_w = (short)((bias_val >> (c * 16)) & 0xffff);

        short sum16 = (short)(mul1_hi + solid_hi + bias_w);
        ushort shifted = (ushort)sum16 >> 4;

        int clamped = (shifted > 0xff) ? 0xff : (int)shifted;

        out_pix = out_pix | ((uint)(uchar)clamped << (c * 8));
      }

      // Output write — format depends on conversion pattern
      /* ... */
    }

    // Pointer advance — depends on input/output widths and index stride
    pixel_count -= N_PIXELS_PER_ITER;
  } while (pixel_count > 0);
}
```

### Signed-multiply subtlety

The `(int)(short)pix_pal_low * (int)lm_x_w` pattern is load-bearing: it reproduces `pmulhw`'s signed 16x16→32 multiplication where we keep the high 16 bits. `pix_pal_low` as a raw `ushort` would be unsigned; casting through `(short)` first reinterprets it as signed int16, and widening to `(int)` sign-extends. The result's high 16 bits are what `pmulhw` puts in its output word. Critical for correct behavior when `pix_pal_low` has the high bit set (e.g., 255*255 = 65025 = 0xFE01 = -511 signed, which matters when multiplied by a signed lightmap word).

### `packuswb` saturation in scalar

`packuswb` clamps a signed int16 to unsigned byte: negative → 0, >255 → 255, else pass through. In our keeps, the input to the saturation is `(ushort)sum16 >> 4`, which is always in `[0, 0x0FFF]` (16-bit unsigned >> 4 = 12-bit). That range is always non-negative when interpreted as int16, so only the `> 255` clamp fires. The keeps use `(shifted > 0xFF) ? 0xFF : shifted`.

### FC-bias subtlety in the blur variants

The blur variants use a different trick: `punpcklbw MM_pixel, [g_FilterBlendConstant]` interleaves the pixel bytes with the filter-constant bytes, producing words of the form `(fc_byte << 8) | pixel_byte`. When `paddusw`'d, the high byte of each word accumulates the FC contribution. The scalar translation becomes: add `4 * 256 * (fc[i-1] + 2*fc[i] + fc[i+1])` to the pixel-only 9-tap sum (where the `4*256` is the vertical-3-tap FC contribution per column). FC pattern is periodic with period 8 bytes, so `fc_bytes[(i±1) mod 8]` handles edges.

---

## Part 4 — Non-Blend Variants

Functions that don't fit the main lightmap-blend pattern — spatial filters, single-pixel alpha blends, cross-fades, and "mostly non-MMX" functions with small MMX inner loops:

### `spatialFilter9TapMMX_FUN_004923ff`

- 3×3 Gaussian-ish blur kernel `[1,2,1; 2,4,2; 1,2,1] / 16` on 32-bit RGBA.
- Per byte of the output pixel: sums the 9 neighbor bytes at offsets `{-0x141, -0x140, -0x13f, -1, 0, +1, +0x13f, +0x140, +0x141}` with the Gaussian weights.
- 0x140 = 320 = row stride (in `uint`s = 4-byte pixels).
- No palette, no lightmap, no bias globals. Just blur.
- 1 pixel per iteration.

### `verticalBlur3TapMMXStride128_FUN_004922c8`

- Despite the name, this is a **full 3×3 blur** (vertical 3-tap first, horizontal 3-tap second within the MMX register via `psllq`/`psrlq`). Same `[1,2,1; 2,4,2; 1,2,1] / 16` kernel.
- Row stride is 128 bytes (= 0x80), hence the name suffix. Works on a single-channel byte buffer (not RGBA), so 8 bytes = 8 pixels per MMX register.
- Uses `g_FilterBlendConstant` via the `punpcklbw pixel, FC` trick to add a per-byte-position bias. The FC pattern is periodic with period 8 — wraps around at the LOW/HIGH `punpcklbw`/`punpckhbw` boundary of the MMX register.
- 8 output bytes per iteration.

### `blendCoronaTextureSpan_FUN_004517f0`

- Scanline blend for corona/lens-flare additive glow.
- Formula: `dst_byte += g_CameraLookupTable[src_byte * 64 + intensity]`, where `intensity = g_CurrentGlobe->intensity_multiplier >> 10` (a 6-bit value).
- The original had an MMX main loop (`pmullw/psrlw/packuswb`) and scalar head/tail loops that used the lookup table directly. The MMX and table are mathematically equivalent: `table[src*64 + intensity] == min(255, (src * intensity) >> 6)`.
- The keep collapsed all three paths into one scalar lookup-table loop.

### `alphaBlendPixelsMMX_FUN_00492e8a`

- Cross-fade between two pixel buffers (used for fog-plane blending).
- Formula: `out_byte = saturate((src1_byte * alpha2_word + src2_byte * alpha1_word) >> 16)`.
- `alpha1` and `alpha2` each carry two 16-bit values: the low 16 bits apply to even-positioned bytes (0, 2), high 16 bits to odd (1, 3).
- **Naming quirk**: `source1` is multiplied by `alpha2` and vice versa. Caller (`CDemonCamera_blendFogPlanes`) passes `alpha1 = t` and `alpha2 = 1-t`, so the result is the standard LERP `src1*(1-t) + src2*t`. The parameter names aren't wrong — the pairing convention is `alpha1 ↔ source2`, `alpha2 ↔ source1`.

### `drawFlyPixel_FUN_004cc230` (core/flies.cpp)

- Single alpha-blended pixel with Z-test, for rendering individual flies/insects.
- Formula: `out[c] = saturate((src[c] * g_FlyInvBlendColor[c] + dst[c] * g_FlyBlendColor[c]) >> 8)`.
- Per-channel weights come from **a different global pattern** than the lightmap family: `g_FlyBlendColor` (for dst) and `g_FlyInvBlendColor` (for src, typically `255 - FlyBlendColor` per channel). These act as an "alpha" pair packed into two 32-bit globals — low byte of each is the "alpha" for channel 0, etc.
- **Inverted Z convention**: the gate is `if (g_ZBufferScanlineArray[y][x] < z_depth)` — draw when new Z is *greater* than stored. The asm uses `JBE → skip`, which is the mirror of the standard "closer Z wins" convention. Strongly suggests Nocturne's Z-buffer is a 1/z or similar reciprocal representation. No Z-buffer write (pure transparent composite).
- Canonical MMX alpha-blend idiom: `punpcklbw → pmullw → paddw → psrlw 8 → packuswb`. Scalar form is 4 channels × (src×invblend + dst×blend + >>8 + saturate).
- Also early-exits if `g_BitsPerPixel != 32` — no 16-bit output path.

### `CMoon_render_FUN_00529ed0` (core/moon.cpp)

- "Mostly non-MMX" function (Tier 7 in the sibling doc) — renders the moon scene during transitions. Only the **cloud overlay** inner loop uses MMX. Roughly 90% of the function (audio pump, moon-model render, moon-bat animation/render loop, clear/blend-mode state) is plain FPU 3D math and vtable-dispatched model rendering.
- Cloud overlay geometry: 480 scanlines × 320 pixel-pairs = 307,200 pixels per frame. For each 2-pixel pair:
  - Layer 1 at 2× magnification: `cloud[((u ≫ 1) + scrollX) & 0xff] [((v ≫ 1) + scrollY) & 0xff]` → palette lookup via `g_Hardware32BitPalette` → `>> 2` (attenuate to 25%)
  - Layer 2 at 4× magnification (`(u ≫ 2, v ≫ 2)`) — same texture but stretched wider, producing a second softer layer
  - Both layers additively composited into the framebuffer pair via `paddusb` (saturated unsigned byte add)
- Scroll offsets are `g_MoonCloudScrollX/Y >> 16` — upper halves of 32-bit fixed-point positions.
- **CONCAT44 trick**: the MMX replicates the same 32-bit palette value into both halves of an 8-byte MMX register (`CONCAT44(pal, pal)`), so `paddusb` adds the same 4 palette bytes to each of the 2 pixels in the pair. Scalar form: a simple per-byte saturated add applied twice (once per pixel in the pair).
- Scalar saturated add: `added = dst + layer1 + layer2; if (added > 0xff) added = 0xff` — matches two sequential `paddusb` operations exactly since all addends are non-negative bytes.

---

## Part 5 — Ghidra Decompiler Artifacts (Why the Raw `.cpp` Doesn't Compile)

Every function in this family hits the same set of Ghidra output pathologies when it tries to scalarize `punpcklbw`/`packuswb` byte-shuffle operations:

### `uint5` and `uint7` types

Ghidra synthesizes these for intermediate "5-byte int" and "7-byte int" values when modeling MMX byte shuffles. They don't exist in the project's `basetypes.h`. Any function that uses them fails to compile. The fix: delete all `uint5`/`uint7` locals and rewrite the byte-shuffle they were participating in as plain scalar byte-extraction-and-insertion.

### `CONCAT11`, `CONCAT12`, `CONCAT14`, `CONCAT22`, `CONCAT24`, `CONCAT25`, `CONCAT26`, `CONCAT34`, `CONCAT41`, `CONCAT43`, `CONCAT52`

These macros DO exist (`intrinsics.h`) and have correct semantics — `CONCAT_AB(hi, lo)` produces an `(A+B)*8`-bit integer with `hi` in the high bytes and `lo` in the low. They compile. The problem is that Ghidra builds multi-level nested towers of them to reconstruct a simple `punpcklbw`. For example:

```c
CONCAT26((uVar7 >> 8) * sVar21,
         CONCAT24((short)CONCAT21(uVar7,(char)(uVar1 >> 0x10)) * sVar20,
                  CONCAT22((byte)(uVar1 >> 8) * uVar12,
                           ((ushort)uVar1 & 0xff) * uVar11)))
```

…is just "build a 64-bit value with 4 words, each being `pixel_byte[i] * palette_byte[i]`." Ghidra can't see that, so it builds it byte-by-byte. The fix is to replace the whole tower with a `for (c = 0; c < 4; c++)` scalar loop that does exactly that.

### Missing or wrong format-specifier args

Seen in the `CCourse_preview` function: Ghidra emitted `_sprintf(buf, "t=%7.3f, Pos: %7.2f...");` with zero actual `%f` arguments because the `FSTP double ptr [ESP]` pushes were too loose for it to follow. The fix requires reading the `.asm` at the sprintf call site and tracing each `FLD float ptr [EBP + X]` back to a local — one of several places where the assembly is still ground truth.

### `stack0xfffffeXX` raw stack references

When Ghidra can't map a stack address to a declared local, it emits `&stack0xfffffed0` as a raw identifier — **will not compile**. The fix is to introduce a properly declared local (e.g., `char text_buffer[128]`, or a properly typed `SRenderVertex` local) and replace every `&stack0xXXXXXXXX` with it.

### `rep movsd` as for-loops

SRenderVertex (48 bytes) is passed by value to `engine_3d_c_clipAndDrawLine2D_FUN_00407d70`. The compiler emits `rep movsd` for the bytewise copy onto the stack; Ghidra renders this as a for-loop that overwrites stack memory byte-by-byte via a phantom pointer. **The whole loop is a decompiler artifact** — in portable C, you just pass the struct directly (`clipAndDrawLine2D(pSVar7[0], pSVar7[1])`) and the language handles the copy.

---

## Part 6 — Shared Globals (Concrete Declarations)

From `globals/*.h` and `constants_670000.h`:

```c
extern uint g_LightmapTexturePalette[256];      // globals_C10000.h — 256 × 4 bytes
extern ushort g_LightmapData[384];              // globals_670000.h — 768 bytes = 192 qwords
extern ulong g_SolidColorMode;                  // globals_2D00000.h — 32-bit
extern _MMX_INTEGER g_AmbientLightMMX1;         // globals_670000.h
extern _MMX_INTEGER g_AmbientLightMMX2;         // globals_670000.h
extern _MMX_INTEGER g_LightmapBlendBias1..6;    // globals_670000.h
extern _MMX_INTEGER g_FilterBlendConstant;      // globals_670000.h
extern _MMX_INTEGER g_BlueMask32, g_GreenMask32, g_RedMask32;            // globals_680000.h
extern _MMX_INTEGER g_BlueBitShift, g_GreenBlueBits, g_TotalColorBits;   // globals_680000.h
static double g_LightmapXorMask = 0.12694552529182901;  // constants_670000.h

// Non-lightmap related:
extern char g_CameraLookupTable[4096];          // globals_13D0000.h — 256 × 64 precomputed blend values
extern char g_CoronaBlurOutputBuffer[241][320]; // globals_BA0000.h
extern CDemonGlobe* g_CurrentGlobe;             // globals_15C0000.h (has .intensity_multiplier at 0x3c)

// Fly/insect particle blend:
extern uint g_FlyBlendColor;                    // globals_2D70000.h — per-channel dst weight
extern uint g_FlyInvBlendColor;                 // globals_2D70000.h — per-channel src weight (usually 255 - blend)

// Framebuffer access (general, used by fly + moon + all scanline renderers):
extern uint* g_ZBufferScanlineArray[1200];      // globals_2CF0000.h
extern void* g_ScreenBufferArray[1200];         // globals_2CF0000.h — typed as void*, cast to uint*/ulonglong* per use
extern int g_BitsPerPixel;                      // globals_670000.h — 16 or 32
extern uint g_Hardware32BitPalette[256];        // used by CMoon cloud overlay (palette → ARGB)
```

`_MMX_INTEGER` is a union of `ulonglong mm`, `uint u32[2]`, `_BIT_INTEGER32 b32[2]` — always accessed via `.mm` in the keeps.

---

## Part 7 — Conversion Status (as of this document)

Converted to `.keep.cpp` (20 total):

- `blendCoronaTextureSpan_FUN_004517f0`
- `alphaBlendPixelsMMX_FUN_00492e8a`
- `blendBilerpLightmapToTexture64BitOutputOffset_FUN_00491c9a`
- `blendBilerpLightmapToTexture64BitOutput_FUN_004917bc`
- `blendBilerpTextureWithLightmapMMX_FUN_00493450`
- `blendLightmapToTexture32BitInputOutput_FUN_004926e1`
- `blendLightmapToTexture32BitOutputAmbient_FUN_00492bd5`
- `blendLightmapToTexture64BitOutputAmbient_FUN_004925c5`
- `blendLightmapToTexture64BitOutputBlendBias_FUN_004924a9`
- `blendLightmapToTextureMMX32BitBlendBias_FUN_00492f03`
- `blendLightmapToTextureMMX64BitAmbient_FUN_00493dc4`
- `blendSinglePixelLightmapMMX_FUN_004937b6`
- `blendSinglePixelLightmapNoRoundingMMX_FUN_00491f90`
- `blendTextureWithLightmapMMX_FUN_00493860`
- `spatialFilter9TapMMX_FUN_004923ff`
- `verticalBlur3TapMMXStride128_FUN_004922c8`
- `verticalBlur3TapMMXStride256_FUN_00492185`
- `verticalBlur3TapMMXStride320_FUN_00492042`
- `drawFlyPixel_FUN_004cc230` (core/flies.cpp)
- `CMoon_render_FUN_00529ed0` (core/moon.cpp)

The three `verticalBlur3Tap` siblings confirmed the "direct template" prediction — each keep differed from Stride128 only in the single row-stride constant (`0x80` → `0x100` → `0x140`). Copy-paste took minutes; the scalar formula, FC-bias periodic-mod-8 indexing, sum-then-saturate pipeline, and output cadence are all identical.

`CMoon_render` confirmed the "90% untouched" prediction in `MMX_FUNCTIONS_ANALYSIS.md` Tier 7. Only the 320-iteration-per-scanline cloud overlay inner loop needed rewriting; the moon-model render, 30-bat animation loop, and blend-mode plumbing all stayed identical modulo a single `(uint *)` cast on `g_ScreenBufferArray[y]` (the only compile error was `void *` → `uint *` assignment).

Already compiling from raw decomp, **no keep needed** — discovered while planning Tier 6 work:

- `renderPerspectiveTexturedScanline_FUN_004940e9` (59 lines)
- `renderTexturedDecalMMXScanline_FUN_0049169d` (70 lines)
- `renderTexturedAlphaMMXScanline_FUN_004907e7` (74 lines)

These three use MMX registers **only as integer scratch** for perspective UV interpolation. No packed-byte shuffles, no pixel blending, no `CONCAT*` towers. They just sort edges, compute U/V/W deltas via `g_ReciprocalLookupTable`, walk the scanline doing texel lookups through `g_Hardware32BitPalette` with optional Z-test. The sibling doc's Tier 6 classification conflates "binary uses MMX instructions" with "Ghidra decomp fails to compile" — only the two full-featured pixel-blending renderers (below) hit the failure mode.

Not yet converted:

- Utility/memcpy family (4 functions) — trivial, covered by Tier 1 in the sibling doc.
- Matrix transforms (2) — have non-MMX fallback paths in the binary already; covered by Tier 2.
- **`renderMMXPerspectiveScanline16_FUN_005b4823` (596 lines) and `renderMMXPerspectiveScanline32_FUN_005b44b5` (similar)** — the two heavy scanline renderers with alpha/fog/per-vertex-color/Z-buffer and either 32→16 pack or direct 32-bit output. These hit the MMX-packed-byte failure mode and require a dedicated session.

---

## Part 8 — Lessons / Patterns for Future Conversions

1. **The variant matrix is the fastest way in.** For any new MMX function in this file, figure out its knobs along the 6 axes (palette bilerp / lightmap share / I/O width / output conversion / bias pair / pixels-per-iter) from the `.cpp` signature and the lightmap-index math; then copy-paste the scalar template and wire it up.

2. **Always trust the `.asm` over the `.cpp`** for MMX functions. Ghidra's decompilation of MMX is systematically lossy (the `CONCAT*` towers, the missing sprintf args, the phantom `rep movsd` loops). The `.asm` is generated from the binary directly and is ground truth.

3. **Don't try to recover intermediate-saturation semantics exactly.** `paddusw` saturates at each add; the scalar keeps sum-then-saturate once. For typical byte values with FC=0, this is identical. With non-trivial FC values the two can disagree in the low bits — the keeps accept this approximation, noting it where relevant (only `verticalBlur3Tap...Stride128` has a non-zero FC path).

4. **The bias globals are a rotation, not a hierarchy.** `Bias1/2`, `Bias3/4`, `Bias5/6`, `AmbientLightMMX1/2` — these are just 4 different pairs used by different passes of the rendering pipeline. Which pair a function uses tells you what rendering pass it serves, not anything about the blend math itself.

5. **Palette cross-wiring is intentional in `alphaBlendPixelsMMX`.** `source1` gets `alpha2` and vice versa. Don't "fix" it — the caller compensates.

6. **The 16-bit output conversion uses runtime-configured shifts.** The masks and shift counts are set once at display-mode init. The keeps must load them dynamically from the globals (not hardcode) — same display binary runs in multiple bit depths.

7. **`__BITCAST_UINT64(g_LightmapXorMask)` is mandatory.** The original decomp has `(ulonglong)0.12694552529182901` which is a *truncating* cast, not a reinterpret — it evaluates to 0. Always reinterpret through the bit-cast helper when converting the XOR mask.

8. **The standard alpha-blend idiom is `(src*inv + dst*w) >> 8`, NOT the lightmap chain.** The lightmap family's `(pix*pal × lm + solid*lm + bias) >> 4` pattern is specific to textured-lit-surface compositing. Transparent-particle blends (flies, fonts, UI) use the simpler Porter-Duff-style `(src * inv_alpha + dst * alpha) >> 8` with no XOR mask, no solid-color chain, no lightmap data. Different global pairs too: `g_FlyBlendColor / g_FlyInvBlendColor` vs the `LightmapBlendBias*` rotation. When approaching a new MMX alpha blend, the first question is which of these two idioms applies — the asm tells you via the presence or absence of a `pxor MM, [xor_mask]` instruction.

9. **Inverted Z-buffer convention.** The Z-tests in `drawFlyPixel` and (presumably) elsewhere use `JBE → skip` — meaning the draw happens when `new_z > stored_z`. This is the opposite of the standard "closer Z wins" convention, strongly suggesting Nocturne stores `1/z` or a similar reciprocal. Preserve the comparison direction literally; don't "correct" it based on OpenGL/D3D defaults.

10. **"Mostly non-MMX" functions need surgical replacement, not full rewrites.** `CMoon_render` is ~230 instructions total, but only one 320-iteration inner loop uses MMX. Keep the 90%-non-MMX surrounding code verbatim (after fixing any `void *` cast issues from raw framebuffer pointers), and rewrite only the inner loop. Same applies to any future "FPU-heavy scene render with a small MMX composite overlay" functions.

11. **`CONCAT44(x, x)` is the "broadcast to both pixels" pattern.** When an MMX register holds 2 pixels × 4 bytes and both pixels need the same 32-bit additive contribution (e.g., the same cloud-texture palette sample), the MMX code `movd` the value into both halves via `CONCAT44(pal, pal)`. Scalar equivalent: just apply the same 4-byte contribution twice, once per pixel in the pair — no clever packing needed.

12. **Test-compile before assuming an MMX function needs a keep.** "Binary uses MMX instructions" and "Ghidra decomp fails to compile" are not the same set. Functions that use MMX registers as *integer scratch* (perspective UV interpolation, matrix spill, bulk memcpy) decompile cleanly — no packed-byte shuffles means no `CONCAT*` / `uint5` / `uint7` artifacts. Only functions that do *per-byte packed pixel math* (`punpcklbw → pmullw/pmulhw → packuswb`) trigger the failure mode. When surveying remaining work, run `test_compilation.sh` on the raw `.cpp` first — the 3 scanline renderers `renderPerspectiveTexturedScanline` / `renderTexturedDecalMMXScanline` / `renderTexturedAlphaMMXScanline` all passed untouched despite being flagged Tier 6 in the inventory doc.
