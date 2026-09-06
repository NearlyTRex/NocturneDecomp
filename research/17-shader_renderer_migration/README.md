# Shader renderer migration

Moving the GL shim off fixed function and onto shaders, so the graphics can later be improved
with modern techniques. The goal is the RENDERER, not any particular bug — a specific bug is
what pulled this off course once already (see the struck phase 1 below).

## STATE — read this first

**The draw path is off fixed function and verified pixel-neutral, and so is the present blit,
in software mode AND under acceleration** — bit-identical, not merely within the noise floor.
Nothing in the migration is now unmeasured.

**A renderer written directly against modern GL passed its A/B against the path this migration
started from, and is now the only one the build has.** `trigl.dll` — `shims/renderer/`, ~3.7k
lines — implements the 37 `APIDLL*` entry points against GL directly. Everything below about
`trigl.dll` being tridx7's export table with a shader flag describes the module this doc knew as
that name; the decompiled DX7 renderer, its GL-backed DirectDraw and its shader layer are out of
the build. The tridx7 tree stays on disk as the specification, with a README beside it saying so.

| | state |
|---|---|
| vertex submission | **done** — buffer object, streamed with orphaning |
| vertex attributes | **done** — named; `a_pos` pinned to location 0 |
| transform | **done** — own `u_projection`; no matrix stack, no `ftransform()` |
| texturing / secondary colour / alpha test | **done** — in shader since phase 0 |
| texture stage ops | **done** — nothing to do; only `DISABLE`/`MODULATE` are ever set |
| per-vertex fog | **implemented in both renderers, default OFF** — measurement inconclusive |
| blend / depth / cull / scissor | staying as GL state, by design |
| present blit | **done, bit-exact in both modes** — buffer object + shader in `gl_blit.cpp` |
| native renderer | **done, measured** — see "The native renderer A/B" below |
| the DX7 path | **retired** — one renderer, one row in `g_BuiltinModules` |
| core profile | **next** — nothing needs compatibility any more |

### Pick up here

1. **The core profile.** The native renderer is already core-clean: it binds a real VAO and its
   shaders are `#version 150 core`. What is left is outside it — the context is requested as
   compatibility at `gl/gl_present.cpp:156`, `gl_blit.cpp` is `#version 120` with no VAO and is
   shared with software mode, three immediate-mode fallback quads remain in `gl_present.cpp`,
   and `gl_api.cpp` lists the fixed-function entry points as mandatory, so a missing `glBegin`
   takes the whole GL path down including software mode.
2. **Three artifacts found by the A/B**, none of them the renderer — see open items 7, 8, 9.

Do not switch renderers by writing `g_UseDirect3D` / `g_UseExternalRenderer` from gdb — that
skips renderer init and crashes within seconds. Use the options screen.

### Tools this left behind

Live-settable from gdb (`scripts/Bash/dbg.sh cmd 'set var <name> = <n>'`), all also readable
from an env var at first use:

| symbol | env | meaning |
|---|---|---|
| `nocturne_trigl_vertex_fog` | `NOCTURNE_TRIGL_VERTEX_FOG` | 0 off, 1 apply D3D per-vertex fog |
| `nocturne_trigl_debug` | `NOCTURNE_TRIGL_DEBUG` | paint one shader input: 5 texture colour, 4 vertex colour, 3 UV, 2 final alpha, 1 texture alpha |
| `nocturne_gl_blit_shader` | `NOCTURNE_GL_BLIT_SHADER` | 0 immediate-mode present quad, 1 shader quad. Read per blit — no rebuild, so the A/B can be adjacent frames |

`nocturne_trigl_stats` counts what reached the hardware, and
`nocturne_trigl_dump_draws("/tmp/draws.txt")` writes one line per draw of the frame being built —
the texture the engine selected, the dimension it resolved at, and the GL texture that ended up
bound. A frame held on screen with the renderer idle can be interrogated at leisure.

The DX7 path's own instruments (`nocturne_dump_render_flags`, `nocturne_gl_shader_*`,
`nocturne_gl_lightmap_debug`) went with it; the numbers they produced are quoted throughout this
document and recoverable from git history.

Probes in this directory: `vertex_path_ab.gdb` (phase 3's exit-criterion A/B),
`blit_same_frame_ab.gdb` (phase 4's, and the stronger design — see below),
`blit_path_ab.gdb`, `software_reference_capture.gdb`, `vertex_fog_ab.gdb`,
`lightmap_view_capture.gdb`, `renderer_ab_capture.gdb` (one capture of the held frame through
whichever renderer is selected — the harness the native renderer's A/B was measured with).

`compare_ppm.py` compares captures the way the method rules require — matched percentiles, an
exact-match fraction, and deliberately no differing-pixels mask or paired-pixel fit.

`nocturne_dump_render_flags("/tmp/rf.txt")` dumps what actually reaches the hardware,
including the `specA` histogram added for the fog question.

### Method rules, learned the hard way here

1. **Capture ONLY synced to `SDL_GL_SwapWindow`.** `research/13` has four dumps of an
   unchanged scene returning three different images from an arbitrary mid-frame pause.
2. **Never compare across resolutions, scenes or camera positions**, never fit on a
   differing-pixels mask, never conclude from `max` — use matched percentiles.
3. **Establish the noise floor in the same run** (consecutive frames, `mean|d|` ~0.6 here).
   Two of this session's conclusions were smaller than it.
4. **Measure that a term matters before implementing it.** The struck phase 1 and the
   non-existent `MODULATE2X` were both settled by looking, one after the work and one before.

## Why this is tractable

Three facts, all verified in the current sources, make this incremental rather than a
rewrite:

1. **The context already allows shaders.** `gl_present.cpp:150` requests
   `SDL_GL_CONTEXT_PROFILE_COMPATIBILITY` with **no version pin**, so the driver returns its
   highest compatibility context (4.x on any modern Mesa/NVIDIA). GLSL with integer ops is
   available today, side by side with the existing fixed-function code.
2. **Geometry is already submitted through client arrays**, not immediate mode:
   ```c
   gl.VertexPointer(4, GL_FLOAT, sizeof(GLVertex), &base->x);
   gl.ColorPointer(4, GL_UNSIGNED_BYTE, sizeof(GLVertex), base->diffuse);
   gl.TexCoordPointer(2, GL_FLOAT, sizeof(GLVertex), &base->u);
   gl.DrawElements(GL_TRIANGLES, index_count, GL_UNSIGNED_SHORT, indices);
   ```
   In a compatibility profile a shader reads these as `gl_Vertex`, `gl_Color`,
   `gl_MultiTexCoord0`, `gl_SecondaryColor`. **A shader drops in over the existing draw calls
   with no change to vertex submission and no change to the engine.**
3. **Bit-exactness is not required** (stated goal). That removes the hardest constraint — see
   `research/12`'s `verify_blend.py`, which reproduces the MMX lightmap blend to within ±2
   per channel but not exactly.

## What it fixes, and what it does not

**This table was wrong when written, and the corrected version is the main result of the
first working session.** It assumed hardware geometry "misses" the per-pixel lightmap and that
applying it in a shader would fix the chapel window. Measurement says otherwise — see the
struck phase 1 below.

| defect | fixed by shaders? |
|---|---|
| chapel window ~2x over-bright under acceleration (`research/12`) | **NO** — it is a double-draw of `CGlass`, a game-side fix |
| Svetlana blade over-brightness | **NO** — same mistaken premise |
| Svetlana blade scrambled UVs — 14/78 triangles mixing bone-normal and eye-direction sources (`research/16`) | **no** (unchanged) |
| hardware geometry missing the per-pixel lightmap | **not a defect** — hardware carries its own per-vertex lighting |
| D3D7 per-vertex fog, dropped entirely because GL's secondary colour is 3 components | **yes** — fixed function structurally cannot carry it |

The honest summary: the shader path's value is the migration itself plus capabilities fixed
function cannot express, not the rendering bugs that motivated starting it.

The blade UV defect is computed on the CPU in `renderEnvMapTriangles` before anything reaches
the renderer: 8–12 % of vertex references have no normal because the lighting pass's face
list does not cover the render list. No shader can invent a missing vertex normal. That one
needs a game-side fix regardless.

## The core idea

The per-pixel lightmap is applied by `compositeLightmapToFramebuffer` to the **CPU** image,
*before* `beginScene()`. Hardware draws land after it and therefore never receive it — which
is why the hardware-drawn glass renders at full texture brightness over a correctly darkened
backdrop.

**Apply the lightmap inside the fragment shader used for DLL draws.** Then hardware fragments
get it and CPU-composited pixels do not, because the shader only runs on hardware-drawn
fragments. Each pixel receives the grid exactly once.

That is strictly better than a full-screen post-pass, which would need either a stencil mask
(the scene FBO has `GL_DEPTH_COMPONENT24` and **no stencil** — adding one touches the depth
path the master-Z work depends on) or a gated change to `compositeLightmapToFramebuffer` to
stop it applying the grid. **Neither is needed.**

## The bridge: do NOT extend `CExternalRendererBridge`

`CExternalRendererBridge` is an array of pointers to live game globals and is the **authentic
nocedit↔tridx7 ABI**. Extending it would deviate from the binary and worsen the existing
entry-point mismatch (nocedit wants 60 APIDLL exports, shipped DLLs have ≤37). Leave it
untouched.

Instead add a **separate side-channel**, referenced only under the shader ifdef:

```c
/* shims/gl_lighting_bridge.h — NOT part of the authentic ABI */
typedef struct NocturneLightingBridge {
    unsigned            version;          /* bump on layout change */
    const unsigned char *corona_grid;     /* g_CoronaBlurWorkBuffer      */
    const unsigned char *plane_grid;      /* g_CameraPlaneWorkBuffer.pixels */
    int                 grid_pitch;       /* 320 */
    int                 grid_height;      /* 240 */
    const unsigned short *lightmap_table; /* g_LightmapData, 2048 entries */
    const unsigned int  *palette;         /* g_LightmapTexturePalette, 256 */
    unsigned            solid_color;      /* g_SolidColorMode */
    unsigned long long  bias_even;        /* g_LightmapBlendBias1 */
    unsigned long long  bias_odd;         /* g_LightmapBlendBias2 */
    int fb_width, fb_height;
    int scale_factor;                     /* 1 or 2 */
    int downscale_shift;                  /* g_CameraDownscaleIterations */
    int shake_x, shake_y;
    unsigned            frame_serial;     /* bump when the grids change */
} NocturneLightingBridge;

const NocturneLightingBridge *nocturne_gl_lighting_bridge(void);
```

Filled by a nocedit-side shim from the existing globals; both live in one binary, so this is
plumbing, not a new interface. The authentic bridge keeps its exact layout.

**Timing trap to design around:** the grids are only valid *after*
`blurCoronaBufferAndClearEdges`, which is the composite's first action. Reading them earlier
gets the previous frame's data — this already cost an iteration in `research/12`, where it
produced a convincing 33 % match that was pure coincidence. Upload at `APIDLLbeginScene`,
which is after the composite and before any hardware draw.

Payload is ~150 KB/frame (two 320×240 grids) plus small static tables — negligible.

## Ship it as a selectable renderer, not a compile flag

The infrastructure for this already exists and was designed for it. `shims/builtin_dll.h`:

> Adding another renderer later is a table edit, not a code change […] Everything that asks
> "which renderers can this build actually use?" — the Graphics Options 3D-API selector
> included — goes through the queries below, so no call site names a specific DLL.

And `configureGraphicsOptions` already has the non-authentic branch that uses it:

```c
#if !NOCTURNE_AUTHENTIC_RENDERER_DLL
        // shims/builtin_dll.cpp — nothing is named here.
        pcVar14 = (char *)nocturne_builtin_dll_next(g_RendererDllPath);
```

The screen also performs a genuine **runtime renderer swap** — it rewrites
`g_RendererDllPath`, calls `loadExternalRenderer`, and rebuilds the card list via
`buildCardList`. That path is already exercised (the authentic arm swaps between
`tri3dfx.dll` and `tridx6.dll`).

So the shader renderer should be registered as a **second built-in module**, e.g.
`"trigl.dll"`:

1. Export table mostly points at the *same* tridx7 entry points.
2. `APIDLLinit` points at a thin wrapper that enables the shader path, then delegates.
3. One `NOCTURNE_BUILTIN_MODULE` row in `g_BuiltinModules`.

Consequences, all good:

- It appears in the in-game Graphics Options 3D-API selector **with no menu code change**.
- Switching is a **runtime** choice: no rebuild, no ini edit, no restart. Both renderers can
  be compared in one session against the same scene — which is how every measurement in
  `research/12` was made.
- It supersedes the `nocturne_set_shader_path(0|1)` runtime toggle proposed below; renderer
  selection *is* the toggle. Keep a compile gate only to exclude the shader code entirely.
- Selecting it goes through `loadExternalRenderer`, the engine's own path, so init ordering
  is whatever the engine already does — no special-casing.

Note the standing warning that applies here: never switch renderers by writing
`g_UseDirect3D` / `g_UseExternalRenderer` from gdb. That skips renderer init and crashes
within seconds. Use the options screen.

## Phases

Each phase is independently testable and reuses the previous phase's plumbing.

### Phase 0 — plumbing, no behaviour change
- `shims/gl_shader.{h,cpp}`: compile/link/uniform-cache helper, errors to `DLOG("render", …)`.
- A **pass-through** fragment shader that reproduces current fixed-function output for DLL
  draws (modulate + secondary colour + fog + alpha test).
- Register the shader path as a second built-in renderer (see above) so it is selectable in
  the Graphics Options 3D-API list. Keep a compile gate `NOCTURNE_GL_SHADERS` (default 0)
  only to exclude the code; the *switch* is renderer selection, not a flag.
- **Exit criterion:** with the shader on, frames match the fixed-function path. This phase is
  pure risk reduction; if the pass-through matches, everything after is incremental.

### Phase 1 — lightmap in the DLL fragment shader  *(fixes the window + blade brightness)*

**BUILT, NOT YET MEASURED.**

- **Exit criterion, a hard oracle:** the chapel-window region must move from
  `mean 20.53 / max 56` to approximately `19.50 / 28`, matching both our software path and
  retail. Measurement procedure and reference numbers are in `research/12`.

#### What shipped

| Piece | File |
| --- | --- |
| Side-channel struct + snapshot of the grids | `nocedit.exe/.../shims/lighting_bridge.{h,cpp}` |
| The one call that publishes a frame | `CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270.keep.cpp` |
| Toggle | `NOCTURNE_AUTHENTIC_SHADER_LIGHTING` (default 0) |
| Upload + fragment shader | `tridx7.dll/.../shims/gl_shader.cpp` |
| Per-draw opt-in | `gl_ddraw.cpp` passes `dev->in_scene` to `begin_draw` |

`CExternalRendererBridge` is untouched, as planned.

#### The blend, in closed form

The four MMX variants all compute, per channel:

```
lm    = plane[i] + (corona[i+1] >> 1)                     index into g_LightmapData
out_c = ((pix_c * pal_c) * (lm_word_c ^ 0x3FC0) >> 16
         + (solid_c << 6) * lm_word_c >> 16) >> 4         saturated to 255
```

Dumping the two tables from a live frame settles what those words are:

- **every** word of `g_LightmapData` is exactly `v << 6` with `v` in `0..255` (`(w & 63) == 0`
  for all 2048 words; `w >> 6` maxes at 255, entries ≥ 256 clamp at 255). So `w ^ 0x3FC0`
  is `(255 - v) << 6` — a plain one-minus, and the XOR disappears.
- `g_LightmapTexturePalette` is a per-channel gain where **64 is unity** (`pal = 64` and
  `v = 0` reproduces the source pixel to within an LSB).

Substituting and dividing through:

```
out_c = (pix_c * (pal_c / 64) * (1 - v/255) + solid_c * (v/255)) * 16320/16384
```

which is one `mix` per channel. That is what the fragment shader does, in floats, with
`16320/16384` folded into `u_solid.a`.

In the scene captured, both tables happen to be identity ramps
(`palette[i] == i` in all four lanes, `lmdata[i] == min(i,255) << 6`). They are still uploaded
as textures rather than assumed — the fog colour lookup reads the palette, so a scene that
repaints it would otherwise fog with the wrong hue.

#### Two deliberate deviations

1. **Bilinear grid sampling** replaces the fixed 2×1 / 2×2 tap patterns of the four blend
   variants. Smoother, and it makes the horizontal palette bilerp fall out of sampling the
   palette at an interpolated index.
2. **The signed-16 wrap is not reproduced.** `pix * pal` is taken as a *signed* word by
   `PMULHW`, so a pixel bright enough to push the product past 32767 — roughly twice the
   saturation point — wraps and comes out black. That is an overbright artifact, not a
   feature, and the float path just saturates instead.

Everything else is faithful, including which pixels get it: only draws between
`BeginScene`/`EndScene` are lightmapped, so anything the engine draws outside a scene is
left exactly as it is today.

#### Timing, and the trap that already cost an iteration

The grids are only valid **after** `blurCoronaBufferAndClearEdges`, which is the composite's
first action, and `g_SolidColorMode` only after the branch that follows it. Reading either at
`beginScene` would have been the natural place and would have been wrong by one frame — the
same trap that produced a convincing 33% match in `research/12`. So the publish call sits
*inside* the composite, after both, and the renderer just reads the latest snapshot. A serial
counter on the struct means the four textures upload once per frame however many draws follow.

### Phase 2 — retire fixed-function state in the draw path — **DONE**

Two of the three items turned out not to exist, which is the point of measuring first.

**Texture stage ops — nothing to do.** `applyRenderState` (0x10003f10) sets `D3DTSS_COLOROP` to
exactly two values, ever:

```c
SetTextureStageState(0, 1, 1);   // D3DTOP_DISABLE
SetTextureStageState(0, 1, 4);   // D3DTOP_MODULATE
```

No `MODULATE2X` (5). So `gl_ddraw`'s hardcoded `GL_MODULATE` is correct and the suspected
2x hole does not exist. The rest of what it sets (`0x10`/`0x11`/`0x12`) is min/mag/mip
filtering — real texture state, not a shader concern.

**Alpha test** was already `discard` from phase 0; the remaining `glAlphaFunc` call is
suspended around shaded draws, so this is cosmetic duplication, not a defect.

**Per-vertex fog — implemented, default OFF pending a measurement that can see it.**
`buildTLVertex` (0x100044b0) computes

```c
iVar3 = 0xff;
if (render_flags & 8) iVar3 = 0xff - (src->a >> 8);   // bit 3 = SOLIDALPHA
out->specular = iVar3 << 0x18;                        // ALPHA byte, RGB left zero
```

and D3D7 with `FOGENABLE=TRUE` + `FOGTABLEMODE=NONE` reads that byte as the fog factor
(`C = f*C + (1-f)*FOGCOLOR`). GL's secondary colour is three components, so the byte never
reached the driver — the term was dropped whole, and fixed function cannot carry it at all.
It is not small: over 4.75M vertices on the combo carrying 97% of polygons,
`specA mean 125.8, != 255 on 94.4%`.

Delivered as `gl_FogCoord` via an optional `glFogCoordPointer`, applied in the fragment stage.
Measured against software on one scene:

```
                     mean     vs software
  software          14.182         —
  accel, fog OFF    14.182       1.0000
  accel, fog ON     14.321       1.0098
```

Inconclusive: consecutive-frame animation noise is `mean|d| 0.732` and the A/B difference is
`0.702`, so the captures (12 frames apart) cannot separate the term from drift. On the 15.1% of
pixels it touches, software sits *between* the two and marginally nearer "on" (0.398 vs 0.490).
Left off, because matching software is the determinism goal and off matches it exactly
whole-frame. Revisit in a genuinely foggy scene with captures 2 frames apart —
`NOCTURNE_GL_VERTEX_FOG` / `nocturne_gl_vertex_fog`.

### Phase 3 — leave fixed-function vertex submission — **DONE**

This is the one that actually gets off fixed function. Until it, the shader read `gl_Vertex` /
`gl_Color` / `gl_MultiTexCoord0` and used `ftransform()` — the compatibility profile's names for
the very client arrays and matrix stack it was supposed to be replacing.

- `gl_api` gains buffer objects and generic attributes, all optional, so a driver without them
  keeps the old path rather than losing the renderer.
- A second vertex stage built from `attribute vec4 a_pos … uniform mat4 u_projection`, selected
  over the compatibility one whenever available and falling back automatically if it fails.
- A streaming VBO with buffer orphaning, so the upload does not stall on the previous draw.
- The draw path *branches* — modern or client arrays, never both — and teardown follows the
  branch, so a mismatch between them shows up rather than hiding.

**Exit criterion — met.** `vertex_path_ab.gdb` flips the vertex stage live and captures one
scene both ways:

```
                               mean    p50   p70   p90   p95   p99   max
  buffer objects + attribs   14.330   14.0  20.0  24.0  24.0  29.0   182
  compatibility client arrays 14.296  14.0  20.0  24.0  24.0  29.0   182

  every matched percentile 1.0000   mean|d| 0.614 (noise floor 0.56-0.82)
```

Pixel-neutral. This also settles the residual `p99 1.074` against software seen earlier: both
vertex paths give p99 29 identically, so that gap is hardware-vs-software and predates this work.

#### Two silent failures this cost, both worth knowing

Neither produced a GL error or a log line. The only symptom either gave was "the actors are not
rendering" — the CPU background was untouched because it never goes through this path.

1. **Generic attribute 0 aliases `gl_Vertex`** in a compatibility context. With `a_pos` at any
   other location and no client array enabled, the draw renders *nothing*. Fixed with
   `glBindAttribLocation(program, 0, "a_pos")` before linking; the path now refuses itself if
   `a_pos` comes back as anything but 0, because "wrong colours" is a far better diagnostic than
   "empty screen".
2. **`glUniform*` writes to the CURRENTLY BOUND program.** `u_projection` was being set before
   `glUseProgram`, so it stayed zero, every vertex collapsed to the origin and every triangle
   degenerated. `set_projection` now checks `glGetError` on its first calls and names the cause.

### Phase 4 — present path — **DONE**, core profile — **still blocked, on something else**

**The blit is DONE and bit-exact in both modes.** The core profile is not, and the reason
turned out to be something other than the blit — see the ledger at the end of this section.

Blend, depth, cull and scissor stay as GL state throughout — they are pipeline state, not
shader concerns, and moving them would be change for its own sake.

#### What shipped

| Piece | File |
| --- | --- |
| The quad: program, static 4-vertex buffer object, `GL_REPLACE` in two lines of GLSL | `nocedit.exe/.../shims/gl_blit.{h,cpp}` |
| Both call sites, each with the immediate-mode quad kept as an automatic fallback | `gl_present.cpp` — `nocturne_gl_present_framebuffer`, `nocturne_gl_scene_upload` |
| `glDrawArrays`, loaded optionally like the rest of the shader set | `gl_api.{h,cpp}` |
| Live toggle | `nocturne_gl_blit_shader` / `NOCTURNE_GL_BLIT_SHADER`, default on |

`gl_blit` deliberately does **not** call into tridx7's `gl_shader.cpp`, even though both are in
one binary. That program belongs to one renderer and is chosen in Graphics Options; this quad
is renderer-agnostic — software mode, `tridx7`, `trigl`, the 2D DirectDraw blits in `ddraw.cpp`
and movie playback in `mci_video.cpp` all reach the screen through it. So it lives on the
nocedit side beside its callers and depends on nothing but `gl_api`.

The `glOrtho(0, 1, 1, 0, -1, 1)` is gone rather than reimplemented: it mapped the unit square to
`(2x - 1, 1 - 2y)`, and those four clip-space positions are now literals in a static buffer.

#### The oracle, and why frame-to-frame was not good enough

This quad **carries** a finished image; it rasterises nothing. So unlike the vertex refactor
there is no sampling difference the two paths could legitimately disagree about, and "within
the animation noise floor" would be settling for less than the question allows. The answer
should be *bit-identical*.

Frame-to-frame cannot show that, because nothing in this game holds still — the main menu's
moon and cloud layer animates continuously, and consecutive frames on ONE path measured
`mean|d| 0.16`, `99.29%` of bytes equal. `blit_path_ab.gdb` also found the presented image
changes only every other swap, so an alternating schedule confounds the path with the phase.

`blit_same_frame_ab.gdb` removes the game from the comparison entirely. At `SDL_GL_SwapWindow`
the frame has been blitted and is sitting un-swapped in `GL_BACK` with its source texture still
bound: read it, **clear**, redraw the same texture through the other path, read again.

```
  software, main menu     same_fixed vs same_shader   mean|d| 0.0000  identical 100.00%  max|d| 0
  accelerated, in mission same_fixed vs same_shader   mean|d| 0.0000  identical 100.00%  max|d| 0
```

The clear is what makes it a proof rather than a coincidence: without it a shader that drew
nothing would leave the fixed-function image standing and pass perfectly. `blit_quad` returning
1 over a black buffer says the pixels are the shader's own.

**One trap the accelerated run needs, and the probe now handles.** `nocturne_dump_frontbuffer`
restores the scene FBO on its way out when one exists — `nocturne_gl_read_front` has to, since
the renderer DLL draws there. So the first capture leaves the SCENE target bound with the
scene's viewport, and a naive redraw lands in it: the next frame gets clobbered and the second
capture reads an unchanged `GL_BACK`, i.e. the fixed-function image compared against itself, a
**false 100%**. The probe records the present viewport with `glGetIntegerv` before the first
dump and rebinds framebuffer 0 with that viewport before the redraw. In software mode there is
no scene FBO and all of it is a no-op.

#### `nocturne_gl_scene_upload`, the mid-frame one

The riskier of the two call sites — it runs between the engine's CPU write and the DLL's own
draws, where `glPushAttrib` covers neither the bound program nor the array-buffer binding, which
is why `gl_blit` saves and restores both itself. Counted live in a mission: 84 frames, 167
`scene_upload` calls, 251 `blit_quad` calls — two seeds plus one present per frame, all taking
the shader path.

It cannot use the same-frame oracle (its output goes into the scene target and the DLL then
draws over it), so it was measured whole-frame with `blit_path_ab.gdb`, which is sound here
precisely because the present blit is already proven to contribute exactly zero:

```
  0 vs 1   shader   shader    mean|d| 0.2659
  1 vs 2   shader   shader    mean|d| 0.2468
  2 vs 3   shader   FIXED     mean|d| 0.2606     <- the cross-path pair
  3 vs 4   FIXED    FIXED     mean|d| 0.2729
  4 vs 5   FIXED    FIXED     mean|d| 0.2715
```

The cross-path pair sits inside the spread of the four same-path pairs (0.247-0.273) and below
their mean. A mission scene never holds still — 90% of bytes equal between consecutive frames
on ONE path — so a bit-exact test is not available there; what this shows is that the path is
not distinguishable from the frame-to-frame motion, on the one call site where a bit-exact test
cannot be built.

#### The ledger — what actually blocks the core profile

Not the blit any more. Everything left in `gl_present.cpp` is either inside the fallback branch
or is `glDisable(GL_ALPHA_TEST / GL_FOG / GL_LIGHTING)`, three enums a core profile rejects and
which the shader path does not need.

The real blocker is bigger and was mis-stated before: **the context is created once at startup,
before a renderer is chosen.** `tridx7.dll` is the fixed-function renderer and needs the
compatibility profile for its own draws, so the profile cannot be narrowed for `trigl` without
either taking `tridx7` away or recreating the context on a renderer switch. That is a separate
decision, not a leftover of this phase.

## Risks

- **Regressing what already works.** The shader must reproduce current behaviour for fog,
  blend modes and the alpha-test colorkey. Mitigated by Phase 0's pass-through exit criterion
  and the runtime A/B toggle.
- **The `FOGTABLEMODE=NONE` subtlety.** D3D7 NONE means per-vertex fog from specular alpha,
  which GL table fog cannot express; the current fix disables GL fog for it. The shader must
  keep that behaviour, and can eventually do it *properly* since a shader can apply per-vertex
  fog.
- **Depth path.** Do not add a stencil attachment; the master-Z restore is verified working
  and is not worth disturbing. The design above avoids needing one.
- **Driver variation** in compatibility-profile GLSL. Pin a low `#version` (120/130) and keep
  the pass-through simple.

## The native renderer A/B

The gate on retiring the DX7 path: capture one scene through `tridx7gl.dll` and through
`trigl.dll` and compare. The target was agreement within the animation noise floor, not
bit-exactness — the 16-bit texture staging is deliberately gone from the native renderer.

### The method — a held frame, not two moments

The 3D API selector lives on the Options screen, so switching renderers means comparing two
moments. This build returns from Options to the **pause menu** rather than to the game
(`NOCTURNE_AUTHENTIC_OPTIONS_RESUMES_GAME 0`), which holds the simulation, so the second
renderer redraws the frame the first one drew and the animation leaves the comparison
altogether. Repeat captures with no resume between them come back **bit-identical**: the noise
floor of this comparison is 0, not the ~0.6 of a running scene.

The pause backdrop is the CPU image, not a live render, so each capture asks for a real frame
first — `renderScene(set, 0)`, then `nocturne_dump_frontbuffer` — and prints the renderer's own
draw and polygon counters, so a capture that drew nothing reads as such instead of as agreement.

**Every GL call must run from the `SDL_GL_SwapWindow` breakpoint.** `dbg.sh probe` interrupts
with Ctrl-C, which under acceleration lands inside the GL driver most of the time; calling back
into GL from there re-enters a driver call already in progress and the process dies with a
SIGSEGV in `libnvidia-glcore`. Several captures may succeed first, so it presents as a random
crash. Sourcing a probe may only set variables and arm breakpoints.

**Always take a same-renderer control across the same number of round trips.** The Options round
trip is not free (open items 9 and 10), and in the second scene below it cost *more* than the
renderers differ by.

### Results

Two scenes, both with the simulation held, captures synced to `SDL_GL_SwapWindow`:

```
  room 1 — dim interior, 3798 polygons, 4 flag combos

    tridx7gl vs itself, no round trip          identical 100.00%   max|d|   0
    tridx7gl vs itself, two round trips        identical  99.96%   317 px, all on row 765
    tridx7gl vs trigl,  one round trip         identical 100.00%   max|d|   1

  room 2 — firelit, 1134 polygons, 6 flag combos incl. VTXALPHA and 117 polys of READDEST

    tridx7gl vs itself, no round trip          identical 100.00%   max|d|   0
    tridx7gl vs itself, two round trips        mean|d| 0.6907   identical 93.04%
    tridx7gl vs trigl,  one round trip         mean|d| 0.5480   identical 93.08%
```

In room 1 the renderers differ by **5 pixels out of 786,432, each by 1** — the rest of the
naive cross-renderer figure was 317 round-trip pixels on one scanline, and the two decompose
exactly. In room 2 the same-renderer control is *larger* than the cross-renderer measurement,
so the difference there is below what the measurement resolves; the percentile ladders are
identical (`24 / 39 / 69 / 82 / 110` against `24 / 39 / 69 / 82 / 109`).

Both renderers receive identical geometry — 3798 polygons in room 1, 1134 in room 2 — with the
native renderer batching more aggressively (151 draws against 166 `glDrawElements`; 41 against
50). A polygon count that disagreed (1170 against 1134) turned out to be the scene changing
across the first Options entry, not the renderers disagreeing: after it, both read 1134.

**The exit criterion is met.** Retiring the DX7 path is unblocked.

## OPEN ITEMS — everything left, including things outside this migration

Ordered by how likely they are to be re-chased wrongly.

### 1. Chapel window over-bright under acceleration — `research/12`, OPEN

**CONFIRMED cause: `CGlass` renders twice per frame.** Once CPU-side via `renderBackground`
inside `beginBackgroundScene` (which sets `g_UseExternalRenderer = 0`, so it lands in the
camera framebuffer and IS lightmapped), and again as hardware geometry from
`CGlass::renderOpaque` via `renderOpaqueActors` (`renderScene:112`). Under acceleration the
second bypasses the camera framebuffer and lands at full brightness over the darkened
composite.

Evidence: camera fb max 85 → composite output max 22 → presented max 56; suppressing those
16 hardware quads gives mean 19.32 against software/retail 19.50.

**DON'T RE-CHASE:**
- **Do NOT "fix" this by applying the per-pixel lightmap to hardware geometry.** That was
  tried (phase 1 below), measured wrong, and reverted. Hardware geometry is already correctly
  lit.
- Six mechanism hypotheses already killed by measurement: mipmaps, texture wrap mode, scratch
  clobbering, the occlusion test, accel background ordering, blend-with-destination.

**Next step:** suppress the redundant hardware draw. This is a game-side change in `CGlass` /
`renderOpaqueActors`, not a renderer change.

### 2. Struck: phase 1, the per-pixel lightmap in the fragment shader — CLOSED, DO NOT REOPEN

`NOCTURNE_AUTHENTIC_SHADER_LIGHTING` defaults to **1** (grid NOT applied). Measured, one
static scene, captures synced to `SDL_GL_SwapWindow`, the two accelerated ones from the SAME
frame via the debug toggle:

```
                    mean    p50   p90   p99   max
  software         14.22   14.0  24.0  28.0   181
  accel, grid OFF  14.33   14.0  24.0  29.0   182   ratio 1.0076
  accel, grid ON   12.85   11.0  23.0  24.0   144   ratio 0.9035
```

Accel *without* the grid matches software at every percentile. Not a vacuous scene either —
its corona grid averages 16 against 64-is-unity, so the composite darkens the software image
to 0.41x and the two still agree. Independently confirms `research/13`'s character-crop result
(16.083 vs 16.471, ratio 1.024).

**The per-pixel light/fog grid is the SOFTWARE rasterizer's lighting mechanism.** Geometry
drawn through the renderer DLL carries its own per-vertex lighting and already arrives at
final brightness. The instinct that hardware "misses" the lightmap is wrong and cost a full
implementation cycle.

`shims/lighting_bridge.{h,cpp}` and the `0` path are retained for A/B work only.

### 3. Per-vertex fog default — OPEN, needs a better measurement

Implemented and correct per the D3D7 spec; default off. The A/B could not separate it from
animation drift (effect `mean|d| 0.702`, noise floor `0.732`, captures 12 frames apart).
To settle it: a genuinely foggy scene, captures **2 frames apart**, and compare on the pixels
the term touches. Worth roughly 1% whole-frame — do not spend a day on it.

### 4. `APIDLLsetLightingBridge` transport — DESIGNED AND AGREED, NOT BUILT

The lighting bridge currently reaches the renderer as a direct symbol call, which only works
because everything is compiled into one binary. The agreed design is a new optional APIDLL
entry point: the engine pushes the struct from inside the composite (the call site becomes the
timing contract), `trigl.dll` exports it, `tridx7.dll` does not.

Feasibility already checked: resolution is 60 straight-line `GetProcAddress` calls in
`initializeExternalRenderer` (0x5b5ec0) and `loadExternalRenderer` (0x5b6750), both of which
have `.keep.cpp`. **26 of the 60 are stored with no null check at all**, so an optional entry
point is a copy of an existing block. Put the resolved pointer in the shim rather than a new
`g_APIDLL_*` global (that file is a Ghidra export, and a new typedef would mean touching
generated headers), and guard the push on `g_LoadedExternalDLLRenderer` so it cannot call into
an unloaded DLL — that avoids needing a new `.keep` for `shutdownExternalRenderer`.

**Deliberately not built yet:** its only consumer is the path defaulted off in item 2, so it
would be plumbing for nothing. Build it when there is a live consumer.

### 5. Svetlana blade env-map — `research/16`, OPEN, and one untested fix

- **The scrambled-UV defect is unfixed.** 14/78 triangles mix UV sources because 8-12% of
  vertex refs have no normal — the lighting pass's face list does not cover the render list.
  Faithful to the asm. Shaders do not fix this.
- **A smooth-normal fix in `CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp` is BUILT
  BUT STILL UNTESTED.** It is committed. Test or revert it before building anything on top.

### 6. Committed

The shader work, the shims reorganisation and the native renderer are all committed. Note
`SYSTEM/nocturne.ini` rewrites `useDirect3D` on exit and stores the renderer chosen in Graphics
Options, so a run starts wherever the last one left off.

### 7. trigl's scene render is coupled to the CPU mirror — OPEN

With the simulation held, two `renderScene` calls with nothing between them are bit-identical,
but a single pause-menu frame in between changes the next render: 2963-7224 pixels, deltas to
204, concentrated on the bright blended region. `tridx7gl` in the same scene shows no such
coupling — repeats are bit-identical across the same gap.

The mechanism is the menu frame's `lock_frame` readback refreshing the CPU image from the last
GL render (gated on `target_ahead`), so the next scene render composites over a different
backdrop and blended draws compound the difference. In normal play every frame redraws the scene
completely, so this may never be visible; it is unexplained rather than shown to be harmless.

### 8. The first Options entry of a run permanently drops geometry — OPEN

Measured in both A/B scenes: 289 draws / 4306 polygons before, 261 / 3798 after; 331 / 1170
before, 295 / 1134 after. Stable across every later round trip, and identical for both
renderers, so it is the engine's own state and not a renderer fault. ~12% and ~3% of the
submitted polygons respectively, gone for the rest of the run.

### 9. Row 765 changes on every Options round trip — OPEN

The bottom scanline of a 768-line frame, x 605..1023, 317 pixels, deltas to 18, with the same
renderer on both sides of the round trip. Small, reproducible, and unexplained.

## Validation assets that already exist

- `research/12/verify_blend.py` — the blend reimplemented and checked against a captured
  frame (±2/channel), with the `.asm` ground truth (`PMULHW`, `PSRLW`, `PACKUSWB`) recorded.
- `research/12/blend_oracle_dump.gdb` — captures a real input→output pair, caller-side.
- Reference numbers for the window region: retail `19.50/29`, our software `19.50/28`, our
  accelerated `20.53/56`.
