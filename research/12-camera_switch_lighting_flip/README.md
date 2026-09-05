# Camera-switch / alt-tab lighting flip

Three bugs shared one symptom report: "ambient lighting sometimes goes much lower or
brighter when the static camera angle changes". Bug 1 and Bug 2a are fixed; Bug 2b is open.

> **Provenance.** The original notes for this chapter were never committed — the directory
> existed but was empty and untracked, and `research/13-accel_per_pixel_lighting` referred
> to a `research/12-` write-up that did not exist on disk. What follows is reconstructed
> from the surviving summary plus fresh measurement. Items marked *(recalled)* come from
> the summary and were **not** re-verified; everything else was measured or read from code
> directly and is safe to rely on.

## Bug 1 — camera ping-pong on focus regain. FIXED.

`CDemonSet::setCameraView` unconditionally set `previous_best_camera_index =
selected_camera_index`. `CGame::runGameSession` re-applies the *current* camera on focus
regain, so the current camera became its own previous-best, the virtual director scored it
`3.0 * 0.2 = 0.6`, and a neighbouring camera stole the view.

Faithful to the binary, so both arms are kept behind `NOCTURNE_AUTHENTIC_WINDOWS`, in two
places (verified in the current sources):

```c
// CDemonSet::setCameraView
#if NOCTURNE_AUTHENTIC_WINDOWS
  this_ptr->previous_best_camera_timer = 3.0;
#else
  if (index != this_ptr->selected_camera_index) { this_ptr->previous_best_camera_timer = 3.0; }
#endif
  ... same shape again for previous_best_camera_index ...

// CGame::runGameSession, focus regain
#if NOCTURNE_AUTHENTIC_WINDOWS
  setCameraView(g_CDemonSetPtr, g_CDemonSetPtr->selected_camera_index);
#else
  saved_pb_index = ...; saved_pb_timer = ...;
  setCameraView(g_CDemonSetPtr, g_CDemonSetPtr->selected_camera_index);
  g_CDemonSetPtr->previous_best_camera_index = saved_pb_index;
  g_CDemonSetPtr->previous_best_camera_timer = saved_pb_timer;
#endif
```

*(recalled)* Cameras 24/25 in town also legitimately differ by one baked light (`cell`
@ 0.50). That is authored content, not a bug.

## Bug 2a — one-frame corona flash on focus regain. FIXED.

The part of the alt-tab symptom that reproduces reliably: a brief dim on light-glow
sources — braziers in the castle mission — for a moment immediately after focus is
regained, settling almost instantly.

`CDemonSet::setCameraView` tears down the corona queue on every apply:

```c
g_OmniLightCount = 0;
this_ptr->selected_camera_index = index;
g_CoronaGlobeCount = 0;
g_QueuedCoronaGlobeCount = 0;
```

`g_CoronaGlobeCount` / `g_QueuedCoronaGlobeCount` are a queue — what is queued during a
frame is drawn the next. A focus regain re-applies the **same** camera, so the teardown
buys nothing and costs exactly one frame of light glows.

Fixed by guarding the teardown on an actual camera change, the same shape as Bug 1 and
behind the same `NOCTURNE_AUTHENTIC_WINDOWS` flag. The comparison is captured into a local
before `selected_camera_index` is overwritten.

**Measured, `altfocus_transient_burst.gdb`** — 14 consecutive frames captured from each
apply, dip taken as position 2 against the mean of its neighbours, region
`x 150..510, y 100..360`. `nocturne_dump_frontbuffer` returns the *presented* image, so the
frame captured at position 2 is the one **rendered** at position 1 — the frame whose entry
state was `coronas=0`.

| burst | before | after |
|---|---|---|
| 2 | −0.260 | −0.047 |
| 3 | −0.223 | −0.022 |
| 4 | −0.247 | −0.014 |
| 5 | −0.242 | −0.007 |

Mean −0.243 → −0.023. `coronas` now reads 4 on the first frame of a regain burst instead
of 0, while a genuine camera change (room load) still tears the queue down. Confirmed on
screen as well as in the numbers.

Why the shipped game did not show it: the same teardown is in the binary, but
`NOCTURNE_AUTHENTIC_WINDOWS = 1` froze the game while unfocused and restored the window
across the transition, so the one bad frame was never presented.

**Method note worth keeping.** Six state hypotheses died before this one because they all
sampled the *settled* state, and a pixel capture every 30 frames (98 frames, whole-frame
mean spread 1.1 %) structurally cannot resolve a one-frame event. What cracked it was
reframing the symptom as a brief flash rather than a second stable state, which turns
"which variable differs?" into "capture consecutive frames from the apply".

## Bug 2b — the longer-lived dim. OPEN.

Separate from 2a and not addressed by it: the report that lighting sometimes stays wrong
after a regain, and that the chapel window (a static spot light, not a corona source)
changes as well. Everything under "Eliminated" below still applies.

### Symptom, as refined at the repro

Castle mission at the start, the window high in the chapel tower.

- Reported across every environment; far more noticeable with two game instances open for
  netplay testing, because that means constant focus changes.
- *(recalled)* Measured as bistable, mean 14.139 against 21.067.

### ROOT CAUSE — `CGlass` is drawn twice, and the hardware copy is redundant

> **CORRECTED.** This section was headed "hardware geometry misses the per-pixel lightmap".
> That framing is WRONG and led to a full implementation cycle being built and reverted
> (`research/17` phase 1). Hardware geometry does **not** miss anything: it carries its own
> per-vertex lighting and already arrives at final brightness. Measured — one static scene,
> captures synced to `SDL_GL_SwapWindow`, both accelerated ones from the SAME frame:
>
> ```
>                     mean    p50   p90   p99   max
>   software         14.22   14.0  24.0  28.0   181
>   accel, grid OFF  14.33   14.0  24.0  29.0   182   ratio 1.0076
>   accel, grid ON   12.85   11.0  23.0  24.0   144   ratio 0.9035
> ```
>
> Accel *without* the grid matches software at every percentile; applying it darkens to 0.41x.
> The per-pixel grid is the SOFTWARE rasterizer's lighting mechanism.
>
> **DO NOT try to fix this bug by lightmapping hardware draws.** The defect is the duplicate
> draw itself. Everything measured below stands — it is the interpretation that changed.

Measured end to end in one accelerated run, no hypothesis in the chain:

| stage | window region |
|---|---|
| camera framebuffer (the composite's SOURCE) | max **85** — glass present, unlit |
| composite OUTPUT (`g_ScreenBufferArray`) | mean 21, max **22** — lightmap darkens it, correct |
| PRESENTED frame | mean 20.53, max **56** — hardware re-draw on top |
| presented, with those hw draws suppressed | mean **19.32**, max **39** |

and the composite's three inputs are identical between the renderers (source
bit-identical, fog bit-identical, lightmap diffmax 2 and identical over the window), while
the shim's scene upload replaces rather than blends (`GL_BLEND` off, `GL_REPLACE`,
`Color4f(1,1,1,1)`). Blend state at the offending draws is also correct —
`SRCBLEND=SRCALPHA DESTBLEND=INVSRCALPHA ABE=1 TMB=MODULATEALPHA blend_mode=0`.

16 hardware quads land on the window every frame (`flags=0x267`, `tex=122`). Their call
chain:

```
CDemonSet::renderScene:112
 -> CDemonSet::renderOpaqueActors:41
   -> CGlass::renderOpaque:66
     -> renderBlendedPoly -> clipAndFillPoly -> renderTriangleTextured
       -> drawPolygon2 -> APIDLLdrawPolygon2        (hardware)
```

**The glass renders twice per frame by design**: once via `CGlass::renderBackground` inside
`beginBackgroundScene` — which sets `g_UseExternalRenderer = 0`, so it lands in the camera
framebuffer and *is* lightmapped — and once via `CGlass::renderOpaque` from
`renderOpaqueActors`. In software both go to the camera framebuffer and the composite lights
both. Under acceleration the second goes to the DLL, bypasses the camera framebuffer, and
therefore **misses the per-pixel lightmap**, landing at full texture brightness on top of the
correctly-darkened composite.

**This is `research/13`'s C14, masked rather than superseded.** The fog fix removed the
dominant character error, so "hardware geometry misses the per-pixel lightmap" stopped being
visible on characters — but it is still live, and on the glass it is worth 2x instead of a
few percent. It also answers 13's O4 (why the world measures bit-identical): the world *is*
the backdrop, which goes through the composite's source. Only hardware-drawn actors miss it.

**Fix direction.** The per-pixel light/fog grid has to reach hardware geometry. Either apply
it as a GPU post-pass after the hardware draws (the general fix — it would also close 13's
C14 residual and is the only one that makes software and hardware deterministic), or stop
the second, hardware-side draw of geometry that the background pass already composited (a
targeted fix for the glass alone). The suppression test above is the evidence for the
latter: killing those draws moves the window mean from 20.53 to 19.32, against software and
retail's 19.50.

The residual max (39 against 28) is not yet explained and should not be assumed to have the
same cause.

### POLARITY CORRECTED — the bright window is the bug, the flash frame is CORRECT

A retail reference settled this: `nocturne.exe` run under Wine, hardware acceleration,
640x480, same scene. Measured over the same window region, with whole-frame figures as the
exposure control:

| source | res | win mean | win **max** | frame mean | frame max |
|---|---|---|---|---|---|
| **retail (Wine, accel)** | 640x480 | 19.50 | **29** | 14.32 | 181 |
| **ours, software** | 640x480 | **19.50** | **28** | 14.02 | 184 |
| ours, accelerated | 1024x768 | 20.53 | **56** | 14.19 | 182 |
| ours, accelerated, the "flash" frame | — | 19.48 | 39 | — | — |

**Our software path matches retail to two decimal places on the window mean** (19.50 vs
19.50, max 28 vs 29), and whole-frame mean and max agree across all three, so global
exposure is controlled. **Our accelerated path is the sole outlier**, at roughly 2x on the
window's max.

Resolution is not the confound: the earlier accelerated bursts at `window=640x480` measured
the same 20.53 / 56 as this capture at `window=1024x768`.

**So the defect is not that one frame goes dim — it is that every other frame is over-lit,
and the "flash" is the one frame the accelerated path gets right** (19.48, against retail's
19.50). Everything below that describes the flash as the anomaly is reading the sign
backwards; it is kept because the localization work is still valid and the measurements
stand.

Direct accel-vs-software diff of the same scene: whole-frame ratio 1.012, window mean ratio
1.053, but window max 56 against 28 — the excess is concentrated in the window's brightest
texels rather than spread evenly.

**Caveat on that diff:** the two captures were minutes apart, so the character pixels differ
by idle animation and rasteriser misregistration and are **not** comparable (see the
measurement rules in [[accel-lighting-half-gain]]). The rose window is static geometry, so
its difference is the trustworthy part.

### Watch the resolution — it selects a different lock path

`lockAndRenderToBuffer` branches on `g_WindowHeight >= 481`: `lockHoldBuffer` above,
`lockFrame` below. The running process changed from `window=640x480` to `window=1024x768`
mid-session, which crosses that branch. Record the resolution alongside every measurement
here; the window figures happen to be stable across both, but the code path is not.

### LOCALIZED — one frame, one surface, regain only

Burst-captured 120 consecutive frames across 7 focus transitions with
`altfocus_focus_burst.gdb`, which arms on `WM_ACTIVATEAPP` so it fires in **both**
directions (the older burst probe armed on `setCameraView`, which only runs on regain and
therefore could never have seen a loss-side event).

Mean and max over the tower-window region, per burst:

| burst | direction | window mean across the burst | window max |
|---|---|---|---|
| ev1 | regain | 20.53 **19.48** 20.53 20.53 20.53 20.53 20.53 | 56 **39** 56 … |
| ev3 | regain | 20.53 **19.48** 20.53 … | 56 **39** 56 … |
| ev5 | regain | 20.52 **19.47** 20.52 … | 56 **39** 56 … |
| ev7 | regain | 20.53 **19.48** 20.53 … | 56 **39** 56 … |
| ev2/4/6 | loss | 20.53 flat | 56 flat |

**Exactly position 2 of every regain burst, never on a loss.** `nocturne_dump_frontbuffer`
returns the presented image, so position 2 holds the frame *rendered* at position 1 — the
first frame rendered after the focus-regain camera apply.

Every state the probe samples is **constant** across all 120 frames, flash frame included:
`lighting_quality_mode=0`, `g_SpotLightCount=1`, `g_DynamicLightCount=0`,
`g_AmbientLightLevel=16384`, `g_CoronaGlobeCount=4`, `g_OmniLightCount=48`. Consistent with
every earlier elimination — and confirming the 2a fix still holds, since coronas read 4 on
the flash frame rather than 0.

**Which surfaces:** differencing the flash frame against *both* neighbours and rejecting
pixels that also differ between the neighbours (i.e. rejecting motion) leaves **2792 px,
0.355 % of the frame** — and the mask is a **solid filled disc over the rose window**.
Everything else surviving is thin silhouette outlines on the two characters and the smoke
puffs, which is residual idle animation, not lighting. So it is **one surface**, not
"specific surfaces"; the earlier "a body on the ground" was most likely motion edges too.

**Direction — the flash frame is the DIM one.** Steady renders the window as vivid
stained glass (max 56); for that single frame it renders washed out and unlit (max 39).
So the window loses its lighting contribution for one frame after the apply and pops back.
Whether the *steady* brightness is itself correct is a separate open question the reporter
has raised, and this measurement does not settle it.

### Dead — "the window is baked twice, hence too bright"

Tested directly, because the reporter's reading was that the window is over-bright in the
steady state and the flash merely exposes it. Both halves fail:

- **The authored art has no lit window.** `castle.pod` → `BACKDROP\CAS1.RAW` is 640x480
  8-bit with `CAS1.ACT` as its palette (extract with `scripts/Python/extract_pod.py`).
  Rendered, the rose window is a **dark opening with a bright stone rim** — region mean
  31.07, max 85, where the 85 is stonework. The stained-glass colour is *not* in the
  backdrop, so `precomputeLight` cannot be adding a second helping to it.
- **The bake is idempotent.** The steady window value is bit-identical after every regain
  (`20.53 / max 56`, once `20.52`). An additive bake would climb with each alt-tab.

Also note the render never exceeds the source art (56 steady against 85 authored), so
nothing here supports "rendered too bright" as a separate defect.

**Where the colour actually comes from:** the spot light has no gobo
(`filter_name="unnamed"`, `filter_buffer=(nil)`) but does carry a 256x256
`precomputed_lighting_textures` buffer. The window's stained glass is that baked lightmap
projected at render time — which makes the one-frame dip a question about that buffer's
lifecycle across `freeMasterZBuffer` -> `allocMasterZBuffer` -> `precomputeLight`, not
about the backdrop.

### Dead — the spot light's own state. All of it.

Three probes, each burst-captured across 4-5 focus transitions in both directions. Every
value below is **bit-identical on the flash frame** and on every other frame:

| measured | probe | result |
|---|---|---|
| lightmap contents (8x8 centre grid) | `altfocus_lightmap_probe.gdb` | `sum=1027 nz=64/64` constant |
| `precomputed_lighting_textures`, `master_zbuffer`, `lightmap_visibility_bits` pointers | same | constant, never null |
| `light_enabled_flag`, `texture_width` | same | constant |
| scanline projection extents, 60 of 240 sampled | `altfocus_extent_probe.gdb` | `empty=29/60 spansum=7677` constant, `ext0=[999,0] ext120=[32,318]` constant |

So the bake is correct, the buffers are live, and the projection spans are intact — on the
very frame the window renders dim.

**This forces a correction.** The stained glass is *not* projected per-frame from the light;
if it were, one of the above would have moved. `precomputeLight` bakes it **into the
backdrop** and `restoreDirtyRegions` un-bakes it. That reconciles both earlier facts: the
raw art has no lit window, and the light state never changes.

So the defect is that **the presented backdrop lacks the bake for one frame.**

**Sampling trap that cost a round:** the first lightmap probe checksummed at a 1024-byte
stride over a 256-wide map, which samples *column 0 of every 4th row* — the unlit margin.
It read a constant `sum=0 nz=0/64` and looked like a clean negative. Verify a probe reads
non-trivial data (`x/16xb` at a few offsets) *before* spending a repro round on it.

### POSITIVE SIGNAL — three un-applies against one apply, on exactly the flash frame

The per-frame carrier is not the background composed in `setCameraView`. It is this pair
inside `renderScene`:

```c
if ((g_RenderingShadows != 0) || (g_CGamePtr->shadow_flag != 0)) {
    g_RenderingShadows = 0;                       // one-shot flag, cleared on entry
    processCorona(&g_CDemonCameraInstance);
    for (spot lights) addLightmapToCorona(&g_CDemonCameraInstance, light);   // line 56
}
...
for (spot lights) restoreDirtyRegions(light);                                // line 191
```

Counting those calls per frame (`altfocus_lightmap_apply_probe.gdb`) gives the **first
value in this whole investigation that differs on the bad frame** — and it is exact and
reproducible on all five regains captured:

| frame | add | proc | restore | `g_RenderingShadows` |
|---|---|---|---|---|
| position 1 of every regain | 1 | 1 | **3** | **1** |
| every other frame, both directions | 1 | 1 | 1 | 0 |

**The lightmap is un-applied three times against one apply.** The count of 3 reconciles
exactly with the call sites:

| site | calls |
|---|---|
| `setCameraView`, dynamic-light loop (`g_DynamicLightCount = 0`) | 0 |
| `setCameraView`, spot-light loop at entry | 1 |
| `setCameraView`, inside the per-light bake loop | 1 |
| `renderScene`, end of frame | 1 |

Also note `g_RenderingShadows` is left **set** entering the frame after an apply, where it
is 0 on every other frame. Since `shadow_flag` is 1 the gate opens regardless, so this is
probably benign — but it is a second thing unique to that frame and is recorded rather than
assumed away.

### WHY ACCEL-ONLY — the CPU/GPU composite split (see `research/13`, C10)

Neither `restoreDirtyRegions` nor `addLightmapToCorona` has an accel branch; both are pure
CPU. The divergence is one level up, and `research/13-accel_per_pixel_lighting` already
measured it. `lockAndRenderToBuffer`:

```c
lockFrame();                               // 1. lock the CPU-side surface
compositeLightmapToFramebuffer(this_ptr);  // 2. per-pixel light/fog grid, CPU-side
unlockFrame(0);
if (g_UseDirect3D == 0) return iVar1;      // 3. SOFTWARE IS DONE HERE
beginScene();                              // 4. accel only -- all hardware draws land AFTER
```

- **Software:** the lightmap composite is the *last* step. Everything presented has received
  it. Deterministic by construction.
- **Accelerated:** the composite runs on the CPU surface *before* any hardware drawing, so
  hardware geometry never receives it. Measured in 13/C10 over 46 frames: composite once per
  frame, `draws_pre=171` against `draws_post=11785`, and the software MMX rasteriser never
  runs at all.

**RETRACTED — the composite ordering does not explain this.** An earlier revision of this
section claimed the ordering above was the cause. It is not, for two reasons:

1. **The residual it was meant to explain is gone.** 13/C14's "hardware characters miss the
   per-pixel lightmap" was superseded: the accel dimming was **solved** by the GL fog fix
   (`FOGTABLEMODE=NONE` left `GL_FOG` enabled — see [[accel-lighting-half-gain]]), and
   characters now render correctly under acceleration. 13 itself flags the ordering as
   "leading candidate ... **unreconciled** with the world measuring bit-identical" (O4), i.e.
   an open question, not a finding.
2. **The rose window is backdrop, which is blitted CPU-side.** That is exactly why the
   backdrop was never fogged while DLL-drawn geometry was. So the window receives the
   composite in *both* paths, and hardware draw ordering cannot dim a surface that hardware
   does not draw.

**What still stands from C10:** the composite genuinely runs before `beginScene()` and the
software path returns before it (`draws_pre=171` vs `draws_post=11785`, software rasteriser
never runs under accel). That is a measured fact about ordering. What is *not* established
is that the ordering has any visible consequence — O4 remains open, and the evidence now
says hardware geometry looks correct despite it.

**So the accel-only question is still open**, and narrower than before: what differs, for a
CPU-blitted backdrop, between software and acceleration? The candidate worth examining is
the readback/upload round-trip the accelerated path needs and software does not — GL renders,
`surface_readback_from_gl` pulls the frame back into CPU pixels so the engine can composite
into the returned scanlines, and the result is uploaded again. `setCameraView`'s extra round
of rendering lands inside that cycle exactly once per regain. Untested.

### Ordering suspect — DEAD, the background is not the carrier

*(Kept for the record.)* Measured with `altfocus_accel_compose_probe.gdb`: the accelerated
background is composed **once per apply** (`geo_in=2 bg_in=5` on the apply frame) and
**never per frame** (`geo_out=0`, `bg_out=0` on every frame including the one right after).
So a stale GPU-side background composed before the bake could not recover on the next frame
— but the window does. The background is therefore not what changes, and the ordering story
below cannot be the mechanism.

### Ordering note — accel composes the background before the bake

`setCameraView` runs its accel-only second geometry pass **before** the spot-light loop that
bakes:

```c
if (g_UseExternalRenderer != 0) {        // accel-only background re-render
    renderSceneGeometry(this_ptr, 9999.9, 0);
    renderBackgroundActors(this_ptr, 1);
}
endScene(...);
if (this_ptr->disable_spotlight_shadows == 0) {
    for (each spot) { ... restoreDirtyRegions(light); precomputeLight(...); }
}
```

If the accelerated path's copy of the background is composed there, it is composed from a
backdrop whose light has just been *un-baked* and not yet re-baked. Untested.

**ANSWERED: the flash is ACCELERATED-ONLY.** Run with `g_UseDirect3D = 0` and
`g_UseExternalRenderer = 0` confirmed live in the process, same scene, same alt-tab
routine: **no flash**. So:

- The game's own bake/restore logic is **exonerated** — software performs the identical
  `restoreDirtyRegions` / `precomputeLight` cycle and presents no bad frame.
- That also demotes the unguarded-teardown suspect below: software runs that same
  unguarded teardown and does not flash. Guarding it would be treating a symptom in the
  wrong layer.
- The fault is in the **accelerated path**: either this ordering, or how the backdrop
  reaches the GPU in tridx7 / the GL shim.

Consistent with the accel-only framing: in software the backdrop is a CPU buffer that the
bake writes into and the next frame reads, so it cannot go stale. Under acceleration there
is a second, GPU-side copy, and the only question is whether it is composed before or after
the bake.

Note the camera's own `framebuffer_aligned` (640x480) reads all zero under acceleration, so
it is not the carrier there and is not worth checksumming.

### Demoted by the software A/B — an unguarded teardown, the same shape as 2a

*(Kept for the record. Software runs this same unguarded teardown and shows no flash, so
this is not the cause — but the observation itself is still accurate and may matter for
allocation churn.)*

`setCameraView` opens with, unconditionally:

```c
for (...) restoreDirtyRegions(g_DynamicLights[i]);
for (...) restoreDirtyRegions(g_SpotLightList[i]);   // un-bakes the spot light
for (...) freeMasterZBuffer(g_SpotLightList[i]);
resetRestoreMemoryAllocator();
```

`restoreDirtyRegions` undoes the baked spot light and `precomputeLight` re-bakes it later in
the same call. On a focus regain the camera is unchanged, so this tears down and rebuilds
identical state — exactly the pattern that caused 2a, but on the light bake rather than the
corona queue, and **not** covered by the `same_camera` guard that fixed 2a.

Not yet proven: guarding it is riskier than the corona case, because the rebuild path
(`allocMasterZBuffer` and `precomputeLight`) assumes the teardown ran. Skipping only the
teardown risks a double allocation and a double bake — which would make the window
*brighter*, so it is worth trying deliberately as a diagnostic: if the window brightens
cumulatively per alt-tab, the bake is additive and that also bears on the "too bright"
question.

### Why our build can show this at all

`NOCTURNE_AUTHENTIC_WINDOWS = 0` removes the shipped behaviour on focus loss. The
as-shipped pump blocks:

```c
while (true) {
    while (PeekMessageA(...)) { TranslateMessage(...); DispatchMessageA(...); }
#if NOCTURNE_AUTHENTIC_WINDOWS
    if (g_WindowActive != 0 || g_InputDisabled != 0 || g_ForceMessagePump == 0) break;
    Sleep(0x14);
#else
    break;
#endif
}
```

The same flag also disables the thread-priority drop, the video restore/minimise, and
`swapBuffers`' `g_WindowActive` present gate. So the shipped game **froze** while
unfocused; ours keeps simulating, animating and presenting. That deviation is deliberate —
it is what makes two-window netplay testing possible — but it means anything time- or
frame-dependent keeps running while the window is in the background. Any fix here has to
respect that this is a supported configuration.

### Eliminated — measured, do not re-chase

Each of these was tested against the live repro in the castle scene.

1. **State at camera-apply time.** Across 14 consecutive applies, every one byte-identical:
   `g_ProjectionScale`, `g_TransformMatrix` columns 0 and 1, `lighting_quality_mode`,
   `mirror_lighting_cached`, `disable_directional_lighting`,
   `directional_light_ratio_enabled`. Probe: `altfocus_lighting_probe.gdb`.
2. **Per-frame lighting state.** 14 `nocturne_dump_lighting_state` dumps differed **only**
   in their timestamp line — `g_AmbientLightLevel`, `g_DynamicLightCount`,
   `g_SpotLightCount`, `g_StaticColorVector` and the entire vertex-colour gradient
   constant. Probe: `altfocus_lighting_dump.gdb`. *Caveat:* taken at `renderScene` entry,
   where `g_VertexCount` is 0, so the vertex-normal sample and magnitude histogram sections
   were empty. Those two sections remain unmeasured.
3. **Animated light filters.** `C3DSLight` carries a gobo animation
   (`filter_count` `0x11ec`, `filter_durations[32]` `0x16f4`,
   `current_filter_frame` `0x1890`, `filter_frame_elapsed` `0x1894`), and
   `setCameraView` bakes each spot light into the backdrop once per apply, so a frozen
   filter phase looked like a strong candidate. **Dead: no light in this scene has
   `filter_count > 0`** — 20 applies produced zero matching lights out of 124.
   Probe: `altfocus_filter_phase_probe.gdb`.
4. **A missed or duplicated restore.** One alt-tab produces **exactly one** apply, from
   `CGame::runGameSession`'s focus-regain block (`runGameSession.keep.cpp:374`, the
   `#else` arm). The restore is not being skipped and not running twice.
5. **`CDemonCamera::precomputeLight`'s partial struct copy.** The mirror research flagged
   an uninitialised `CVector3i` here (`.z` never written), which would have been an ideal
   source of intermittency. Already fixed: the `.keep` carries the full
   `local_64 = local_70;`.

### Eliminated — *(recalled)*, not re-verified

Ambient scalars; gamma / LUT; colour correction; buffer parity; delta-time spike; the pool
allocator. Also *(recalled)*: 22 globals proven identical in both lighting states, and a
key negative — 6 manual camera re-applies produced no flip. That last one is consistent
with what is measured above: a re-apply while focused starts from the settled state.

Separately, `research/13-accel_per_pixel_lighting` C30 suspected this bug of contaminating
its renderer A/B, then withdrew it in C31: the SW1/SW2 variation there is idle breathing
animation, not a lighting-state flip. The renderer A/B is **not** a trigger for this bug.

### Where that leaves it

The inputs to the rebuild are identical, the rebuild fires exactly once per regain, and the
output visibly differs. So the difference is either nondeterminism inside the bake —
uninitialised memory or timing — or state that none of the five probes above sampled.

Next moves, roughly in order of cost:

- **DONE** — the frame and the surface are now both pinned: position 2 of every regain, the
  rose window alone. See "LOCALIZED" above.
- Test the prime suspect: guard the `restoreDirtyRegions` / `freeMasterZBuffer` teardown on
  `same_camera`, as the corona pair already is. Treat a cumulative brightening across
  alt-tabs as a *result*, not a regression — it would prove the bake is additive.
- Close the gap left by elimination (2): dump lighting state at a point where
  `g_VertexCount != 0`, so the vertex-normal sample and magnitude histogram are actually
  populated. Breaking at `renderScene` entry was the wrong anchor.
- Separately, settle whether the *steady* window brightness is correct at all. The one-frame
  dip and "the window is too bright in general" are different claims and only the first is
  measured.

## Probes in this directory

| file | what it captures |
|---|---|
| `altfocus_lighting_probe.gdb` | projection + `CDemonSet` lighting gates, per apply and per lighting precompute |
| `altfocus_lighting_dump.gdb` | automatic `nocturne_dump_lighting_state` five frames after each apply, numbered |
| `altfocus_restore_probe.gdb` | focus transitions against camera applies |
| `altfocus_filter_phase_probe.gdb` | per-light animated-filter phase at each apply |
| `altfocus_dirtyrect_probe.gdb` | spot-light shadow-map dirty-rect accounting per frame |
| `altfocus_pixel_capture.gdb` | periodic frontbuffer capture, for slow/persistent changes |
| `altfocus_transient_burst.gdb` | **14 consecutive frames from each apply** — the one that found 2a |
| `altfocus_focus_burst.gdb` | **16 consecutive frames from each `WM_ACTIVATEAPP`, both directions** — the one that localized 2b to position 2 of a regain and to the rose window |
| `altfocus_lightmap_probe.gdb` | the spot light's baked lightmap: pointers plus an 8x8 centre-grid checksum, per frame |
| `altfocus_extent_probe.gdb` | the light's per-scanline projection extents — empty-span count and total span, per frame |
| `altfocus_accel_compose_probe.gdb` | renderSceneGeometry / renderBackgroundActors counts per frame, split inside vs outside the camera apply |
| `altfocus_lightmap_apply_probe.gdb` | **addLightmapToCorona / processCorona / restoreDirtyRegions counts per frame** — the one that found the 3-restores-to-1-apply imbalance |

The dump probe exists to solve an observer problem worth remembering: reporting which
lighting state is on screen requires alt-tabbing away, which changes the state. Anything
focus-dependent has to be captured automatically and correlated afterwards.

### Probe hygiene — two traps, each cost a full iteration

- **Never name a gdb convenience variable `$bl`, `$bh`, `$bx`, `$bp`, `$sp`, `$si`, `$di`
  or `$ps`.** On x86 those are *registers*. `set $bl = X` inside a breakpoint command
  writes the running program's BL register on every hit — the comparison never holds and
  the inferior is being corrupted while it runs.
- **No `\` line continuations inside an `if` nested in a `commands` block.** The block
  nesting breaks and the body executes unconditionally. Keep each `printf` on one line.
