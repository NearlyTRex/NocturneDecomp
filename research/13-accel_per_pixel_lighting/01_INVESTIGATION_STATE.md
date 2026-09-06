# Accel-on lighting looks wrong — **SOLVED 2026-08-23**

## ✅ ROOT CAUSE: the GL shim applied fog that D3D never asked for

`gl_ddraw.cpp` `device_SetRenderState`, `case 35` (`D3DRENDERSTATE_FOGTABLEMODE`):

```c
case 35:  // FOGTABLEMODE — 0 NONE, 1 EXP, 2 EXP2, 3 LINEAR
    switch (value) {
        case 1: gl.Fogi(GL_FOG_MODE, GL_EXP);    break;
        case 2: gl.Fogi(GL_FOG_MODE, GL_EXP2);   break;
        case 3: gl.Fogi(GL_FOG_MODE, GL_LINEAR); break;
        default: break;              // <-- NONE fell through, GL_FOG stayed ON
    }
```

In D3D7, `FOGTABLEMODE = NONE` together with `FOGENABLE = TRUE` means **"no table fog — use
per-vertex fog carried in the specular alpha."** GL has no vertex-fog concept: once `GL_FOG` is
enabled it *always* applies table fog, with whatever mode is current — by default `GL_EXP` at
density 1.0, blending toward the fog colour `(5, 5, 5)`.

So every primitive drawn through the DLL was fogged toward near-black when D3D would have applied
none. The blitted pre-rendered backdrop never goes through that path, which is exactly why only
3D geometry was affected.

**Verified live (frame-synced captures, character crop means):**

```
software        16.083
accel, fog ON   13.112   ratio 0.8152     <- the defect
accel, fog OFF  16.471   ratio 1.0241     <- matches software
```

The residual `+2.4 %` is the *expected* result: the single-pixel trace (C41) independently
predicted hardware should be ~2 % brighter than software for identical inputs
(`texel*(cw>>7)/255` vs `texel*cw/32768`). **Every measurement in this investigation now
reconciles.**

**The fix:** GL fog is enabled only when `FOGENABLE != 0 && FOGTABLEMODE != NONE`, applied
through a single `apply_fog_state()` helper so the two renderstates cannot disagree. A runtime
override `nocturne_set_fog_override(0|1|2)` is retained for A/B work.

**Follow-up (unfixed, separate):** the per-vertex fog term D3D *did* intend is still dropped —
`buildTLVertex` packs it into specular alpha and the GL path passes only 3 components to
`glSecondaryColorPointer` (O3). Now that the spurious table fog is gone, implementing real vertex
fog is a fidelity improvement rather than a bug fix.

---

> ## ⚠⚠ STOP — THE "0.5x" NEVER EXISTED. METHOD ERROR. (2026-08-23)
>
> **The headline `on = 0.5*off + 12` is an artefact of the measurement method, not a property
> of the renderer.** Every fit in this document that predates C32 was computed by *first
> masking to the pixels where the two images differ, then least-squares fitting on that
> subset*. That is circular: pre-selecting differing pixels and then measuring their difference
> forces a large apparent gain regardless of the true distributions. C2 says it in as many
> words — "least-squares over the differing pixels" — and every later fit inherited it.
>
> **Measured without the mask, on the same images:**
>
> ```
> user A/B screenshots   biased fit  B = 2.028*A - 4.47      <- the "2x"
>                        UNBIASED    whole-frame mean ratio  1.099
>                        UNBIASED    percentiles p50 1.000  p70 1.133  p90 1.100  p99 1.012
>
> control captures       UNBIASED    hw/sw whole-frame mean  0.905
>                        UNBIASED    char-region mean        0.891
>                        UNBIASED    percentiles p50 0.929 p90 0.905 p98 0.963 p99 0.988
> ```
>
> **The real difference is ~10 %, not 50 %.** A second contributor to the inflated fits is
> **misregistration**: the two rasterizers do not sample identically, so paired-pixel comparison
> on textured surfaces compares different surface points (pointwise rms 4.69 on values averaging
> ~25, i.e. ~19 % scatter). Paired-pixel fits are the wrong tool here.
>
> **Rules for measuring this from now on:**
> 1. **Never fit on a differing-pixels mask.** Compare whole-region means, histograms, or
>    matched percentiles.
> 2. **Prefer percentile/histogram matching** — it is immune to misregistration.
> 3. Keep excluding animation-unstable pixels (C31) — that part was sound.
>
> Sections C1-C31 below are retained for the record. **Their measurements of *where* the
> difference is (characters only) and their many *negative* results remain valid** — those were
> settled by direct instrumentation, not by these fits. What is retracted is the *magnitude*,
> and every hypothesis that existed only to explain a factor of two.

> ## ⚠⚠⚠ THE CAPTURE INSTRUMENT WAS BROKEN — validate it first (2026-08-23)
>
> `nocturne_dump_frontbuffer` called from an arbitrary gdb pause reads the GL framebuffer at
> **whatever point in the frame the pause happened to land**. Four consecutive dumps with
> *nothing changed between them* returned **three distinct images**:
>
> ```
> flt0_1 mean 11.684   flt0_2 mean 7.103   flt0_3 mean 9.896   flt0_4 mean 9.896
> pairwise mean|d|: 1-2 12.274   1-3 9.697   2-3 11.594   3-4 0.000
> ```
>
> The alternation magnitude (`mean|d| 12.27`) is almost exactly what was once attributed to a
> texture-filter change (`12.294`). **It was the instrument, not the renderer.** On screen
> nothing changed when the filter was toggled, while the dumps "showed" a huge change. Trust
> what the screen shows over what a capture reports.
>
> **Correct method — sync the capture to a per-frame point that exists in BOTH modes:**
>
> ```gdb
> break SDL_GL_SwapWindow      # called by nocturne_gl_present_framebuffer (software)
> commands                     # AND by nocturne_gl_swap_only (accel)
> silent
> set $capn = $capn + 1
> if $capn == 2
>   call (int)nocturne_dump_frontbuffer("/tmp/cap_1.ppm")
> end
> cont
> end
> ```
>
> Synced this way, repeat captures agree to `mean|d| 0.1-0.4` (animation only).
>
> **Do NOT sync to `nocturne_render_probe_frame`** — it lives in tridx7's `surface_Flip` and
> **never fires in software mode** (`frames presented = 0`). An A/B built on it silently
> compared a stale file against itself and reported "ratio 0.9998, no difference".
>
> Always: capture 3+ frames per mode, average them, and check self-consistency before comparing.

> ## Measurement traps (still valid)
>
> **1. NEVER switch renderers by poking the globals.** Setting `g_UseExternalRenderer` /
> `g_UseDirect3D` from gdb does **not** produce a real accelerated render — it skips renderer
> init and crashes within seconds. **Use the in-game options screen.**
>
> **2. Setup carries a developer hack.** `NOCTURNE_WINDOW_SCALE = 2` (`shims/shim_config.h`)
> renders at native 640x480 and integer-doubles the SDL window to 1280x960. Nearest-neighbour
> and symmetric across renderers, so it should not affect brightness — but this has **not** been
> confirmed by experiment. Separately `g_CDemonCameraInstance.scale_factor == 2` and
> `g_CameraDownscaleIterations == 1` are engine-side half-res mechanisms, and those are **not**
> symmetric (with accel on the whole CPU/composite path is inert, C29).

**Reference frames are deliberately NOT committed** (binaries do not belong in the repo). To
reproduce any measurement in this document, capture your own pair per the recipe in the
measurement-traps box: interior office scene, switch renderers via the options screen, capture
frame-synced to `SDL_GL_SwapWindow`, 3 frames per mode.

The probe dumps *are* committed, since they are text: `render_probe_2026-08-23.txt` (castle
exterior) and `render_probe_room_2026-08-23.txt` (interior office).

---

## CONFIRMED — measured, not inferred

### C1. Only DLL-drawn geometry changes. The static world is bit-identical.

Numerically, over the A/B pair:

| region | result |
|---|---|
| sky | **100 % identical** |
| castle wall | **99.8 % identical**, max Δ = 1 |
| ground under the characters | 83 % identical |
| Stranger's coat | 35 % identical |
| Svetlana | 42 % identical |
| whole frame | 93373 / 120000 px (78 %) **exactly** equal |

The differing 22 % is exactly the two character models, the muzzle-flash smoke, and a glow on
the castle's rose window. So this is **not** a global per-pixel-lighting failure — whatever is
wrong touches only what the DLL draws.

### C2. The transfer on those pixels is `on ≈ 0.5·off + 12`. CONFIRMED, still live.

> Independently reproduced 2026-08-23 in a bright interior scene: **`hw = 0.49·sw + 2.2`**,
> max Δ 115, peak `62 → 129`. An intermediate claim that this figure was stale was **wrong**
> — see C7 and the warning box at the top for the two measurement traps that produced it.

Least-squares over the differing pixels, per channel:

```
R:  on = 0.461·off + 13.54      peak 179 → 102
G:  on = 0.482·off + 12.80      peak 136 →  78
B:  on = 0.501·off + 11.01      peak  94 →  54
```

**Gain ≈ ½ with a lifted black floor ≈ +12.** That is a gain-and-offset, not a lighting-curve
difference — it rules out "the light tables differ" and points at either a missing ×2 or a
~50 % blend against the backdrop. Line crossover is at 22–27, and the backdrop behind the
characters measures 20–25 in the sky region.

### C3. The hardware path is *designed* to match software 1:1 on 0..1, then overbright above it.

Both sides recovered and cross-checked:

**Software** — `renderMMXPerspectiveScanline16/32`, per
`research/07-mmx_functions/RENDER_PERSPECTIVE_SCANLINE16_DECODED.md:212`:

```
V   = clamp(light − 0x100, 0, 0xfff) << 3       // Gouraud-interpolated light
out = (texel<<4) pmulhw (V>>3)  ==  texel · V/32768
```

`V` saturates at `0x7FF8` ≈ `0x8000`, so full light = unity and the software **hard-clamps at
1.0×**.

**Hardware** — `tridx7!buildTLVertex_FUN_100044b0`:

```c
g_LightingAlpha = (src->r - 0x100) >> 4;            // 0xfff>>4 == 0xff → 1.0 diffuse
if (0xff < g_LightingAlpha) {                       // only ABOVE software's clamp
    g_LightingOverflow = g_LightingAlpha - 0x100;   // → SPECULAR, all three channels
    if (0xff < g_LightingOverflow) g_LightingOverflow = 0xff;
    g_LightingAlpha = 0xff;
}
out->diffuse  = A<<24 | LA<<16 | LA<<8 | LA;
out->specular = fog<<24 | OV<<16 | OV<<8 | OV;
```

with `initDefaultRenderStates_FUN_100035b0` setting D3D renderstate **0x1d
(SPECULARENABLE) = 1**. D3D7 specular is an *additive* second colour applied after the texture
modulate, so the DLL reproduces the software curve at 1:1 across 0..1 and gets a free 0..1
overbright on top.

Check the numbers: at `light−0x100 = 0x7ff`, software gives `0x3FF8/0x8000 = 0.4999`; hardware
gives `0x7ff>>4 = 0x7f`, i.e. `127/255 = 0.498`. **The intended accel-on brightness is 1:1.**

**Therefore the measured ½ is a defect, not faithful behaviour.** Note also that the specular
overbright can only engage *above* the point where software already clips, so "specular is
missing" alone cannot produce a ½ gain either.

Two asm details worth keeping: the shift is `SAR` (`SUB EBX,0x100; SAR EBX,0x4; CMP EBX,0xff;
JLE`), so the value is **signed and has no lower clamp** — a light below `0x100` yields a
negative `g_LightingAlpha` and packs to white. The software side *does* clamp at 0. Harmless
as long as the engine never sends light < 0x100, but it is a real asymmetry.

### C4. Bit 0x004 is GOURAUD, not "fog-Z colour".

`applyRenderState_FUN_10003f10` settles the flag semantics that
`research/02-mrgl_initial_investigation/RENDER_STATE_FLAGS_VERIFIED.md` had to guess at:

| bit | meaning | evidence |
|---|---|---|
| `0x001` | textured | `SetTextureStageState(0, D3DTSS_COLOROP, …)` |
| `0x002` | alpha blend + alpha test | sets renderstates `0x1b`, `0x0f`, `0x15` |
| **`0x004`** | **Gouraud** | sets renderstate `9` (SHADEMODE) to 2 vs 1, *and* switches `buildTLVertex` to per-vertex `src->r` |
| `0x010` | **flat** lighting scalar | `g_LightingAlpha = (*bridge.current_lighting − 0x100) >> 4` — matches the existing doc |
| `0x0c0` | Z test / Z write | renderstates 7 / 0x0e / 0x17 |
| `0x100` | per-vertex alpha | `src->a >> 8` vs `*bridge.current_alpha` |
| `0x200` | per-vertex RGB | `(r&~0xff)<<8 \| g&~0xff \| b>>8` |

`02-.../RENDER_STATE_FLAGS_VERIFIED.md` has been updated with both corrections: `0x004` is
`RENDER_GOURAUD` (its earlier "colour-accumulator source #2 (fog-Z)" reading came from the MMX
interpolator reusing the `SSoftwareEdge.z_current` slot as the light gradient — the same slot the
`0x200` path uses for red, so the field name misled it), and `0x008` is `RENDER_FOG` rather than
a generic solid blend, since `g_SolidColorMode` is built from `g_FogColorIndexR/G/B`.

### C5. Retail `nocturne.exe` adds NOTHING to this. The hardware path is byte-identical.

5085 name-matched anchor pairs run through `scripts/Python/diff_functions.py` (reloc-masked,
`code_caves.json`-excluded): **2829 identical / 728 logic-change / 713 layout-drift /
439 operand-change / 189 const-change** over 5068 comparable pairs.

For this bug, all of the following are **bit-identical** between the two builds:

- every `engine/special.cpp` APIDLL bridge function — `drawPolygon`, `drawPolygon2`,
  `drawPolyList`, `drawPolyList2`, `beginScene`, `endScene`, `lockFrame`, `lockHoldBuffer`,
  `unlockHoldBuffer`, `selectTexture`, `setColorTable16`, `setFogColor`, `masterZBuffer`,
  `clear*`, `sync`, `toggle`, `addParticle`, `add3dLine`, `buildCardList` (24 of 25; the sole
  exception is `unlockFrame`, where the editor added a `g_ExternalFrameLocked = 0` line)
- the whole `renderPolygon*Op*` dispatch table in `engine/3d.c` — ~45 functions
- the `CExternalRendererBridge` field-by-field setup in `loadExternalRenderer`
  (`memset(…, 0x8c)` then the same pointers, `current_lighting` / `current_alpha` /
  `blend_mode` included) — verified by direct diff, only a code-address literal differs
- `CDeformableModel::lightVertices`, `skinVertices`, `renderParts` (identical or operand-only)

`dispatchMRGLToRenderer`, `renderFacetList`, `clipAndFillPoly`, `setProjectionMode` and
`badMRGLStruct` land in "const-change", which was checked instruction-by-instruction and is
**only** the `g_CurrentLineNumber` immediate shifting by one. The const-change bucket as a
whole is dominated by this — treat it as noise.

Where the two builds *do* diverge is set/camera lighting *preparation*, not the DLL interface:
`CDemonSet::lightVerticies` (d=0.36), `setCameraView` (0.75), `buildDisplayList` (0.39),
`precomputeLightVisibility` (0.52), `CDemonCamera::precomputeLight` (0.28),
`compositeLightmapToFramebuffer` (0.39). Those are the place to look for *other* lighting
differences — not for this one.

### C6. Where the per-pixel lighting actually lives.

`CDemonCamera::compositeLightmapToFramebuffer` (retail `0x4470f0` / editor `0x453270`), called
from `lockAndRenderToBuffer` between `lockFrame` and `unlockFrame`. It walks scanlines and
calls the MMX `blend*Lightmap*` family (`blendLightmapPerPxU32toU16pBB12Px2MMX`,
`blendHBilerpLightmapShared…`, `blendVHBilerpLightmapShared…`), blitting the camera's own
framebuffer into `g_ScreenBufferArray` while applying a 320-wide per-pixel fog/light grid
(`g_SFogGrid`, scrolled by `updateFogScrollOffset`), H-bilerped on even rows and VH-bilerped on
odd, `scale_factor` 1 or 2.

Crucially this runs **regardless of `g_UseDirect3D`** — acceleration does not bypass it. And
`lockAndRenderToBuffer` ends by calling `beginScene()` again, so anything the hardware draws
*after* the composite lands on top of it and misses that pass. That ordering is the same in the
original; the DLL's diffuse+specular vertex lighting is the intended compensation for it.

### C7. RETRACTED — the 2026-08-23 A/B round was invalid. `≈ ½` stands.

This section previously claimed the defect had shrunk to `0.79–0.86` and was "largely closed
by attrition". **That was wrong, twice over**, and it is worth recording exactly how, because
both traps are easy to fall into again:

1. **The renderer was never really switched.** The A/B was produced by writing
   `g_UseExternalRenderer` / `g_UseDirect3D` from gdb. That skips renderer initialisation
   entirely — the options screen is what re-runs `APIDLLinit`, the default render states and
   the texture upload path. The result is a hybrid state that renders but is not the
   accelerated path, and it kills the process a few seconds later.
2. **The scene was in the crossover band.** `on = 0.5·off + 12` crosses `y = x` at 22–27.
   The castle night exterior sits almost entirely there, so even a correct capture would have
   under-reported the gain badly.

Measured with the toggle (**both invalid, do not reuse**):

```
castle exterior   on = 0.86·off + 2.5    max Δ 29    mean |Δ| 0.225
bright interior   hw = 0.94·sw + 1.5     max Δ 119   mean |Δ| 0.271
```

Measured correctly in the bright interior, switched via the options screen:

```
hw = 0.49·sw + 2.2     max Δ 115    peak 62 → 129    11.5 % of pixels differ
```

The `≈ ½` gain is **real, live, and visible in normal play**. It is also confirmed absent from
retail — `nocturne.exe` + `tridx7.dll` is the matched pair and does not show it — which is the
single most useful constraint available and is what C11 is about.

**Method rule going forward:** switch renderers through the options screen only, and measure
in a brightly lit interior. A dark scene cannot distinguish "fixed" from "hidden".

### C11. Retail does not show this. That is a hard filter on every candidate cause.

Reported from direct experience of the shipping game: with `nocturne.exe` + `tridx7.dll`,
acceleration does **not** produce this brightness difference. Combined with C5 — the whole
`engine/special.cpp` APIDLL bridge and the entire `renderPolygon*Op*` table are
**byte-identical** between the two exes — this constrains the cause sharply:

- It **cannot** live purely in `tridx7.dll`, or in our GL shim's handling of what the DLL
  asks for, *unless* nocedit drives that shim into a state retail never reaches. Both builds
  share the DLL and the shim. This substantially weakens the `TEXTUREMAPBLEND` (O2) and
  per-vertex-fog (O3) leads as explanations for the **gain**, though both may still be real
  bugs on their own merits.
- It **cannot** live in the bridge itself — byte-identical (C5).
- It therefore most likely lives in what the two exes **do** differ on: the lighting
  *preparation* that runs before the bridge. The cross-exe diff flagged exactly these, and
  an earlier revision of this doc wrongly dismissed them as "not for this one":

  | function | divergence |
  |---|---|
  | `setCameraView` | 0.75 |
  | `precomputeLightVisibility` | 0.52 |
  | `compositeLightmapToFramebuffer` | 0.39 |
  | `buildDisplayList` | 0.39 |
  | `CDemonSet::lightVerticies` | 0.36 |
  | `CDemonCamera::precomputeLight` | 0.28 |

**One structural constraint narrows this further.** Both renderers consume the *same*
`SRenderVertex.r/g/b`. So a divergence in vertex lighting alone (`lightVerticies`) would make
software and hardware **equally** wrong and produce *no* A/B difference. For an A/B difference
the divergence must feed the two paths **asymmetrically** — which points at
`compositeLightmapToFramebuffer` and the lightmap pass that only software geometry receives
(C10), rather than at the vertex-lighting functions.

**Next concrete step:** diff `compositeLightmapToFramebuffer` between the two exes
instruction-by-instruction (d = 0.39 is large), and check whether retail applies a
compensating scale that the editor build dropped.

### C8. Probe results — what actually reaches the hardware (2026-08-23, accel on).

894 frames in the reference scene, via `nocturne_dump_render_flags`:

```
polygons submitted   2910487   (3255.6 / frame)
vertices converted   4031139   (4509.1 / frame)
glDrawElements       130620
```

**Q1 is settled: essentially all geometry goes through the DLL when accel is on.** The world is
not staying on the CPU. This resolves O1's contradiction in favour of the code reading, and
against the inference drawn from the stale frames.

Flag combos, sorted by polygon count (entry = `[drawPolygon drawPolygon2 drawPolyList
drawPolyList2]`):

| flags | decoded | polys | verts | entry |
|---|---|---|---|---|
| `0x2cd` | TEX\|GOURAUD\|0x008\|ZTEST\|ZWRITE\|VTXRGB | 2796403 | 3888666 | `[3790 23933 9856 112272]` |
| `0x2e7` | TEX\|SOLID\|GOURAUD\|READDEST\|ZTEST\|ZWRITE\|VTXRGB | 57925 | 9875 | `[72 57853 0 0]` |
| `0xc0` | ZTEST\|ZWRITE (untextured) | 34707 | 95352 | `[1461 33246 0 0]` |
| `0x267` | TEX\|SOLID\|GOURAUD\|READDEST\|ZTEST\|VTXRGB | 19469 | 20468 | `[0 19469 0 0]` |
| `0x367` | + VTXALPHA | 1602 | 16710 | `[0 1602 0 0]` |

96 % of all polygons ride `0x2cd`, which has **`0x200` (per-vertex RGB) set**. That matters: in
`buildTLVertex` the `0x200` branch sets `g_LightingAlpha = 0xff` and `g_LightingOverflow = 0`
outright, so **the entire `(src->r - 0x100) >> 4` light/overbright computation that C3 analyses
is bypassed for the dominant path.** C3 describes a path the game barely uses.

Measured GL state over the same window:

```
triangles with GL_BLEND on    100138   (3.0 %)
triangles with GL_BLEND off  3257908   (97.0 %)
triangles with ALPHA_TEST     100138
blend funcs: SRC_ALPHA/ONE_MINUS_SRC_ALPHA  96934 tris
             SRC_ALPHA/ONE                   3204 tris
diffuse alpha on 0x2cd: mean 249.2, 94.3 % in the top bin (240..255)
specular: 0 on every vertex of every combo (0 / 4031139)
```

### C9. The `0x200` per-vertex-RGB scale is CORRECT — hardware and software agree to 0.4 %.

Checked because it was the last remaining vertex-side candidate for a ½ gain. It is not one.

`buildTLVertex`, `0x200` branch:
```c
out->diffuse = (src->r & 0xffffff00U) << 8 | src->g & 0xffffff00U | src->b >> 8 | iVar3 << 0x18;
```
so the red byte is `r >> 8`, and the D3D modulate gives `texel · (r>>8)/255 = texel · r/65280`.

Software, `renderMMXPerspectiveScanline16/32` (`RENDER_COLOR_FROM_VERTEX` branch):
`MM5 = (red_current >> 1) & 0xffff`, modulated as `(texel<<4) pmulhw (MM5>>3)`, i.e.
`texel · r/65536`. And `red_current` is a **direct copy** of the vertex red —
`g_RasterizerEdgeArray[i].base.red_current = pSVar8->r` in `addRasterizerEdgeWithDepth`, no
rescale.

`65280` vs `65536` — the two paths agree to within 0.4 %. **Not a candidate for anything.**

### C10. Ordering measured live: 98.6 % of DLL draws happen *after* the lightmap composite.

Counter pass over 46 frames with accel on:

```
frames=46  composite=46  draws_pre=171  draws_post=11785
renderMMXPerspectiveScanline16 = 0    renderMMXPerspectiveScanline32 = 0
```

The composite runs exactly once per frame, and the software MMX rasterizer **never runs at
all** with accel on — while in the accel-off half of the same session a `SIGINT` landed
*inside* `renderMMXPerspectiveScanline32`, proving those are the right symbols and that the
software path is genuinely live there. So the contrast is real, not a symbol miss.

`lockAndRenderToBuffer` confirms the ordering structurally:

```c
lockFrame();                              // 1. lock the CPU-side surface
compositeLightmapToFramebuffer(this_ptr); // 2. per-pixel light/fog grid, CPU-side
unlockFrame(0);
if (g_UseDirect3D == 0) return iVar1;     // 3. software path is DONE here
beginScene();                             // 4. accel only — all hardware draws land AFTER
```

**So with accel on, the per-pixel lightmap pass composites a surface that no geometry was
rasterized into, and hardware then paints every polygon on top of it.** The per-pixel lightmap
contribution is therefore absent from all hardware geometry.

This is the strongest remaining candidate for C7's residual, but it is **not yet proven** to be
its cause — and note the tension that has to be resolved first: if the lightmap were simply
missing for everything, the *world* would differ too, and C7 measures the world as
bit-identical. Either the grid is neutral away from the characters, or something else restores
it for world geometry. Settle that before acting on it (see O4).

---

## DON'T RE-CHASE — checked and dead

1. **"The retail build has a different / better hardware lighting path."** It does not. C5.
   The engine→DLL interface and the entire MRGL op table are byte-identical. Stop diffing the
   two exes for this bug.
2. **"The specular / overbright term is being dropped by the GL shim."** The code is present
   (`gl_ddraw.cpp` `device_DrawIndexedPrimitive`, `glSecondaryColorPointer` +
   `GL_COLOR_SUM`), and the one-time `gl_api: no glSecondaryColorPointer — specular term
   dropped` message does **not** appear in `nocturne_render.log` on this box (NVIDIA, GL 4.6).
   Even if it *were* dropped, C3 shows specular cannot account for a ½ gain — it only engages
   above the point where software already clamps.
3. **"`loadLightTable` / `buildBlendTables` are stubbed in the editor, so lighting tables are
   missing."** True (see below) but irrelevant here: those are the 8-bit palette
   `g_LightTable[34][256]` / `g_BlendTableAdd/Avg` path, and this runs at 32 bpp.
4. **"The 23 APIDLL entry points nocedit binds and tridx7 lacks include lighting setters, so
   hardware lighting is never configured."** `APIDLLsetAmbientLight`, `setLightVector`,
   `setLightConstants`, `setTransform`, `setViewport` are indeed bound by nocedit and absent
   from every shipped DLL — but they are bound with plain `getProcAddress` (optional, they do
   not touch `g_DLLFunctionsMissing`) and have **zero callers anywhere in the engine**. Dead
   plumbing for a renderer that never shipped. It cannot affect runtime behaviour.
5. **"The lightmap composite is being bypassed when accel is on."** It is not — it is
   unconditional in `lockAndRenderToBuffer`. (C1's supporting argument here was wrong; see C10
   for what the composite is actually doing with accel on. The conclusion — that it runs —
   stands.)
6. **`on = 0.5·off + 12` itself.** STALE, 2026-08-01. The live figure is `0.86·off + 2.5`
   whole-frame / `0.79·off + 4.2` on interiors, and peaks now match exactly. **Do not go
   hunting for a missing ×2 or a 50 % blend — there isn't one any more.** C7.
7. **"The ½ is a 50 % blend against the backdrop."** Dead on the measurements, independent of
   C7: **97 % of triangles are drawn with `GL_BLEND` off**, and diffuse alpha on the dominant
   combo means 249.2 with 94.3 % in the top bin. There is no ~0x80 alpha cluster. This also
   retires the `gl_ddraw.cpp:1053` `TEXTUREMAPBLEND` MODULATE-vs-MODULATEALPHA lead **as an
   explanation for the gain** — it may still be a real correctness bug worth fixing on its own
   merits, but it is not this. C8.
8. **"The per-vertex RGB values are on a different scale in the two paths."** They are not —
   hardware `r/65280` vs software `r/65536`, agreeing to 0.4 %, with `red_current` a direct
   copy of the vertex red. C9.
9. **"C3's `(src->r - 0x100) >> 4` light/overbright path is where the bug is."** 96 % of
   polygons set `0x200`, and the `0x200` branch of `buildTLVertex` **bypasses that computation
   entirely** (`g_LightingAlpha = 0xff`, `g_LightingOverflow = 0`). C3 is accurate but
   describes a path the game barely uses. Specular measured 0 on all 4031139 vertices, exactly
   as C3 predicts — that is a confirmation, not a defect. C8.

---

## OPEN — and how to settle it

### ~~O1. Does the static world actually go to hardware?~~ CLOSED — yes.

3255.6 polygons/frame reach the DLL and the software MMX rasterizer never runs. The code
reading was right and the inference from the stale frames was wrong. C8, C10.

### ~~O2. Which `render_flags` combos reach `buildTLVertex`, and what colours come out?~~ CLOSED.

Measured — see the tables in C8. Both hypotheses it was designed to discriminate are now dead
(don't-re-chase 7 and 9).

### O4. Why is the world bit-identical if hardware geometry misses the lightmap? (NEW, blocking)

C10 shows the per-pixel lightmap composites an un-rasterized surface with accel on, so *no*
hardware geometry receives it. C7 shows the world is nonetheless **bit-identical** while only
characters differ. Both are measured, so the reconciliation is the next real question:

- Is `g_SFogGrid` simply **neutral** over the sky/castle/ground in this scene, and non-neutral
  only near the characters? That would make both observations consistent and would predict the
  residual scales with local light activity.
- Or does world geometry pick the contribution up by another route?

**How to settle it:** dump `g_SFogGrid` (320-wide, per `updateFogScrollOffset`) for the
reference frame and check whether its values are neutral outside the character region. If it is
non-neutral over the castle wall, this hypothesis is dead and C7's residual needs another
cause. Pick a scene with strong local lighting for a second data point — this one is very dark
overall, which suppresses any multiplicative effect.

### O3. Per-vertex fog is dropped on hardware geometry.

`gl_ddraw.cpp:1049`, state 35 `FOGTABLEMODE`: `default: break;   // NONE: the vertex specular
alpha carries fog`. `buildTLVertex` does write the fog factor into `specular` alpha
(`0xff - (src->a >> 8)` under flag 0x008) and D3D7 would apply it; the GL path passes only 3
components to `glSecondaryColorPointer` and never consumes it. Real, separate, and a plausible
contributor to the (now `+4.2`) floor lift. Not yet quantified. Still worth fixing on its own
merits — it is a genuine dropped feature either way.

---

## C12. Elimination round, 2026-08-23 — what the ½ is NOT, measured live

All of the following were measured in the interior room, accel on, properly switched:

| candidate | measurement | verdict |
|---|---|---|
| per-vertex lighting differs between paths | software mean light byte **74** (sampled `g_VertexRedStart.u32[0]` over 12439 scanlines, `red_current>>8`); hardware mean light byte **74.0** (probe, 645924 vertices) | **identical — not the cause** |
| alpha blending | 100 % of `0x2cd` vertices have diffuse alpha in the top bin, mean **255.0**; `GL_BLEND` off | **not the cause** |
| specular / overbright | **0** on all 645924 vertices | not the cause (expected, C3) |
| per-vertex RGB not monochrome | `rgbne = 780/645924` = 0.12 % — R==G==B on 99.9 % | monochrome light, as expected |
| wrong texture blend op | `SetTextureStageState(0, D3DTSS_COLOROP, 4)` = `D3DTOP_MODULATE` (5 would be `MODULATE2X`) | **correct 1× — not the cause** |
| bridge colour scale factors | `red/green/blue_scale = 1,1,1`, positions `16,8,0` (ARGB8888), dither 0 | **correct — not the cause** |
| mip generation halving | `expandTextureAndBuildMips` is a correct 2×2 box average (`0xfefefeff` masks) | not the cause |

**Channel uniformity is the strongest clue.** The fit is `0.430 / 0.431 / 0.427` across R/G/B with
no hue shift. A texture *format* misinterpretation (4444 read as 5551/565, etc.) would distort
channels unequally, so the whole format-confusion family is effectively excluded. What remains
is something that multiplies all three channels alike and adds a small floor — i.e. an affine
per-pixel operation.

**It is also not a global halving.** Bucketed by software brightness:

| sw value | n px | % differing | mean hw | mean sw |
|---|---|---|---|---|
| 0–8 | 510072 | ~2 % | — | — |
| 20–40 | 184136 | 36.2 % | 22.57 | 26.69 |
| 40–70 | 59308 | 36.6 % | 39.34 | 48.90 |
| 70–200 | 37420 | 11.8 % | 75.50 | 81.13 |

Most bright pixels come through nearly intact; the `0.43` is carried by a subset. That subset
is the characters — consistent with C1.

## C13. Static pre-rendered backgrounds — why only characters can show this

The game uses **fixed camera angles over non-moving pre-rendered backgrounds** (RE-style). The
backdrop is a *blit*, not lit geometry, so it is necessarily identical in both modes no matter
what the lighting does. The set geometry that reaches the DLL is largely depth-only (note the
per-pass `g_TexturesDisabled` gate, O1). **Only the characters are real lit 3D geometry, so
they are the only surface on which this defect can appear.** C1's "only DLL-drawn geometry
changes" is explained by this, and it is *not* evidence that the world bypassed hardware.

## C14. Leading hypothesis: hardware characters miss the per-pixel lightmap (C10)

Everything now points back at C10's ordering, and C13 removes the objection that used to block
it (the world was never going to differ — it is a blit):

- Software characters rasterize into the camera framebuffer **before**
  `compositeLightmapToFramebuffer`, so they **receive** the per-pixel light/fog grid.
- Hardware characters are drawn **after** it — 98.6 % of DLL draws, measured — so they **miss**
  it.
- A per-pixel grid that multiplies and adds is exactly an affine `0.43·x + 3.8`, applied
  uniformly to all three channels. That matches the measured fingerprint precisely.
- It predicts the defect appears *only* on lit 3D geometry — i.e. characters. Matches.

**Not yet proven.** To confirm: dump `g_SFogGrid` / `g_CameraFogGrid` for this frame and check
that its multiply/add over the character region is ≈ `(0.43, +3.8)`. If it is, this is the
cause and the fix is architectural — hardware geometry needs the grid applied too.

**Status of the retail comparison (C11).** `compositeLightmapToFramebuffer` diffs at 0.39
between the exes, but a pseudocode diff shows that is dominated by **symbol naming** (retail
still carries raw `_DAT_0140d77c` etc. where the editor has `g_ImageProcessingState2`), not
proven logic change. Neither version branches on `g_UseDirect3D`/`g_UseExternalRenderer`.
**Redo that comparison at asm level before drawing any conclusion from the 0.39.**

## C15. First attempt to confirm C14 — INCONCLUSIVE, and how to do it properly

The confirming test for C14 is: measure the affine transform the lightmap composite applies, and
check it equals the inverse of the measured defect (`hw = 0.43·sw + 3.8` implies the blend must
be `A ≈ 2.33`, `B ≈ -8.8`).

**The blend formula is the right shape.** Per `research/07-mmx_functions/MMX_BLEND_FAMILY_DECODED.md`,
every function in the family computes, per output byte:

```
pix_pal_low = (texture_byte * palette_byte) & 0xFFFF
mul1_hi     = high16(pix_pal_low  x lm_xored_word)      (signed pmulhw)
solid_hi    = high16((solid_byte << 6) x lm_data_word)  (signed pmulhw)
out_byte    = min(0xFF, (uint16)(mul1_hi + solid_hi + bias_word) >> 4)
```

A multiply plus an additive bias — structurally `A·x + B`, exactly the measured fingerprint.

**The measurement attempt failed on buffer addressing, not on the physics.** At 32 bpp the
composite is `screen_row[y] <- blend(camera_fb_row[y], lightmap)` via
`blendHBilerpLightmapSharedU64toU64pBB12Px2MMX` (even rows, `scale_factor == 2`), horizontally
bilerped 640 -> 1280. Sampling pairs from gdb with
`((unsigned int*)g_CDemonCameraInstance.framebuffer_aligned)[y*640 + x]` against
`((unsigned int*)g_ScreenBufferArray[y])[2*x]` gave e.g. `src=0x59605c -> dst=0x090a0a`, i.e.
(89,96,92) -> (9,10,10): a ~10x **darkening**.

Two reasons that is not usable as evidence:
1. It is the **wrong direction** for C14 (missing the blend would then make hardware *brighter*,
   but hardware is darker), so if taken at face value it would refute C14.
2. **But it does not validate.** The captured software frame shows ~24 mean at that same screen
   location, not ~10, so the `g_ScreenBufferArray` indexing (or the sample timing within the
   frame) is wrong. Confirmed geometry facts: the array is **480 rows** (`g_ScreenBufferArray[760]`
   faults), camera fb is 640x480x32bpp at `framebuffer_aligned`, `scale_factor == 2`.

**Treat C14 as neither confirmed nor refuted.** Do not record the ~10x darkening as a finding.

**Do it this way instead — instrument the blend, don't guess addresses.** The blend functions are
our own `.keep` reconstructions in `core/dstrender.cpp`. Add a probe accumulator inside
`blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_004917bc` (and the odd-row sibling) that
records `(input_byte, output_byte)` pairs, exactly the way `render_probe` wraps the draw exports.
That measures the transform at the source with no pointer arithmetic and no frame-timing
ambiguity, and it can be dumped with the same gdb-callable pattern.

If that measured transform comes out `A ~ 2.33`, C14 is proven and the fix is architectural.
If it comes out < 1 (darkening), **C14 is dead** and the residual has to be re-derived from
C12's elimination table — at which point the untested survivor is the character texel itself,
and the next move is to dump a character texture out of GL and compare it byte-for-byte against
the software `g_Hardware32BitPalette` lookup for the same texture.

## C16. The defect is a clean factor of 2, not an affine curve

Re-binning the character pixels by software brightness (room capture, 137920 samples):

| sw | -> hw | ratio |
|---|---|---|
| 11.2 | 8.6 | 0.764 |
| 20.0 | 12.4 | 0.618 |
| 28.6 | 15.8 | 0.552 |
| 40.5 | 21.0 | 0.518 |
| 57.8 | 28.4 | 0.491 |
| 80.7 | 39.4 | 0.488 |
| 111.0 | 52.2 | **0.470** |

**The ratio asymptotes to ~0.47.** The apparent `+3.7` offset is only what lifts the low end;
the underlying relation is a clean multiplicative **one half**. Fit comparison over the same
pixels: linear `R2 = 0.828`, power-law `R2 = 0.790`, pure-scale `R2 = 0.771` — linear wins, so
this is **not** a light applied twice (that would be a power law).

**An exact factor of two is a shift, not a lighting curve.** Look for a stray `>> 1`, a missing
`<< 1`, or a 4-bit-vs-5-bit / 15-vs-16 normalisation — not for a tuning difference.

## C17. The vertex modulation is provably identical — so it must be the TEXEL

Both paths, same `red_current`:

```
software:  pixel * red_current / 65536      ((pb<<4) pmulhw (cw>>3), cw = red_current>>1)
hardware:  texel * (red_current>>8) / 255 = texel * red_current / 65280
```

0.4 % apart. And measured live, both sides report the **same mean light byte of 74**
(software: `g_VertexRedStart.u32[0]` sampled over 12439 scanlines; hardware: probe over 645924
vertices). Confirmed independently in play: a **subtle shading change tracks the characters'
idle breathing animation in both modes**, so per-vertex normal lighting is live and animating on
the hardware path too.

**Conclusion: the halving is in the texel the modulation is applied to, not in the light.**

The two paths fetch texels from different places:
- software: `g_Hardware32BitPalette[texture_byte]`
- hardware: a GL texture the DLL built from its own palette

## C18. `CTextureCache::setupTexture` — RULED OUT (asm compared, negative result)

`CTextureCache_setupTexture` (editor `0x5dd200`, retail `0x545410`) looked promising: it gates
its whole palette build behind `if (g_UseExternalRenderer == 0)`, so with accel on the palette
build is skipped. Normalised asm counts differed (retail 206 vs editor 246 instructions;
`RET +3`, `MOV +21`, `POP +12`), which suggested extra editor-only branching.

**Compared instruction-by-instruction, it is not the cause. Three findings:**

**1. Retail has the same accel gate.** `MOV EBX,[g_UseExternalRenderer]; TEST EBX,EBX;
JNZ 0x005454ce` — identical structure. The gate is not an editor-only shortcut.

**2. The 32bpp palette build is instruction-identical** — only ESI/EDI register allocation is
swapped:

```
retail   MOVZX EDI,[EBX+1](g)  MOVZX EBP,[EBX](r)  MOVZX ESI,[EBX+2](b)
editor   MOVZX ESI,[EBX+1](g)  MOVZX EBP,[EBX](r)  MOVZX EDI,[EBX+2](b)
both     SHL <r>,g_RedBitPosition ; SHL <g>,g_GreenBitPosition ; SHL <b>,g_BlueBitPosition
both     OR ... ; ADD EAX,0x4 ; ADD EBX,0x3 ; store ; CMP EAX,0x400 ; JNZ loop
```

Same operations, same order, same constants, same `+4`-before-store Watcom base-minus-stride
idiom. **No factor-of-two anywhere.**

**3. The instruction delta is larger-texture support, not lighting.** The editor has **six**
texture-dimension cases where retail has **four** — it adds `0x200` (512) and `0x400` (1024):

| dimension | shift2 | mask1 | mask2 | bits |
|---|---|---|---|---|
| `0x400` *(editor only)* | 0xa | 0x3ff | 0xffc00 | 10 |
| `0x200` *(editor only)* | 0x9 | 0x1ff | 0x3fe00 | 9 |
| `0x100` | 0x8 | 0xff | 0xff00 | 8 |
| `0x80` | 0xa | 0x7f | 0x3f80 | 7 |
| `0x40` | 0xc | 0x3f | 0xfc0 | 6 |
| `0x20` | 0xe | 0x1f | 0x3e0 | 5 |

Each extra case carries its own epilogue, which is exactly the `+3 RET` / `+12 POP`. The
dispatch order also differs (retail tests `0x40` first, editor `0x80` first) — compiler switch
layout, not semantics.

**Lesson for the next cross-exe comparison on this bug:** an instruction-count delta is *not*
evidence of a logic change on its own. Identify what the extra blocks *do* before treating them
as a lead. Two of the three signals here (the accel gate, the count delta) pointed the wrong
way.

## Where the elimination now stands

Everything on the path from vertex to pixel has been checked:

| stage | status |
|---|---|
| vertex lighting values | **identical** (both mean light byte 74, measured) |
| vertex->diffuse modulation math | **identical** (r/65536 vs r/65280, 0.4 % apart) |
| texture blend op | **correct** (`D3DTOP_MODULATE`, 1x) |
| alpha blending | **off** (97 % of triangles; alpha mean 255) |
| specular / overbright | **0** on every vertex |
| bridge colour scale factors | **correct** (1,1,1 @ 16,8,0) |
| software palette build vs retail | **identical asm** (C18) |
| mip generation | correct 2x2 average |

**The surviving candidate is the texel itself on the GL side.** Software reads
`g_Hardware32BitPalette[texture_byte]` — the raw 8-bit-per-channel palette colour. Hardware
reads a GL texture the DLL built. Textures are **ARGB4444** (4 bits per channel) per
`gl_ddraw.cpp`'s `fill_argb4444`, while the software path is full 8-bit.

**Next step — the direct test, no more inference:** dump a character's GL texture back out
(`glGetTexImage` on the bound texture, or read `surf->pixels` for the texture surface) and
compare it byte-for-byte against `g_Hardware32BitPalette[idx]` for the same texture indices.
Either the texels match — in which case the halving is downstream in GL state and C14 comes
back into play — or they are half, and the 4-bit expansion / upload path is the bug.

## C19. The texel path is PROVEN IDENTICAL — checked in code and live (2026-08-23)

The DLL builds its texture in `expandTextureAndBuildMips_FUN_10003830`:

```c
g_PackedPalette[i] = b << g_BlueShift | g << g_GreenShift | r << g_RedShift;   // g_TexturePalette
...
g_ExpandedTexture[p] = g_PackedPalette[g_TextureData[p]] | 0xff000000;
```

The engine builds its software palette in `CTextureCache::setupTexture`:

```c
g_Hardware32BitPalette[i] = b << g_BlueBitPosition | g << g_GreenBitPosition | r << g_RedBitPosition;
```

**Same construction, same source palette, no scaling on either side.** And the shifts were read
live with accel on and are equal:

```
DLL  RedShift=16  GreenShift=8  BlueShift=0     (== g_HWRed/Green/BlueShift)
ENG  RedPos  =16  GreenPos  =8  BluePos  =0
g_TexturePixelFormat bitcount = 32
```

Textures are **32bpp ARGB8888** in this configuration, not ARGB4444 — the 4-bit-pack theory in
C18's follow-up is moot; the upload is exact `GL_BGRA` / `GL_UNSIGNED_BYTE`.

**Trap worth recording:** a first membership test compared texels against **`g_ColorPalette`**
and returned 100 % "neither". That is expected and meaningless — `g_ColorPalette` is the DLL's
*global* palette set once by `APIDLLsetColorTable16`, while each texture is expanded from its own
**`g_TexturePalette`** (`cache->texture_palette_ptrs[texture_index]`). Compare against
`g_TexturePalette` / `g_PackedPalette`, never `g_ColorPalette`. Likewise, comparing a texture's
max channel against a palette max proves nothing: a dark coat texture legitimately never touches
the bright entries (measured 89 vs 255 on a character texture, ratio 0.35, entirely innocent).

## C20. The GL fragment maths is also identical

From `gl_ddraw.cpp` `device_DrawIndexedPrimitive`:

```c
gl.TexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
gl.ColorPointer(4, GL_UNSIGNED_BYTE, sizeof(GLVertex), base->diffuse);
nocturne_glSecondaryColorPointer(3, GL_UNSIGNED_BYTE, sizeof(GLVertex), base->specular);
gl.Enable(GL_COLOR_SUM);
```

`GL_MODULATE` gives `texel * diffuse/255` = `texel * red_current/65280`, against software's
`texel * red_current/65536` — the same 0.4 % agreement as C17.

## C21. Every per-fragment stage is identical. The halving is in frame COMPOSITION.

Consolidated state of the elimination — the whole path from vertex to fragment is now closed:

| stage | verdict | evidence |
|---|---|---|
| vertex lighting values | identical | both mean light byte **74**, measured live |
| vertex -> diffuse packing | identical | `r/65536` vs `r/65280`, 0.4 % |
| texture blend op | identical | `D3DTOP_MODULATE` -> `GL_MODULATE`, 1x |
| texel construction | identical | same packing, same shifts 16/8/0 (C19) |
| GL fragment maths | identical | `texel * diffuse/255` (C20) |
| alpha blending | not involved | 97 % of triangles `GL_BLEND` off, alpha mean 255 |
| specular / overbright | not involved | 0 on all 4 031 139 vertices |
| mip generation | correct | 2x2 box average |
| software palette build vs retail | identical asm | C18 |

**Nothing per-fragment can produce the measured clean factor of two.** Therefore the difference
is introduced when the frame is *composed*, and **C14 is the only hypothesis left standing**:
software characters rasterize into the camera framebuffer and receive the per-pixel lightmap
composite; hardware characters are drawn after it (98.6 % of draws, measured) and do not.

**The one measurement that settles it is still the one specified in C15** — instrument
`blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_004917bc` (and its odd-row sibling) with an
`(input_byte, output_byte)` accumulator, exactly the way `render_probe` wraps the draw exports,
and read the transform off directly. If it comes out `A ~ 2.33`, C14 is proven and the fix is
architectural (hardware geometry needs the grid applied too). Do **not** attempt this by
sampling `g_ScreenBufferArray` against `framebuffer_aligned` from gdb — that was tried and the
addressing did not reconcile with the captured frame (C15).

## C22. C14 IS REFUTED — the lightmap composite only ever DARKENS (measured 2026-08-23)

Measured directly, with no address guessing: call the real blend function from gdb on a
**synthetic ramp** input and a scratch output buffer, using the real lightmap/corona index rows.
Nothing on screen changes and no reconstruction is touched.

```gdb
set $in  = (unsigned int*)malloc(8192)          # filled with a 0..255 ramp
set $out = (unsigned int*)malloc(32768)         # scratch, NOT the real screen
set $i5  = $y >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)
set $lm  = (unsigned char*)(g_CameraPlaneWorkBuffer.pixels + $i5)
set $ti  = (unsigned char*)(g_CoronaBlurWorkBuffer + $i5)
call (void)core_dstrender_cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_004917bc(
        (unsigned long long*)$out, (unsigned long long*)$in, $ti, $lm, $w)
```

Two gotchas, both cost a pass — record them:
- **Output stride is 1:1, not 2:1.** The function writes `pixel_count` output uints; `out[i]`
  pairs with `in[i]`. "HBilerp" refers to the *lightmap* being bilerped/shared between pixel
  pairs, **not** to the texture being upscaled. Reading `out[2*i]` yields zeros past the halfway
  point and a nonsense fit.
- **Do not fit the whole row.** The lightmap varies per column, so a whole-row fit averages
  bright and dark columns together (`R2 = 0.54`, with visible outliers). Fit per column.

Result, y = 200, identical in software and accel modes (so the lightmap buffer is **not** stale
with accel on):

| fb column x | ratio out/in |
|---|---|
| 8–80 | 0.33 |
| 88–152 | 0.29 -> 0.25 |
| 160–192 | 0.22 -> 0.17 |
| 200–344 | ~0.17 |

**The composite darkens by 0.17x–0.33x and never brightens.** C14 required `A ~ 2.33`.

**Therefore: hardware characters skipping the lightmap composite would make them BRIGHTER, not
darker. C14 is dead. Do not re-open it.**

## C23. The open contradiction — this is where to resume

The measurements no longer reconcile, and that gap *is* the remaining bug:

```
software final  = composite(camera_fb)      = 0.17..0.33 x camera_fb      [C22, measured]
hardware final  = 0.47 x software final                                    [C7,  measured]
=> hardware final = 0.08..0.16 x camera_fb
```

So GL's output is roughly **6-12x darker than the software camera framebuffer** for the same
geometry — while C17/C19/C20 derive that both should be `texel * red_current/65536` and agree to
0.4 %. Both cannot be true. Corroborating raw numbers: in the coat region the camera framebuffer
reads **76-125** while the composited screen reads **~24**, consistent with the 0.17x, but far
above the `texel * light` value the derivation predicts (~26 for a texel of ~90 at light 74).

**The derivation is the weakest link, not the measurements.** The software modulation was read
off the decoded MMX docs as `prod = ((pb << 4) * (cw >> 3)) >> 16` with `cw = red_current >> 1`;
the camera framebuffer being ~4-6x brighter than that predicts means either `cw` is not
`red_start`, or the render loop that actually runs for character geometry is a *different* one of
`renderMMXPerspectiveScanline32`'s several inner loops than the one that was read.

**Next step — measure, do not derive.** Break inside `renderMMXPerspectiveScanline32` on a
character scanline and capture, for one concrete pixel: the source texel byte, the palette entry,
the colour-accumulator word, and the value actually written to the camera framebuffer. That
single row of numbers tells you the software rasterizer's true transfer function, which is the
one quantity every remaining hypothesis depends on and the one that has only ever been *derived*.

Once that is known, compare it against GL's `texel * diffuse/255` — the ~6x will be on one side
or the other, and that side is the bug.

## C24. Structural correction: the software rasterizer writes to the BACK BUFFER

Read live in software mode, parked on the characters:

```
g_CurrentScreenPtr          = 0xda8588cc     <- inside g_ScreenBufferArray
g_ScreenBufferArray[0]      = 0xda7d2828     (== g_BackBuffer)
g_ScreenBufferArray[200]    = 0xda84f828
camera framebuffer_aligned  = 0xd98d1830     <- a different allocation entirely
```

**`renderMMXPerspectiveScanline32` writes into `g_ScreenBufferArray`, NOT into the camera
framebuffer.** Several earlier steps assumed otherwise. Consequences:

- Characters are drawn **after** the lightmap composite in software too, exactly as they are with
  accel on. **The two paths are structurally symmetric** for character geometry.
- `compositeLightmapToFramebuffer` only ever moves the **pre-rendered backdrop** (camera
  framebuffer) onto the screen with the light/fog grid applied. That is why its measured transfer
  (0.17x-0.33x, C22) reconciles with the backdrop numbers — camera fb ~89 x ~0.27 = ~24 on screen —
  and why it is irrelevant to characters.
- This independently re-confirms C22: **C14 was never viable.** The composite does not touch
  character pixels in either mode.
- It also explains the C15/C23 "arithmetic does not reconcile" gap: the camera-framebuffer values
  being compared against `texel * light` were **backdrop** pixels, which are blitted at full
  brightness and never went through the rasterizer at all.

## C25. The 0x008 solid-alpha blend is inert — not the cause

`RENDER_SOLID_ALPHA_BLEND` (0x008) is set (`flags = 0x2cd`, the same combo the hardware probe
reports for 99.8 % of polygons), so the software path does run its second blend:

```c
blended = (lit_b * inv_w + solid_b * a_w) >> 8;
```

Measured live: `g_SolidColorMode = 0x00050505` (near black), `g_VertexAlphaStart = 768` so
`alpha_idx = 3`, `g_AlphaTable[3] = [3,3,3]`, `g_AlphaTable[255] = [0xff,0xff,0xff]`, hence
`inv_w = 3 ^ 0xff = 252`:

```
blended = (lit * 252 + 5 * 3) >> 8 = lit * 0.984 + 0.06
```

**Essentially the identity.** It slightly *darkens*, and cannot supply missing brightness. O3
(hardware dropping the 0x008 fog term) remains a real but minor defect, **not** the 2x.

## C26. THE CONTRADICTION, sharpened — the two transfers now AGREE

With every stage measured rather than assumed, both paths compute the same thing:

```
software:  texel * ((redStart >> 3) * 16 / 65536)     redStart = 8442  ->  texel * 0.258
hardware:  texel * (diffuse_red / 255)                diffuse  =   65  ->  texel * 0.255
```

(`redStart = 8442` gives `red_current = 16884`, `red_current >> 8 = 65`, which is what
`buildTLVertex` packs as the diffuse byte — the same number, as C17 found.)

**Both paths draw the same geometry, after the same composite, into the same buffer, with the
same texel and the same 0.2576-vs-0.2549 modulation — and the frames still differ by 2x.**

Something must therefore differ **per object**, and every measurement so far has been a
**scene-wide mean** (software `g_VertexRedStart` mean 74 over 12439 scanlines; hardware probe mean
74 over 645924 vertices). Those means are dominated by whatever geometry is most numerous and
would not reveal a factor of two confined to the two character models.

**Next step — the per-object comparison that has never actually been done.** Isolate character
geometry on both sides and compare the light bytes *for the same object*:

- **Hardware:** the render probe already buckets by `render_flags`, but characters and set share
  `0x2cd`. Add a bucket key that separates them — the bound texture id
  (`g_DX7CurrentTextureIndex`) is the natural discriminator, and `render_probe.cpp` already has
  the accumulator machinery.
- **Software:** break in `renderMMXPerspectiveScanline32` and record `g_VertexRedStart` keyed by
  `g_CurrentTextureData`, so the same texture can be matched across the two runs.

If the character bucket shows software light ~2x the hardware light, the divergence is in the
lighting *preparation* for skinned geometry and the C11 list of divergent functions
(`CDeformableModel::lightVertices`, `CDemonSet::lightVerticies`, `precomputeLight`) is where to
look. If the light bytes match per object, then the texel differs per object and the texture
comparison must be redone per texture id (against `g_TexturePalette`, never `g_ColorPalette` —
see C19).

## C27. PER-OBJECT light matches. The lighting hypothesis is dead for good.

The comparison C26 called for, finally done. Both sides keyed on the **same**
`g_CurrentTextureData` pointer (hardware via a new per-texture bucket in `render_probe.cpp`
fed from the draw wrappers; software via a gdb sample of `g_VertexRedStart.u32[0]` at
`renderMMXPerspectiveScanline32` entry). `redStart >> 7` and the probe's diffuse red byte are
the same quantity (`red_current >> 8`).

| tex_data | hardware mean | software mean | min (both) |
|---|---|---|---|
| `0xdd950828` | 74.9 | 77.7 | 51 |
| `0xdd964828` | 76.4 | 74.9 | 51 |

**Identical within sampling noise, per object.** Every earlier light measurement was a
scene-wide mean and could not have seen a per-object factor of two; this one could, and there
isn't one. Do not re-open per-vertex lighting.

## C28. The texel is EXACT. 100 % of texels are palette entries.

Re-run of the texel check against `g_CurrentPalette` (the engine's per-texture palette, assigned
outside the `g_UseExternalRenderer == 0` gate so it is valid in both modes — `g_ColorPalette` is
the DLL's single global palette and is the wrong reference, see C19):

```
surface 256x256 bpp=32
texel == palette[i]        65536  (100.0%)
texel == palette[i] >> 1       0  (  0.0%)
neither                        0  (  0.0%)
texture max / palette max:  R 1.000  G 1.000  B 1.000
```

**The texture the DLL hands GL is bit-exact palette colour.** The texel branch is closed.

## C29. With accel on, the CPU back buffer is BLACK — everything is GL

```
nocturne_dump_screenshot  (g_BackBuffer, CPU)  640x480   mean 0.00  max 0
nocturne_dump_frontbuffer (real GL screen)    1280x960   mean 11.69 max 85
```

So with accel on the camera framebuffer/CPU path contributes nothing at all — the backdrop is
GL-drawn too (consistent with the 1262 polys/frame the probe counts). The lightmap composite
runs but has an empty source. This is a third independent confirmation that **C14 was never
viable**, and it also rules out the inverse ("hardware characters get darkened by the CPU
composite") — the CPU buffer never reaches the screen in this mode.

## C30. EVERY STAGE IS IDENTICAL — so question the premise, not the pipeline

Consolidated, with the method each was settled by:

| stage | verdict | how |
|---|---|---|
| vertex light, per object | identical | measured, keyed by texture (C27) |
| texel | identical | 100 % exact palette match (C28) |
| modulation | identical | sw `texel*0.2576` vs hw `texel*0.2549` |
| blend op | identical | `D3DTOP_MODULATE` -> `GL_MODULATE` |
| 0x008 solid blend | inert | `lit*0.984` (C25) |
| alpha / specular | not involved | blend off, specular 0 |
| lightmap composite | not involved | darkens only, empty source with accel (C22, C29) |
| present path | clean | `GL_REPLACE`, `Color4f(1,1,1,1)`, no blend |

**Nothing is left that can introduce a factor of two.** There is also a hard arithmetic
contradiction: a software character pixel of 111 would require `texel = 111 / 0.2576 = 431`,
which is impossible for an 8-bit texel. So the *rendered* values do not follow the transfer that
every measurement says both paths compute.

**The most likely resolution is that the A/B pair is not comparing what it appears to.** This
project has a **known, still-open bistable lighting bug** (`camera-switch-lighting-flip`,
`research/12-`) in which scene lighting flips between two stable states. If switching renderers
via the options screen also flips that state, then every A/B capture in this document has been
comparing **two lighting states**, not two renderers — which would explain, at a stroke, why the
whole pipeline measures identical while the frames differ by 2x.

**The test that settles it — do this FIRST next session, before any more pipeline work:**
capture in software; switch to accel; switch **back** to software; capture again. Compare the
two *software* captures.

- If the two software captures differ by ~2x, **the defect is the bistable lighting bug, not the
  renderer**, and this entire investigation has been chasing a measurement artefact. Merge with
  `research/12-`.
- If they are identical, the A/B is sound, the contradiction above is real, and the next move is
  to instrument one concrete character pixel end to end in both modes (texel index, palette
  entry, colour accumulator, written value) rather than comparing aggregates.

## C31. CONTROL RUN — the A/B is sound; C30's "premise is wrong" doubt was misplaced

Captured in one session without moving the camera: accel -> software (SW1) -> accel -> software
(SW2). Comparing the two *software* frames isolates capture-to-capture variation from the
renderer difference.

```
SW1 vs SW2 : 89.9% identical  max 114  mean|d| 0.311   4.4% differ   SW2 = 0.840*SW1 + 3.52
SW1 vs HW  : 86.5% identical  max 119  mean|d| 1.343  11.4% differ   HW  = 0.398*SW1 + 5.04
SW2 vs HW  : 86.1% identical  max 118  mean|d| 1.373  11.8% differ   HW  = 0.395*SW2 + 5.32
```

Two software captures are **not** identical, but the variation is a quarter of the renderer
difference by mean |delta|, and the unstable pixels sit in `x[8..807] y[200..867]` — on the
characters. **That is the idle breathing animation**, not a lighting-state flip. The known
bistable lighting bug (`research/12-`) is **not** what this is; C30's suggestion to merge the two
investigations is withdrawn.

It does mean every fit quoted before this point was contaminated by animation drift.

### The clean, renderer-only number

Refitting on pixels that are **stable across SW1/SW2** (93.7 % of the frame), n = 82136:

```
R: hw = 0.394*sw + 5.46
G: hw = 0.391*sw + 5.22
B: hw = 0.390*sw + 5.08
```

| sw | -> hw | ratio |
|---|---|---|
| 11.2 | 10.2 | 0.911 |
| 20.2 | 13.2 | 0.652 |
| 30.0 | 17.6 | 0.586 |
| 51.0 | 25.3 | 0.496 |
| 67.4 | 32.1 | 0.476 |
| 107.6 | 48.7 | **0.453** |

**Gain 0.39, asymptotic ratio 0.45, offset +5.2 — consistent to three decimals across R/G/B.**
Use these numbers, not the earlier contaminated `0.43 / +3.8`.

### The offset is g_SolidColorMode

`g_SolidColorMode` was measured live as **`0x00050505`** = (5, 5, 5) — exactly the `+5.2` floor.
That is unlikely to be coincidence. In the software path that solid colour enters the `0x008`
blend at weight `alpha_idx = 3` (`3/255`), contributing ~0.06 and effectively nothing (C25). A
`+5` floor in the hardware output is what you would get if the **same solid colour is applied at
or near full weight** on the hardware side.

**This is the first lead that explains the offset rather than treating it as noise**, and it is
consistent with O3: bit `0x008` means "fog / solid contribution", the software path applies it
through `g_AlphaTable` at weight 3, and the GL path handles bit 0x008 differently (its fog term
is written into specular alpha, which `gl_ddraw.cpp` state 35 drops).

**Next:** measure `*g_ExternalRendererBridge.current_alpha` and how `g_SolidColorMode` /
`setFogColor` reach the DLL, and check whether the hardware path composites that (5,5,5) at a
weight the software path never uses. Note the gain (0.39) and the offset (+5.2) may have
*different* causes — do not assume one mechanism explains both.

### Setup caveat recorded for anyone re-measuring

`NOCTURNE_WINDOW_SCALE` is **2** in this build (`shims/shim_config.h`) — a developer hack that
renders at native 640x480 and integer-doubles the SDL window to 1280x960. It is nearest-neighbour
and symmetric across both renderers (both present through the same window, both dumps are
1280x960), so it should not affect brightness — but it has **not** been ruled out by experiment.
Separately, `g_CDemonCameraInstance.scale_factor == 2` and `g_CameraDownscaleIterations == 1` are
*engine-side* half-resolution mechanisms that select the HBilerp composite variants and index the
lightmap at `y >> 1`; those are real and are **not** symmetric between renderers, since with accel
on the CPU/composite path is inert entirely (C29).

## C32. THE 2x WAS A MEASUREMENT ARTEFACT. Real difference is ~10 %.

See the box at the top of this document. In short:

| method | result |
|---|---|
| fit on differing-pixels mask (used C2 -> C31) | `hw = 0.39..0.49 * sw` — **invalid** |
| unbiased whole-frame mean | `hw/sw = 0.905` |
| unbiased character-region mean | `hw/sw = 0.891` |
| percentile match p50/p90/p98/p99 | `0.929 / 0.905 / 0.963 / 0.988` |

**Hardware renders roughly 10 % darker than software, concentrated on the characters, with the
brightest highlights nearly matching (p99 = 0.99).** There is no factor of two and there never
was.

### What this retires

Every hypothesis in this document that existed *only* to explain a clean factor of two is now
unmotivated, including the search for a stray `>> 1` (C16). The elimination results stand on
their own and are still useful — they were settled by direct instrumentation:

- vertex lighting is identical per object (C27)
- the texel is bit-exact palette colour (C28)
- the modulation maths agree to 0.4 % (C17, C20)
- the lightmap composite only darkens and is inert with accel on (C22, C29)
- the software palette build is instruction-identical to retail (C18)

**Those are now *consistent* with the measurement rather than contradicting it.** C30's
"every stage is identical yet the frames differ 2x" paradox dissolves: the stages are identical
because the outputs are, in fact, nearly identical. The impossible arithmetic in C23/C30 (a
software pixel of 111 needing `texel = 431`) was a consequence of the same bad fit.

### What is still real and worth explaining

A ~10 % deficit concentrated on character geometry, plus whatever qualitative difference is
visible in play. Candidates that survive and are *proportionate* to a 10 % effect:

1. **O3 — per-vertex fog dropped.** `buildTLVertex` writes the fog factor into specular alpha
   (`0xff - (src->a >> 8)` under flag 0x008); `gl_ddraw.cpp` state 35 drops it and
   `glSecondaryColorPointer` is passed only 3 components. A genuine dropped term, right order of
   magnitude.
2. **The 0.4 % modulation gap** (`r/65280` vs `r/65536`) — tiny, but real and systematic.
3. **Filtering/sampling differences** — GL bilinear vs the software affine/perspective walk.
   This is also what produces the 19 % pointwise scatter, and it changes apparent brightness on
   textured surfaces without changing any lighting term.
4. `NOCTURNE_WINDOW_SCALE` / camera `scale_factor` interaction — untested (see the box above).

**Before any further work: re-establish the symptom.** Capture a fresh A/B and characterise it
with histograms/percentiles only. Decide whether a ~10 % character-only deficit is actually the
thing being seen in play, or whether the visible complaint is qualitative (filtering, banding,
fog) rather than a brightness scale.

## C33. Symptom re-established properly: a ~18 % UNIFORM dimming on characters

Measured with the corrected methodology (no differing-pixel mask, animation-stable pixels,
character crop `x[200..860] y[150..900]`), accel vs software, same camera:

```
                     mean    std     p40   p50   p70   p90   p95   p99
software             17.70  18.52   10.00 12.00 18.00 40.00 61.00 84.00
hw (DLL bilinear)    14.51  15.26    9.00 11.00 15.00 27.00 46.00 82.00
ratio                0.820  0.824   0.900 0.917 0.833 0.675 0.754 0.976
```

**mean ratio 0.820 vs std ratio 0.824 — nearly equal.** When the mean and the spread scale by
the same factor the difference is a **uniform scale**, not a contrast compression. An earlier
reading of these numbers as "mid-tone compression" was wrong; the percentile wobble is
quantisation and population shape, not a change in the transfer's shape.

**Corrected symptom statement: with acceleration on, character geometry renders ~18 % dimmer
than software, roughly uniformly, with highlights nearly matching.** This matches the reported
in-play appearance ("flat, muted, darker than they should be"). It is NOT a factor of two (C32).

## C34. Texture filtering RULED OUT — forcing point sampling makes it worse

The DLL requests bilinear: `*bridge.system_initialized == 1` so
`SetTextureStageState(0, MAG/MINFILTER, 2)`, and `*bridge.rendering_quality == 1` so
`MIPFILTER = 3` (LINEAR). The software rasterizer point-samples
(`pix = g_Hardware32BitPalette[texdata[tex_idx]]`, no filtering), so bilinear magnification on a
close-up character was a natural candidate for "less distinct".

A runtime override was added to test it without rebuild cycles —
`nocturne_set_texture_filter(mode)` in `gl_ddraw.cpp` (`0` obey the DLL, `1` force `GL_NEAREST`,
`2` force `GL_LINEAR`), re-applied on every bind and after every stage-state write:

```
character crop      mean    std     p90
software           16.10   17.51   37.0
hw bilinear        13.14   14.70   24.0
hw NEAREST          8.37   11.37   23.0     <- forced point sampling
```

**Forcing point sampling moves away from software on every statistic** (mean 13.14 -> 8.37).
Filtering is not the cause and bilinear is closer to correct than point sampling. The toggle is
left in place — it is cheap and useful for future A/B work.

Also noted while checking: the shim uploads **only mip level 0** (`GL_TEXTURE_MAX_LEVEL, 0`) and
discards the mip chain `expandTextureAndBuildMips` builds, even though the DLL asks for
`MIPFILTER = LINEAR`. That is a real fidelity gap, but it would make distant geometry *sharper*
and aliased, not flatter, so it is not this defect either. Worth fixing separately.

## Session end state (2026-08-23)

**What is true:** accel renders characters ~18 % dimmer, uniformly (C33). The backdrop is a blit
and is unaffected. Every stage from vertex to fragment measures identical: per-object vertex
light (C27), texel (C28), modulation to 0.4 % (C17/C20), blend op, palette build vs retail
(C18). Filtering (C34), the lightmap composite (C22/C29), the 0x008 solid blend (C25), alpha and
specular are all excluded.

**The open question is now much smaller than it was:** what accounts for ~18 %, given every
per-fragment term measures equal? Candidates, none yet tested against the corrected symptom:

1. **O3 — per-vertex fog dropped.** `buildTLVertex` writes the fog factor into specular alpha
   under flag 0x008; `gl_ddraw.cpp` state 35 drops it and only 3 components reach
   `glSecondaryColorPointer`. Right order of magnitude, and it is a genuinely missing term.
2. **Gouraud interpolation domain.** Software interpolates the colour accumulator per scanline
   from edge values; GL interpolates per fragment across the triangle. Same endpoints, possibly
   different interiors on curved surfaces.
3. **The `>> 8` truncation** in `buildTLVertex`'s diffuse pack — loses the low 8 bits of
   `red_current` (mean loss ~0.2 %, too small alone, but it is systematically downward).
4. `NOCTURNE_WINDOW_SCALE = 2` / camera `scale_factor == 2` — still untested by experiment.

**Method rules that must survive this session** are in the box at the top of this document. The
single most expensive mistake was fitting on a differing-pixels mask, which turned an 18 %
effect into an apparent 2x and generated many hypotheses that only ever existed to explain a
factor that was not there.

## C35. THE VALIDATED MEASUREMENT (supersedes C33/C34 and every earlier number)

Both halves captured through `SDL_GL_SwapWindow` (the only per-frame hook that exists in both
modes), 3 frames averaged per mode, self-consistency `mean|d| 0.12-0.42`.

```
whole frame :  sw 12.922 -> hw 11.682   ratio 0.9040
char crop   :  sw 16.083 -> hw 13.082   ratio 0.8134
char std    :  sw 17.399 -> hw 14.675   ratio 0.8434
identical 86.0%   max delta 107   mean|d| 1.321
```

| percentile | sw | hw | ratio |
|---|---|---|---|
| p25 | 7.00 | 7.00 | **1.000** |
| p50 | 12.00 | 11.00 | 0.917 |
| p70 | 18.00 | 15.00 | 0.833 |
| p80 | 23.33 | 18.00 | 0.771 |
| p90 | 40.00 | 26.67 | **0.667** |
| p95 | 60.33 | 46.00 | 0.762 |
| p99 | 83.00 | 82.00 | **0.988** |

Population of the character crop by brightness band:

| band | sw | hw |
|---|---|---|
| 0-8 | 28.54 % | 31.45 % |
| 8-16 | 32.23 % | 40.81 % |
| 16-32 | 25.55 % | 20.27 % |
| **32-64** | **9.23 %** | **4.08 %** |
| 64-128 | 4.45 % | 3.38 % |

### The signature

**Darks and highlights match exactly; the upper-mid tones collapse.** The 32-64 band loses more
than half its pixels, which redistribute into 8-16. The mean falls ~19 % on characters and ~10 %
over the whole frame (the backdrop is a blit and is unaffected).

This is *not* a uniform scale — C33's "mean ratio ~= std ratio therefore uniform" reading was
made on artefact data. With validated captures the mean ratio (0.813) and std ratio (0.843) are
close but the percentile curve is decidedly non-flat (1.000 -> 0.667 -> 0.988), which is a
**compression of the mid-to-upper-mid range with both endpoints pinned**.

It matches the reported in-play appearance exactly: "characters are more flat, less distinct
visual differences where I know they are supposed to be... darker than they are supposed to be,
like things are muted." Shading gradients that give a face or a coat fold its form live in
precisely the band being crushed.

### What a pinned-endpoints mid-range compression implies

A pure gain would move every percentile by the same factor; this does not. Both ends being
*exactly* preserved while the middle sags points at a term that is **zero at both extremes and
maximal in the middle**, or at a **quantisation/precision loss** in the middle of the range.
Candidates worth testing against *this* curve specifically:

1. **O3 — per-vertex fog dropped.** `buildTLVertex` packs the fog factor into specular alpha
   under flag 0x008; `gl_ddraw.cpp` state 35 drops it and only 3 components reach
   `glSecondaryColorPointer`. Fog is strongest at mid distance and vanishes at both extremes —
   the right *shape*, not just the right magnitude.
2. **Gouraud interpolation domain.** Software interpolates the colour accumulator per scanline
   from edge values; GL interpolates per fragment. Identical at vertices (the extremes), free to
   differ in between — again the right shape.
3. **The `>> 8` truncation** in the diffuse pack, which is systematically downward.

**Test them against the percentile curve, not against a single ratio.** A candidate must
reproduce `p25 = 1.00, p90 = 0.67, p99 = 0.99`, and a mechanism that merely scales cannot.

## C36. Fog (O3) REFUTED as the cause — the fog colour is near-black

```
g_FogColorIndexR/G/B = 5,5,5   ->  fog rgb = (5, 5, 5)
g_SolidColorMode     = 0x00050505      (g_SolidColorMode IS the fog colour)
g_VertexAlphaStart   = 0  ->  alpha_idx = 0  ->  software blend weight 0
```

D3D fog is `final = f*colour + (1-f)*fogcolour`. With a fog colour of **(5,5,5)** fog can only
**darken**. Hardware drops the term (specular alpha unused by `glSecondaryColorPointer`), so
dropping it makes hardware **brighter** — and hardware is measured **darker**. Wrong direction.
Additionally the software side's weight is 0 here, so neither path applies meaningful fog.

O3 remains a genuine fidelity gap (the term really is dropped) but it **cannot** be this defect.
It also cannot produce C35's pinned-endpoint curve for the same reason.

## C37. The scanline-ramp hypothesis REFUTED — C27's light comparison stands

C27 compared `g_VertexRedStart` (light at the **start** of a span) against hardware's
**per-vertex** diffuse. If the light ramped across spans, the span mean would exceed its start
and the comparison would be invalid. Tested by sampling start, delta and span length together
(`g_VertexRedDelta` is 16-bit and must be **sign-extended from 16**, not 32 — a 32-bit read
produces nonsense span means above 255):

```
tex 0xdd950828   startAvg 81.38   spanAvg 81.76   ratio 1.005
tex 0xdd964828   startAvg 73.29   spanAvg 74.59   ratio 1.018
mean delta 0.204 light-byte units/px, mean|delta| 2.018, mean span 4.7 px
```

Spans are short and the ramp contributes **0.5-1.8 %**. Software span means (73-82) vs hardware
per-vertex means (75-76) differ in *both* directions with no systematic gap. **The vertex light
matches. C27 stands.**

## C38. Visual confirmation of the defect's shape

Rendering the software and accel crops side by side with `|diff|` amplified 8x, all brightened
3.2x so the dark scene is readable, shows:

- The **entire character surface** differs — face, hat, uniform, arms — not edges, not triangle
  interiors, not localised highlights.
- The **background is black in the difference image**: filing cabinet, wall, chair are
  bit-identical, confirming they are blitted pre-rendered backdrop, not lit geometry.
- The dimming is **uniform across flat surfaces**, which **rules out interpolation differences**
  (Gouraud domain, perspective correction) — those would show inside triangles and vanish at
  vertices. Candidate 2 of C35 is therefore also dead.

## C39. STATE OF THE CONTRADICTION — stop hypothesising, instrument one pixel

Every input and every stage has now been measured equal, while the output differs by ~19 % on
characters:

| quantity | verdict | evidence |
|---|---|---|
| texel | identical | 100 % exact palette match (C28) |
| vertex light, per object | identical | C27, confirmed against the ramp objection (C37) |
| modulation maths | identical to 0.4 % | C17 / C20 |
| blend op, alpha, specular | identical / inert | C8, C25 |
| lightmap composite | inert with accel | C22, C29 |
| texture filtering | no effect | C34 (validated capture) |
| fog | wrong direction | C36 |
| interpolation domain | ruled out by the visual | C38 |

**Every remaining hypothesis has been tested and failed.** Further guessing is not productive.

**The only move left is a single-pixel end-to-end trace.** Pick one character surface point
(the deficit centroid is screen `(444, 456)` = framebuffer `(222, 228)`) and capture, in each
renderer, the four numbers that fully determine the output:

```
texel index        (g_CurrentTextureData[tex_idx])
palette entry      (g_CurrentPalette / g_Hardware32BitPalette[idx])
light word         (colour accumulator at that pixel / the packed diffuse byte)
value written      (the pixel in the target buffer)
```

If the four inputs agree and the outputs differ, the discrepancy is in the arithmetic actually
executed, and the asm for that path is next. If an input differs, that input is the bug.

**Practical obstacle to solve first:** locals in `renderMMXPerspectiveScanline32` report
`<optimized out>` under gdb, so this needs either that TU rebuilt at `-O0` or explicit probe
instrumentation added inside the `.keep` (an accumulator like `render_probe`, not a printf —
a printf on a bad expression kills the breakpoint block and freezes the game).

## C40. Side defect found: SIGSEGV in the master-Z depth blit after renderer switching

```
#0  0x00000000
#1..#4 libnvidia-glcore
#5  surface_blt_depth        gl_ddraw.cpp:504   (gl.BindFramebuffer(GL_READ_FRAMEBUFFER, src_fbo))
#6  surface_Blt              gl_ddraw.cpp:737
#7  APIDLLrestoreZBuffer     (tridx7)
#8  restoreZBuffer -> #9 CDemonCamera::restoreZBufferRectArray -> #10 CDemonSet::renderScene
```

Null call inside the driver from `gl.BindFramebuffer`, reached after several options-screen
renderer switches — most likely a stale/invalid FBO handle after a mode change. Unrelated to the
brightness defect but a real crash; worth its own investigation.

## C41. THE PER-PIXEL PATH IS EXONERATED BY DIRECT TRACE

`nocturne_swpix_*` (in `shims/dump.cpp`, called from all three store sites of
`renderMMXPerspectiveScanline32.keep.cpp`, inert unless armed) recorded 512 real character-surface
stores. **Note `edi/4` is the offset WITHIN the span, not screen x** — spans average ~5 px, so
filter on `scanline_y` only.

```
records 512      pred - out = 1 exactly, all 512
cw          min 8010  mean 9200  max 10114   -> hw diffuse byte (cw>>7) mean 71.9
palette red min 41    mean 166.9 max 240
sw out red  min 11    mean 45.0  max 63
hw PREDICTED for the same texel+light: mean 45.9      ratio hw/sw = 1.020
```

The software store matches `(pix_red << 4) * (cw >> 3) >> 16` to within one unit of truncation,
so the formula every earlier derivation used is **correct**. Applied to identical inputs the
hardware path yields **2 % brighter**, not 19 % darker. **The per-pixel arithmetic cannot be the
defect.** (`g_ScanlineRenderFunc` does point at `renderMMXPerspectiveScanline32`, confirmed live.)

## C42. RETRACTED — "per-material / skin" was a THRESHOLDING ARTEFACT

C42 originally claimed the defect was per-material, hitting "skin" while clothing was fine. That
was wrong, and the error is instructive.

The map was built by selecting pixels with `sw >= 48` and asking what hardware had there. In a
scene this dark, `sw >= 48` selects **only the brightest parts of each model** — which happen to
be the faces. Colouring those red produced a picture that looked like a skin/material effect and
I described it in those terms. **The engine has no concept of skin; it is just polygons with a
texture.** Reading material semantics off a threshold mask was pattern-matching on the image, not
on anything the renderer knows about.

## C42b. CORRECTED — ALL DLL-drawn geometry is dimmed; the backdrop is not

Re-done as a **ratio map** — colour each pixel by `hw/sw` (red < 0.75, amber 0.75-0.92, green
>= 0.92) over every pixel above a low noise floor. This works at any brightness instead of
privileging the brightest regions the way an absolute threshold does.

```
OFFICE   lit px 304392   red (ratio<0.75) 36.9%   amber 3.2%   green (>=0.92) 59.9%
CASTLE   lit px  69736   red (ratio<0.75)  1.2%   amber 1.8%   green (>=0.92) 97.1%
```

**RED covers the entire character models** — Stranger's whole coat, hat and face; the nurse's
whole uniform, hat, face and arms — **and the chair slats**. **GREEN is the static scene**: walls,
filing cabinet, desk, floor.

So the finding is the original C1 one, now properly validated: **everything drawn as 3D geometry
through the DLL renders dimmer under acceleration; the pre-rendered backdrop does not.** It is
uniform across each model, not confined to any material.

**Why the castle scene shows almost nothing (97.1 % green):** that scene has a whole-frame mean of
13.5 and almost no pixel exceeds 40. A multiplicative deficit is invisible in near-darkness — the
same crossover effect recorded in the measurement-traps box. **The castle pair is a poor repro;
use the office scene.**

## C43. Flag-combo alpha lead — WEAKENED by C42b

The lead in the previous revision (skin riding the semi-transparent `0x267`/`0x2e7` combos at
alpha ~130) rested on the defect being confined to one material. With the whole model affected,
that no longer follows: `0x2cd` carries **96 % of polygons at alpha 249** (opaque), and the whole
model is red, so the defect must be present on the **opaque, non-blended** path too.

The alpha combos remain a real difference worth checking, but they cannot be the primary cause.

## C44. What survives, and what to do next

**Established, with a validated capture method and unbiased statistics:**

- All DLL-drawn 3D geometry is dimmed under accel; the backdrop is untouched (C42b).
- The deficit scales with scene brightness — invisible in dark scenes (C42b, and the
  measurement-traps box).
- The per-pixel arithmetic is identical, hardware marginally brighter for equal inputs (C41).
- Texel is bit-exact (C28); per-object vertex light matches (C27, C37); modulation matches to
  0.4 % (C17/C20); filtering, fog, lightmap composite and interpolation domain are all ruled out
  (C34, C36, C22/C29, C38).

**The contradiction is unchanged and now very sharp:** every input and every per-pixel operation
measures identical, yet the geometry that goes through the DLL comes out dimmer, uniformly, on
the opaque path.

**Next step — count coverage, the one thing never measured.** If each drawn pixel has the right
value but *fewer* pixels are drawn (or the same pixels are drawn with partial coverage / dropped
sub-spans), the model reads dimmer while every per-pixel check passes. Concretely: instrument a
per-frame counter of pixels written by the software rasterizer (`nocturne_swpix_*` already sits at
every store site — add a plain counter) and compare against the hardware fragment count for the
same scene (occlusion query, or count `glDrawElements` index totals as an upper bound).

## Tooling added for this — the render probe

`annotations/tridx7.dll/pseudocode/shims/render_probe.{h,cpp}`, wired in at three points:

- `apidll_exports.cpp` — the four draw exports are registered through thin `probe_draw*`
  wrappers that record `(render_flags, polygon count, entry point)` and tail-call the real
  decompiled export. **The reconstructions themselves are untouched.**
- `gl_ddraw.cpp:convert_vertices` — one call per vertex with the packed diffuse/specular.
- `gl_ddraw.cpp:device_DrawIndexedPrimitive` — per-batch GL state (blend on/off, blend func,
  alpha test, textured); `surface_Flip` — the frame counter.

Always compiled in (a handful of adds per vertex). Dump from gdb:

```bash
scripts/Bash/dbg.sh cmd 'call (int)nocturne_reset_render_flags()'
# … drive the game into the scene of interest with acceleration on …
scripts/Bash/dbg.sh cmd 'call (int)nocturne_dump_render_flags("/tmp/rf.txt")'
```

The report answers O1 (polygons/frame reaching the DLL, per entry point), O2 (a
`render_flags` histogram with the C4 bit names decoded, plus per-combo light / alpha /
specular means and 16-bin histograms), and cross-checks with the GL blend state each batch was
drawn under. `nocturne_reset_render_flags()` gives a clean measurement window; the dump does
not reset.

**Read O2's fingerprints off the `alpha` histogram and the `spec nonzero` line first** — those
two lines discriminate the two hypotheses directly.

---

## Side findings (not this bug, but worth having)

- **PE link timestamps**: `nocturne.exe` 1999-11-02, `tridx7.dll` / `tridx6.dll` / `trid3d.dll`
  1999-10-07, `tri3dfx.dll` 1999-10-12, **`nocedit.exe` 2000-01-10**. The editor is the
  *newer* build by ~2 months, and `nocturne.exe` + `tridx7.dll` is the matched pair.
- **APIDLL ABI**: `nocturne.exe` binds exactly **37** `APIDLL*` names — precisely what
  `tridx7.dll` exports. `nocedit.exe` binds **60**. See
  `research/08-developer_mode_and_cheats/retail_vs_editor_mysteries.md` §5.
- **`engine/2d.c` 8-bit path**: `loadLightTable` and `buildBlendTables` are **empty stubs in
  nocedit and fully implemented in retail**; `lookupLitColor` and `processPolygonColor` are the
  live palette versions in retail and truecolour-only in the editor. A concrete instance of the
  editor build having code removed rather than merely reordered.
- **`diff_functions.py` anchor generation**: the 274-entry `sibling_manual_pairs.json` is not
  the only source. Matching by base function name (strip `_FUN_<addr>`, keep names unique on
  *both* sides) over the two `functions/` annotation trees yields **5085** pairs, 21 dropped as
  ambiguous. Packaged as `scripts/Python/make_sibling_anchors.py`:

  ```bash
  python3 scripts/Python/make_sibling_anchors.py --out /tmp/anchors.json
  python3 scripts/Python/diff_functions.py nocedit.exe nocturne.exe /tmp/anchors.json \
      --funcs-a annotations/nocedit.exe/functions \
      --funcs-b annotations/nocturne.exe/functions --json /tmp/sibdiff.json
  ```

  Caveat: a name match is not proof the bodies correspond — the name transfer itself can be
  wrong. Those show up as absurd size ratios inside `logic-change` (e.g.
  `CStairs_renderOpaque` 2175 B against an 11 B stub). Treat a large size ratio as a suspect
  *pairing*, not a finding.

---

## Next steps to resume

Steps 1–3 of the previous list are **done** — see C7, C8, C9, C10, and the expanded
don't-re-chase list. Both of the hypotheses that list was built to test are dead.

1. **Settle O4** — dump `g_SFogGrid` for the reference frame and check whether it is neutral
   outside the character region. This is the one thing blocking a decision on whether the
   missing lightmap pass (C10) is C7's cause.
2. **Re-measure in a brightly, locally-lit scene.** The reference scene is very dark
   (`mean |Δ| = 0.225` over the frame), which suppresses any multiplicative effect and makes
   the fit noisy. A scene with a strong local light would separate a gain defect from a floor
   defect cleanly.
3. **Decide whether the residual is worth fixing at all.** Max Δ = 29, mean |Δ| = 0.225, and
   two thirds of the differing pixels are silhouette/coverage pixels that are not a lighting
   phenomenon. Interiors do carry a real `0.79` gain, so there is something there — but it is
   no longer a visible defect, and it should be weighed against faithfulness risk before
   anyone changes the GL shim for it.
4. Fix O3 (per-vertex fog) independently and re-measure; it is a real defect either way.
5. Apply the C4 rename in `RENDER_STATE_FLAGS_VERIFIED.md`.
6. **Optional cleanup:** the probe's bit-name table labels `0x008` as `SOLIDALPHA`, but C3/O3
   show `0x008` is the **fog** enable (`iVar3 = 0xff - (src->a >> 8)` in `buildTLVertex`).
   Rename it in `render_probe.cpp`'s `decode_flags` so future dumps read correctly.
