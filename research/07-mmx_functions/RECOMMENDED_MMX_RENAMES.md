# Recommended MMX Function Renames

**Date**: 2026-04-14
**Companion to**: `MMX_BLEND_FAMILY_DECODED.md` (Part 2 — The Variant Matrix)
**Scope**: The 12 lightmap-blend-family MMX functions plus a couple of non-blend outliers whose current names mix axes, hide the real axis, or are flat-out wrong about what the code does.

---

## Why rename

Per the decoded writeup, every lightmap-blend variant is the **same formula** parameterized along 6 axes. The current names encode one or two of those axes arbitrarily — e.g. `64BitOutputAmbient` mixes output width with the bias-pair source — while other variants bury the axes entirely (`InputOutput`, `NoRounding`). Two sibling functions named `...32BitOutputAmbient` and `...64BitOutputAmbient` look like they only differ in output width, but they also differ in lightmap sharing, pixels-per-iteration, and input width.

The goal is a name format where each axis appears in the same position, with the same spelling, so a reader can diff two names and see the actual variation.

---

## Proposed format — blend family

```
blend[Bilerp]Lightmap<Share><InW>to<OutW><Bias><PxN>MMX
```

| Slot | Values | Meaning |
|---|---|---|
| `[Bilerp]` | *(omit)* / `HBilerp` / `VHBilerp` | Palette bilerp: none / horiz-only / vert+horiz |
| `<Share>` | `PerPx` / `Shared` / `Shared4` | Lightmap fetch cadence |
| `<InW>` | `U32` / `U64` | Input buffer read width (`uint *` vs `ulonglong *`) |
| `<OutW>` | `U32` / `U16p` / `U64p` | Output: raw 32-bit / 16-bit display-packed / 64-bit packed |
| `<Bias>` | `NoBias` / `Ambient` / `BB12` / `BB34` / `BB56` | Additive bias global pair |
| `<PxN>` | `Px1` / `Px2` / `Px4` | Pixels produced per loop iteration (letter-first to avoid digit-adjacency ambiguity with adjacent slots like `BB12`) |
| `MMX` suffix | always last | Tags the family; never mid-name |

Reading order is dataflow: **input → lightmap fetch → output format → bias → stride**. The `MMX` tag always anchors the end so it stops drifting (today it appears mid-name in `...MMX64BitAmbient` and `...MMX32BitBlendBias`).

---

## Rename table — blend family

Matrix values copied from `MMX_BLEND_FAMILY_DECODED.md` Part 2.

| # | Current name | Proposed name | What the old name got wrong |
|---|---|---|---|
| 1 | `blendSinglePixelLightmapNoRoundingMMX` | `blendLightmapSharedU32toU32NoBiasPx1MMX` | "NoRounding" isn't an axis — the real difference vs #2 is output format (`U32` raw vs `U16p` display-packed). |
| 2 | `blendSinglePixelLightmapMMX` | `blendLightmapSharedU32toU16pNoBiasPx1MMX` | Most-generic name for the most-specific variant. Doesn't hint at 16-bit-packed output or no-bias path. |
| 3 | `blendLightmapToTexture32BitInputOutput` | `blendLightmapPerPxU32toU32BB12Px2MMX` | "InputOutput" means nothing. Hides per-pixel sharing, bias pair, and 2-px stride. |
| 4 | `blendLightmapToTexture32BitOutputAmbient` | `blendLightmapPerPxU64toU32AmbientPx2MMX` | "32Bit" refers to output here but to input in sibling names — axis collision. Hides `ulonglong *` input. |
| 5 | `blendLightmapToTexture64BitOutputAmbient` | `blendLightmapShared4U64toU64pAmbientPx4MMX` | Looks like it only differs from #4 in output width; actually differs in sharing (4-px), output packing, and stride. |
| 6 | `blendLightmapToTexture64BitOutputBlendBias` | `blendLightmapShared4U64toU64pBB12Px4MMX` | Same as #5 — "BlendBias" is the generic family name; the pair index (1/2) is the real axis. |
| 7 | `blendLightmapToTextureMMX64BitAmbient` | `blendLightmapPerPxU64toU16pAmbientPx2MMX` | `MMX` mid-name; "64Bit" here means input, unlike #4/#5. Hides 16-bit-packed output. |
| 8 | `blendTextureWithLightmapMMX` | `blendLightmapPerPxU32toU16pBB12Px2MMX` | Verb inversion (`TextureWithLightmap` vs `LightmapToTexture`) reads as a different operation. It isn't. |
| 9 | `blendLightmapToTextureMMX32BitBlendBias` | `blendHBilerpLightmapSharedU64toU16pBB56Px2MMX` | `MMX` mid-name; "32Bit" refers to output but input is `ulonglong *`; doesn't flag horizontal bilerp; doesn't name the specific pair (BB5/6). |
| 10 | `blendBilerpLightmapToTexture64BitOutputOffset` | `blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX` | "Offset" is vague (and not an axis). Doesn't distinguish vert+horiz from horiz-only bilerp. |
| 11 | `blendBilerpLightmapToTexture64BitOutput` | `blendHBilerpLightmapSharedU64toU64pBB12Px2MMX` | Same issue — "Bilerp" without `H`/`VH` collides with #10. |
| 12 | `blendBilerpTextureWithLightmapMMX` | `blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX` | Verb inversion + ambiguous "Bilerp" + hidden bias pair (BB3/4 is unique to this variant). |

---

## Rename table — non-blend outliers

Only one outlier needs renaming:

| Current name | Proposed name | Reason |
|---|---|---|
| `verticalBlur3TapMMXStride128` | `blur3x3MMXStride128` | Per the decoded writeup this is a **full 3×3 blur**, not a vertical 3-tap. The `psllq`/`psrlq` pass inside the MMX register does the horizontal taps. Current name misleads about the kernel shape. |

The rest of Part 4 (`spatialFilter9TapMMX`, `blendCoronaTextureSpan`, `alphaBlendPixelsMMX`, `drawFlyPixel`, `CMoon_render`) are fine as-is — they describe what the function does and don't collide with sibling variants.

---

## Notes on applying this

- Names are long because the axis count is large. That's the tradeoff for unambiguous sibling diffs; shortening any slot re-introduces the collisions the current names already have.
- Bias-pair tokens (`BB12`, `BB34`, `BB56`, `Ambient`, `NoBias`) map 1:1 to the globals listed in `MMX_BLEND_FAMILY_DECODED.md` Part 2 → "Bias pair patterns" — applying a rename is mechanical once the matrix row is identified.
- `MMX` as a trailing tag (not a mid-name token) matches the existing `spatialFilter9TapMMX` / `alphaBlendPixelsMMX` / `saveMMXRegisters` convention; the mid-name placements in the current blend family are the inconsistent ones.
- Ghidra side: renames happen in the symbol table; the exporter picks them up on next re-export. No `.keep` file changes needed beyond the function signature line.
