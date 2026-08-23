# `g_RenderStateFlags` — Verified Bit Semantics

**Date**: 2026-04-14
**Global**: `g_RenderStateFlags` (`.dword` int32 bitmask)
**Supersedes**: the `g_RenderStateFlags` section of `NOCTURNE_RENDER_FLAGS_EQUATES.h` — the atomic bit names were inferred from DirectX state analogs; most are directionally right but three need renames, and all ~30 combo `#define`s should be deleted (consumers bit-test individual bits, never compare against combo values).
**Method**: bit-by-bit audit of every reader test site in `.keep.cpp` scanline renderers and `drender.cpp`, cross-checked against `research/07-mmx_functions/RENDER_PERSPECTIVE_SCANLINE16_DECODED.md`.

---

## TL;DR

`g_RenderStateFlags` is a genuine **bitfield**, not an enum. Ten bit positions (0x001 through 0x200) are tested independently by consumers. Every current atomic bit name in the equate file is substantively correct *except* for 0x010, 0x100, and 0x200 — each of which is named after a DirectX state that doesn't match what the bit actually gates in Nocturne's software rasterizer. The ~30 combo `#define`s in the equate file (`RENDER_VERTEX_LIGHTING`, `RENDER_LIT_DETAILED`, etc.) are fabricated — no reader ever equality-checks against a combo. There is exactly **one** equality check: `g_RenderStateFlags.dword == 0x80`, a special "Z-only fast path" in the scanline dispatch.

---

## Bit usage map

All evidence cited from `wincore/windll.cpp/renderMMXPerspectiveScanline16_FUN_005b4823.keep.cpp` unless otherwise noted. The 32-bit sibling (`renderMMXPerspectiveScanline32_FUN_005b4031.keep.cpp`) has the same structure at slightly different line numbers; 16-bit lines shown for readability. Also corroborated in `research/07-mmx_functions/RENDER_PERSPECTIVE_SCANLINE16_DECODED.md` Part 2.

| Bit | Current name | Observed behavior | Evidence | Verdict |
|---|---|---|---|---|
| **0x001** | `RENDER_TEXTURE_ENABLE` | In Loop C (solid path), **selects texture sampling vs solid-color source**: `flag=1` → sample `g_CurrentTextureData`; `flag=0` → use `g_SpecialColor` (if 0x200) or `g_ActiveRenderColor`. Irrelevant in Loops A and B (they're already textured). | keep.cpp:190 | ✅ **Confirmed** — meaning matches name |
| **0x002** | `RENDER_ALPHA_BLEND` | **Loop selector**: forces the solid-color path (Loop C) even when no opacity data is available. Decoded doc Part 2 calls this an "untextured / solid" selector, triggered when either `g_CurrentTextureOpacityData == 0 && flag=1` or when the shortcut `flag & 2` is true. | keep.cpp:178 | ⚠️ **Rename** — the bit has nothing to do with alpha blending; it's the untextured/solid loop selector. Suggested: `RENDER_FORCE_SOLID_LOOP` or `RENDER_UNTEXTURED`. |
| **0x004** | `RENDER_PRIMITIVE_SPECIAL` | **Gouraud shading.** In the software rasterizer it is color-accumulator source #2: when set (and 0x200 clear), the per-pixel color is `clamp(v - 0x100, 0, 0xfff) << 3` broadcast to all three RGB channels. The interpolant is the **Gouraud light gradient**, not fog-Z — it reuses `SSoftwareEdge.z_current` as its storage slot, which is what made it look Z-derived here. Confirmed against the hardware path: `tridx7!applyRenderState_FUN_10003f10` maps this bit to `D3DRENDERSTATE_SHADEMODE` (2 = Gouraud vs 1 = Flat) **and** switches `buildTLVertex` to per-vertex `src->r`. | keep.cpp:136–150; `tridx7!applyRenderState_FUN_10003f10`; `tridx7!buildTLVertex_FUN_100044b0` | ⚠️ **Rename** — `RENDER_GOURAUD`. (Earlier revisions of this table called it fog-Z; that reading came from the reused `z_current` slot and is wrong.) |
| **0x008** | `RENDER_ADVANCED_MODE` | **Fog.** In Loop C it gates the blend against `g_SolidColorMode`: clear → emit the lit pixel raw; set → LERP `(lit_pixel, g_SolidColorMode)` with per-pixel alpha via `g_AlphaTable`. `g_SolidColorMode` **is** the fog colour (built from `g_FogColorIndexR/G/B` in `compositeLightmapToFramebuffer`), so this is fog blending, not a generic solid-colour blend. The hardware path agrees: under this bit `buildTLVertex` computes the fog factor `0xff - (src->a >> 8)` and packs it into the **specular alpha**. | keep.cpp:181, 216; `tridx7!buildTLVertex_FUN_100044b0` | ⚠️ **Rename** — `RENDER_FOG`. `RENDER_SOLID_ALPHA_BLEND` describes the mechanism but hides what it is for. |
| **0x010** | `RENDER_LASTPIXEL` | **Color-accumulator source #3 (lighting-value)**: when set (and 0x200/0x004 both clear), color is `g_AlphaTable[clamp((g_CurrentLightingValue - 0x100) >> 4, 0, 0xff)] << 7`, broadcast to all channels. No relationship to DirectX's `D3DRENDERSTATE_LASTPIXEL` (which controls line-segment edge inclusivity). | keep.cpp:152–160 | ❌ **Rename** — current name is wrong. Suggested: `RENDER_COLOR_FROM_LIGHT` or `RENDER_LIGHTING_COLOR`. |
| **0x020** | `RENDER_ALPHA_CHANNEL` | **In Loop A only**: gates framebuffer readback for the alpha blend's destination (MM4). Clear → dest = 0 (alpha attenuation only, no destination compositing). Set → read 16/32-bit pixel from `g_CurrentScreenPtr + (edi>>1)`, expand to 4 ushorts. Loop B always reads the framebuffer regardless. | keep.cpp:395 + decoded doc lines 209–211, 220 | ⚠️ **Rename** — not about an alpha channel in the texture. It's the dest-read gate. Suggested: `RENDER_BLEND_READ_DEST` or `RENDER_READ_FRAMEBUFFER`. |
| **0x040** | `RENDER_DEPTH_TEST` | **Z-buffer test gate**, tested immediately before every pixel write. Clear → skip Z-test (always pass). Set → `if (cur_w < zbuffer[edi/4]) skip pixel`. Consistent across all three render loops. | keep.cpp:187, 279, 387 | ✅ **Confirmed** |
| **0x080** | `RENDER_DEPTH_WRITE` | **Z-buffer write gate**, tested immediately after every accepted pixel. Clear → no Z-write. Set → `zbuffer[edi/4] = cur_w`. Plus the special case `g_RenderStateFlags.dword == 0x80` (*exactly* DEPTH_WRITE, no other bits) triggers the Z-only scanline fill at the top of the scanline dispatcher — color writes are skipped entirely. | keep.cpp:60 (exact-equality Z-only fast path), 239, 354, 448 | ✅ **Confirmed** — with the caveat that the exact-equality fast path is load-bearing and should be preserved if you rename anything. |
| **0x100** | `RENDER_ENGINE_BASE` | **Alpha-source selector (Loops A and B)**: clear → `cur_alpha = g_CurrentAlphaValue << 8` (global alpha, flat across the primitive). Set → keep `cur_alpha` from per-vertex interpolation (the `fog_current` gradient set up earlier). | keep.cpp:270 | ❌ **Rename** — name implies an engine-tier flag that doesn't exist as such. Suggested: `RENDER_ALPHA_FROM_VERTEX` or `RENDER_PER_VERTEX_ALPHA`. |
| **0x200** | `RENDER_ENGINE_ENHANCED` | **Two unrelated effects** selected by this bit: (a) **color accumulator source #1** — the top-priority branch of the color chain uses per-vertex RGB interpolated from the `SSoftwareEdge` fields `base.z_current`, `color_current`, `alpha_current` (all `>> 1` to make headroom); (b) in Loop C, selects `g_SpecialColor` over `g_ActiveRenderColor` when 0x001 is also clear. | keep.cpp:115–135 (per-vertex RGB), 195 (special color selector) | ❌ **Rename** — not "engine enhanced" anything. Primary effect is per-vertex RGB. Suggested: `RENDER_COLOR_FROM_VERTEX` or `RENDER_PER_VERTEX_RGB`. |

---

## The color-accumulator priority chain

Three bits (0x200, 0x004, 0x010) are not independent toggles — they form a **priority chain** in the scanline renderer's MM5/MM6 setup (keep.cpp:115–167):

```
if      (flags & 0x200) { color = per-vertex RGB interpolation }       // highest priority
else if (flags & 0x004) { color = Gouraud light gradient (gray ramp) }
else if (flags & 0x010) { color = lighting-value lookup (g_AlphaTable) }
else                    { color = full-bright (g_AlphaTable[0xff]) }   // default
```

If a primitive has 0x200 **and** 0x004 set in its flags, only 0x200 takes effect — the Gouraud path is dead. Setting 0x004 **and** 0x010 together similarly drops the lighting-value path. This is important when reasoning about which writer combos produce which runtime color mode.

---

## Render-loop dispatch

Two bits (0x002 and implicit opacity pointer) pick one of three inner loops in every scanline renderer:

| Condition | Loop | Purpose |
|---|---|---|
| `g_CurrentTextureOpacityData == 0 && (flags & 2) == 0` | **A** | Textured, no opacity map; always alpha-blends against the framebuffer (dest-read gated by 0x020) |
| `g_CurrentTextureOpacityData != 0` | **B** | Textured with opacity map; always reads the framebuffer; has a fast-path for alpha=full + opacity=full + blend_mode=0 |
| `g_CurrentTextureOpacityData == 0 && (flags & 2) != 0` | **C** | Untextured solid path (base color from `g_SolidColorMode`); bit 0x008 gates alpha-blend against the solid color |

Plus the exact-equality fast path: `flags == 0x80` (DEPTH_WRITE only, nothing else) → Z-only fill at the top of the dispatcher, no color writes (keep.cpp:60).

---

## Consumer usage summary (all `&` tests found)

```
scanline renderers (keep.cpp + non-keep)   uses 0x001, 0x002, 0x004, 0x008, 0x010, 0x020, 0x040, 0x080, 0x100, 0x200
drender.cpp CDemonRenderer_renderGeometryBatch   uses 0x001, 0x005 (= 0x001|0x004 compound test)
drender.cpp CDemonRenderer_clipAndFillPoly       uses 0x001, 0x005 via .bytes[0]; 0x002 via .bytes[1] (= 0x200 on full dword)
```

The compound `& 5` test in `clipAndFillPoly` / `renderGeometryBatch` checks "any of {TEXTURE_ENABLE, FOG_COLOR} set" — a pre-filter for whether clipping needs to preserve texture/color interpolants. It's a perfectly ordinary compound bit test, not a hidden combo atom.

---

## Writer values — what the combos actually mean

All observed raw integer writes (spread across `engine/3d.c`, `engine/drender.cpp`) decomposed into their bit components:

| Written value | Bit decomposition (new names, draft) | Current combo name (to be deleted) |
|---|---|---|
| `0x000` | — | *none* |
| `0x001` | TEX_ENABLE | `RENDER_TEXTURE_ENABLE` |
| `0x002` | FORCE_SOLID_LOOP | `RENDER_ALPHA_BLEND` |
| `0x003` | TEX_ENABLE \| FORCE_SOLID_LOOP | `RENDER_VERTEX_LIGHTING` |
| `0x004` | FOG_COLOR | `RENDER_PRIMITIVE_SPECIAL` |
| `0x005` | TEX_ENABLE \| FOG_COLOR | `RENDER_UV_WRAP_U` |
| `0x008` | SOLID_ALPHA_BLEND | `RENDER_ADVANCED_MODE` |
| `0x009` | TEX_ENABLE \| SOLID_ALPHA_BLEND | `RENDER_ADVANCED_TEXTURED` |
| `0x00D` | TEX_ENABLE \| FOG_COLOR \| SOLID_ALPHA_BLEND | `RENDER_PLANEMASK` |
| `0x010` | LIGHTING_COLOR | `RENDER_LASTPIXEL` |
| `0x013` | TEX_ENABLE \| FORCE_SOLID_LOOP \| LIGHTING_COLOR | `RENDER_LIT_DETAILED` (but note: LIGHTING_COLOR is dead here — FORCE_SOLID_LOOP routes to Loop C which uses g_SolidColorMode, not the lighting-value color) |
| `0x020` | BLEND_READ_DEST | `RENDER_ALPHA_CHANNEL` |
| `0x023` | TEX_ENABLE \| FORCE_SOLID_LOOP \| BLEND_READ_DEST | `RENDER_LIT_COMPLEX` |
| `0x033` | …above + LIGHTING_COLOR | `RENDER_ALPHA_DETAILED` |
| `0x040` | DEPTH_TEST | `RENDER_DEPTH_TEST` |
| `0x041` | TEX_ENABLE \| DEPTH_TEST | `RENDER_ENGINE_SPECIAL_DEPTH` |
| `0x067` | TEX_ENABLE \| FORCE_SOLID_LOOP \| FOG_COLOR \| BLEND_READ_DEST \| DEPTH_TEST | *(unnamed in equate file — one of the "missing" combos)* |
| `0x080` | DEPTH_WRITE (exact = Z-only fast path) | `RENDER_DEPTH_WRITE` |
| `0x081` | TEX_ENABLE \| DEPTH_WRITE | `RENDER_DEPTH_TEXTURED` |
| `0x083` | TEX_ENABLE \| FORCE_SOLID_LOOP \| DEPTH_WRITE | `RENDER_DEPTH_TEXTURED_LIT` |
| `0x085` | TEX_ENABLE \| FOG_COLOR \| DEPTH_WRITE | `RENDER_DEPTH_TEXTURED_ADV` |
| `0x08D` | TEX_ENABLE \| FOG_COLOR \| SOLID_ALPHA_BLEND \| DEPTH_WRITE | `RENDER_COMPLEX_EFFECTS` |
| `0x090` | LIGHTING_COLOR \| DEPTH_WRITE | `RENDER_ALTERNATIVE_DEPTH` |
| `0x0C0` | DEPTH_TEST \| DEPTH_WRITE | `RENDER_DEPTH_TEST_WRITE` / `RENDER_TEXTURE_BASE` |
| `0x0C1` | TEX_ENABLE \| DEPTH_TEST \| DEPTH_WRITE | `RENDER_TEXTURE_LIT` |
| `0x0C3` | …+ FORCE_SOLID_LOOP | `RENDER_TEXTURE_PERSPECTIVE` |
| `0x0C4` | FOG_COLOR \| DEPTH_TEST \| DEPTH_WRITE | `RENDER_TEXTURE_COMPLEX` |
| `0x0C5` | TEX_ENABLE \| FOG_COLOR \| DEPTH_TEST \| DEPTH_WRITE | `RENDER_TEXTURE_UV_WRAPPED` |
| `0x0CD` | …+ SOLID_ALPHA_BLEND | `RENDER_TEXTURE_ENHANCED` |
| `0x0D0` | LIGHTING_COLOR \| DEPTH_TEST \| DEPTH_WRITE | `RENDER_PLANE_MASKED` |
| `0x0D1` | TEX_ENABLE \| LIGHTING_COLOR \| DEPTH_TEST \| DEPTH_WRITE | `RENDER_PLANE_MASKED_LIT` |
| `0x0D3` | …+ FORCE_SOLID_LOOP | `RENDER_PLANE_MASKED_COMPLEX` |
| `0x0D9` | TEX_ENABLE \| SOLID_ALPHA_BLEND \| LIGHTING_COLOR \| DEPTH_TEST \| DEPTH_WRITE | `RENDER_FULL_FEATURED` |
| `0x0E3` | TEX_ENABLE \| FORCE_SOLID_LOOP \| BLEND_READ_DEST \| DEPTH_TEST \| DEPTH_WRITE | `RENDER_ALPHA_PERSPECTIVE` |
| `0x100` | ALPHA_FROM_VERTEX | `RENDER_ENGINE_BASE` |
| `0x163` | ALPHA_FROM_VERTEX \| TEX_ENABLE \| FORCE_SOLID_LOOP \| DEPTH_TEST \| DEPTH_WRITE | `RENDER_ENGINE_HIGH_QUALITY` |
| `0x1E7` | …+ BLEND_READ_DEST + FOG_COLOR (= 0x100 \| 0xE7) | `RENDER_ENGINE_PREMIUM_QUALITY` |
| `0x200` | COLOR_FROM_VERTEX | `RENDER_ENGINE_ENHANCED` |
| `0x204` | COLOR_FROM_VERTEX \| FOG_COLOR | *(unnamed — one of the "missing" combos; note: COLOR_FROM_VERTEX overrides FOG_COLOR per the priority chain, so the 0x004 bit is dead here)* |
| `0x20D` | COLOR_FROM_VERTEX \| TEX_ENABLE \| FOG_COLOR \| SOLID_ALPHA_BLEND | `RENDER_PERSPECTIVE_ENHANCED` |
| `0x267` | COLOR_FROM_VERTEX \| TEX_ENABLE \| FORCE_SOLID_LOOP \| FOG_COLOR \| BLEND_READ_DEST \| DEPTH_TEST | `RENDER_ENGINE_ULTRA_QUALITY` |
| `0x28D` | COLOR_FROM_VERTEX \| TEX_ENABLE \| FOG_COLOR \| SOLID_ALPHA_BLEND \| DEPTH_WRITE | `RENDER_SPECIAL_EFFECTS` |
| `0x2CD` | COLOR_FROM_VERTEX \| TEX_ENABLE \| FOG_COLOR \| SOLID_ALPHA_BLEND \| DEPTH_TEST \| DEPTH_WRITE | `RENDER_ENGINE_CORE_PREMIUM` |
| `0x2E7` | COLOR_FROM_VERTEX \| TEX_ENABLE \| FORCE_SOLID_LOOP \| FOG_COLOR \| BLEND_READ_DEST \| DEPTH_TEST \| DEPTH_WRITE | `RENDER_ENGINE_CORE_ULTRA` |
| `0x327` | COLOR_FROM_VERTEX \| ALPHA_FROM_VERTEX \| TEX_ENABLE \| FORCE_SOLID_LOOP \| FOG_COLOR \| BLEND_READ_DEST | `RENDER_ENGINE_CORE_COMPLEX` |
| `0x367` | COLOR_FROM_VERTEX \| ALPHA_FROM_VERTEX \| TEX_ENABLE \| FORCE_SOLID_LOOP \| FOG_COLOR \| BLEND_READ_DEST \| DEPTH_TEST | `RENDER_ENGINE_CORE_MAXIMUM` |
| `999` (= `0x3E7`) | COLOR_FROM_VERTEX \| ALPHA_FROM_VERTEX \| TEX_ENABLE \| FORCE_SOLID_LOOP \| FOG_COLOR \| BLEND_READ_DEST \| DEPTH_TEST \| DEPTH_WRITE | `RENDER_EXTREME_QUALITY` |

Several combos include dead bits (e.g. `0x013` has LIGHTING_COLOR set but routes to Loop C where it doesn't matter; `0x204` sets FOG_COLOR but COLOR_FROM_VERTEX overrides it). Those dead bits are either Watcom-era defaults, leftover from a removed feature, or copy-paste typos — **the combo names in the current equate file treat them as intentional atoms, which obscures the bug.**

---

## Recommended rename table

For the **atomic bits** (drop-in replacements in the equate header):

| Old | New | Why |
|---|---|---|
| `RENDER_TEXTURE_ENABLE` (0x001) | `RENDER_TEX_ENABLE` | Keep — cosmetic shortening only |
| `RENDER_ALPHA_BLEND` (0x002) | `RENDER_FORCE_SOLID_LOOP` | Not an alpha flag; it's the solid-path loop selector |
| `RENDER_PRIMITIVE_SPECIAL` (0x004) | `RENDER_FOG_COLOR` | It's the fog-Z color source for the color accumulator |
| `RENDER_ADVANCED_MODE` (0x008) | `RENDER_SOLID_ALPHA_BLEND` | Alpha blend vs `g_SolidColorMode` in Loop C only |
| `RENDER_LASTPIXEL` (0x010) | `RENDER_LIGHTING_COLOR` | Not the DirectX lastpixel flag; it's the lighting-value color source |
| `RENDER_ALPHA_CHANNEL` (0x020) | `RENDER_BLEND_READ_DEST` | Gates framebuffer readback for the blend destination |
| `RENDER_DEPTH_TEST` (0x040) | (keep) | Confirmed |
| `RENDER_DEPTH_WRITE` (0x080) | (keep) | Confirmed; preserve the 0x80-exact fast path behavior |
| `RENDER_ENGINE_BASE` (0x100) | `RENDER_ALPHA_FROM_VERTEX` | Switches alpha source between per-vertex and global |
| `RENDER_ENGINE_ENHANCED` (0x200) | `RENDER_COLOR_FROM_VERTEX` | Enables per-vertex RGB interpolation (+ special-color selector in Loop C) |

**All ~30 combo `#define`s should be deleted.** No reader equality-checks against a combo. The only equality test is `== 0x80`, which is `DEPTH_WRITE` (atomic) — it stays supported by the atomic bit name. Writer sites that currently decompile to named combos will decompile to raw hex after deletion; the planned exporter text transform (separate investigation) should decompose those into `(RENDER_BIT_A | RENDER_BIT_B | ...)` form at re-export time.

---

## Deprecation checklist for the equate file

1. Rename the six atomic bits per the table above.
2. Delete every combo constant (all the `RENDER_TEXTURE_*`, `RENDER_DEPTH_TEXTURED*`, `RENDER_PLANE_MASKED*`, `RENDER_ENGINE_*_QUALITY`, `RENDER_ENGINE_CORE_*`, `RENDER_FULL_FEATURED`, `RENDER_ALPHA_PERSPECTIVE`, `RENDER_SPECIAL_EFFECTS`, `RENDER_PERSPECTIVE_ENHANCED`, `RENDER_EXTREME_QUALITY`, `RENDER_VERTEX_LIGHTING`, `RENDER_LIT_*`, `RENDER_ADVANCED_TEXTURED`, `RENDER_ALPHA_DETAILED`, `RENDER_ALTERNATIVE_DEPTH`, `RENDER_COMPLEX_EFFECTS`, `RENDER_DEPTH_TEST_WRITE`, `RENDER_TEXTURE_BASE`, `RENDER_UV_WRAP_U` — every non-atomic line).
3. Remove the "FUNCTION NAME CORRECTIONS" block at the bottom of the current equate file — it cites specific function names that no longer exist in the current decompile and reinforces the "quality tier" framing that doesn't match how the flags actually work.
4. Implement the exporter text transform that decomposes any int literal assigned to `g_RenderStateFlags.dword` (and any int literal ANDed/equaled with it) into a `(FLAG | FLAG | ...)` expression using the atomic names.

---

## Residual questions

1. **Dead bits in writer combos.** `0x013`, `0x204`, and a few others set bits that are provably unreachable at runtime (e.g., FOG_COLOR with COLOR_FROM_VERTEX also set). Are these Watcom compiler artifacts, leftover from removed features, or hand-written by the Nocturne devs as "feature bits" that got re-used? A Ghidra xref audit on each combo value would distinguish. Not urgent — the engine behavior is deterministic regardless.
2. **`RENDER_EXTREME_QUALITY = 999`.** The decimal literal (vs hex) strongly suggests a hand-written source value. It's `COLOR_FROM_VERTEX | ALPHA_FROM_VERTEX | TEX_ENABLE | FORCE_SOLID_LOOP | FOG_COLOR | BLEND_READ_DEST | DEPTH_TEST | DEPTH_WRITE` — every effect bit except the two that are either redundant (`LIGHTING_COLOR` beaten by `COLOR_FROM_VERTEX`) or solid-only (`SOLID_ALPHA_BLEND`). Likely a "kitchen-sink" preset for one specific primitive type.
3. **Bit 0x400+ coverage.** The writer survey found no value ≥ 0x400 and no `& 0x400` test. If Ghidra surfaces any later, they'd be new bits that bypassed this audit.
