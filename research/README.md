# Nocturne Decompilation Research

This directory contains technical research documentation for the Nocturne reverse engineering project.

## Project Context

| Component | Details |
|-----------|---------|
| **Target Binary** | nocedit.exe (Nocturne level editor, 1999) |
| **Compiler** | Watcom C/C++ 11 |
| **Architecture** | x86 32-bit, little-endian |
| **Ghidra Version** | 12.1 (built from source with custom patches) |
| **Total Functions** | ~7,154 |

## Research Areas

### [01-file_structure/](01-file_structure/)

Initial analysis of the binary's class hierarchy and file organization.

| File | Description |
|------|-------------|
| `actor_hierarchy.txt` / `.json` | Game object inheritance tree, readable and machine-readable |
| `classes.txt` | Class name enumeration |
| `files.txt` | Source file mapping |
| `structures.txt` | Key data structure definitions |

**Status:** Reference material

---

### [02-mrgl_initial_investigation/](02-mrgl_initial_investigation/)

Investigation into Nocturne's MRGL (Model/Rendering Graphics Library) 3D rendering system.

| File | Description |
|------|-------------|
| `3d-rendering-system-analysis.md` | Overview of rendering architecture |
| `MRGL-file-format.md` | MRGL file format specification |
| `MRGL_DISPATCH_TABLE_ANALYSIS.md` | Vtable and dispatch analysis |
| `NEW_RENDER_FUNCTIONS_ANALYSIS.md` | Analysis of additional render functions found after the initial sweep |
| `FUNCTION_RENAMING_GUIDE.md` | Naming conventions for render functions |
| `VERTEX_PREPROCESS_MODE_VERIFIED.md` | Ground-truth dispatch for `g_VertexPreprocessMode` (renamed from `g_RenderStateFlag2`; supersedes the inferred equate names) |
| `RENDER_STATE_FLAGS_VERIFIED.md` | Bit-by-bit semantics for `g_RenderStateFlags`; 3 bits need renames, all combo `#define`s should be deleted |
| `*.h` | Render-flag equate headers (`NOCTURNE_RENDER_FLAGS_EQUATES.h`, `nocturne-render-flags-ghidra.h`) |
| `*.py` / `*.json` / `*.txt` | Analysis scripts and their extracted render-function reports |

**Status:** Complete - Rendering system documented

---

### [03-rendering_primitives/](03-rendering_primitives/)

Deep dive into rendering primitive structures and data formats. Contains 48 documents
tracking the progressive understanding of MRGL primitives, keyframe formats, and
renderer internals.

| Key Documents | Description |
|---------------|-------------|
| `00_RESEARCH_PROGRESSION_INDEX.md` | Index of all research documents |
| `19_ALL_PRIMITIVE_FORMATS_FINAL.md` | Complete primitive format reference |
| `38_MODEL_FILE_FORMATS_COMPLETE.md` | Model file format specification |
| `48_GLOBE_RENDERING_FINALIZED.md` | Globe/sphere rendering analysis |

**Status:** Complete - All primitive formats documented

---

### [04-mp3_audio_system/](04-mp3_audio_system/)

Complete analysis of MP3 decoding and DirectSound integration.

| File | Description |
|------|-------------|
| `README.md` | Overview and key findings |
| `mp3_audio_system_analysis.md` | Full technical analysis |
| `QUICK_REFERENCE.md` | Developer quick reference |
| `sound_structures_analysis.md` | Audio structure definitions |
| `decode_mp3_offline.gdb` | Decodes a file through the game's own decoder with no audio device, for bit-comparison against a reference decoder |

**Key Findings:**
- MP3 decoder outputs 16-bit PCM (standard WAV format)
- Two playback modes: full decode and streaming
- Replaceable with modern libraries (dr_mp3, minimp3)

**The decoder was distorting every MP3, and it was our transcription.** Not MPEG-1 specific and
not a DSP difference — the reconstruction of `mpegLayer3StereoProcess`'s mono path wrote through
an advanced cursor where Watcom stores through it displaced back by one element
(`ADD EDX,0x4` / `FSTP [EDX + -0x4]` at `0x0053347a`). Every coefficient landed one slot late
and the first was never written. Now bit-accurate against a reference decode.

**Status:** Complete — analysis, plus one reconstruction defect found and fixed

---

### [05-badspacebase_investigation/](05-badspacebase_investigation/)

Investigation into Ghidra's BADSPACEBASE decompilation errors affecting 22.7% of functions.
Led to custom Ghidra patches and the per-function decompiler helper system.

| Key Documents | Description |
|---------------|-------------|
| `README.md` | Complete investigation index |
| `01_PROBLEM_DESCRIPTION.md` | What BADSPACEBASE looks like |
| `02_ROOT_CAUSE.md` | Why Ghidra fails with Watcom ESP-relative code |
| `17_GHIDRA_STACK_ANALYSIS_DEEP_DIVE.md` | Complete pipeline analysis |
| `18_RESOLVESPACEBASERELATIVE_PATCH.md` | **IMPLEMENTED** - EBP-frame tracing fix |
| `24_STACK_PROBE_CALLFIXUP_FIX.md` | Stack probe callfixup solution |
| `26_VARIADIC_ARGUMENT_LOSS_FIX.md` | Proto override for variadic calls |

**Key Outcomes:**
- Custom `x86watcom.cspec` calling convention
- `resolveSpacebaseRelative()` C++ patch for EBP-frame tracing
- P-code override system via `DecompileCallback.java`
- Call fixup system for `_chkstk`/`__alloca_probe`
- Proto override system for variadic functions

**Status:** Ongoing - Core fixes implemented, per-function helpers available

---

### [06-per_function_decompiler_helpers/](06-per_function_decompiler_helpers/)

Research into extending Ghidra's decompiler with per-function controls without
modifying the program database. Builds on solutions from the BADSPACEBASE investigation.

| File | Description |
|------|-------------|
| `README.md` | Overview and navigation |
| `01_OVERVIEW_AND_OPPORTUNITIES.md` | Complete list of opportunities by difficulty tier |
| `02_GHIDRA_SOURCE_REFERENCE.md` | Source code paths and line numbers |
| `03_QUICK_IMPLEMENTATION_GUIDE.md` | Copy-paste implementation code |
| `04_PCODE_OVERRIDE_VALIDITY.md` | P-code override stability/validity across Ghidra versions |

**Already Implemented:**
1. **Call Fixups** - Replace function calls with custom P-code
2. **Decompiler Fixes** - Per-function experimental fix flags (MULTIEQUAL tracing)
3. **Proto Overrides** - Per-call-site function signatures
4. **P-code Overrides** - Per-instruction P-code replacement

**Identified Opportunities:**
- Tier 1 (Trivial): inline, noreturn, varargs, calling convention overrides
- Tier 2 (Easy): extrapop, flow overrides, indirect call resolution
- Tier 3 (Moderate): comment injection, symbol name overrides
- Tier 4 (Speculative): New DFIX flags for pointer inference, loop recovery

**Status:** Active research - Core system implemented, expansion opportunities documented

---

### [07-mmx_functions/](07-mmx_functions/)

Inventory and byte-for-byte decoding of the 34 MMX/SIMD functions in `nocedit.exe`.
Ghidra cannot produce compilable pseudocode for these (nested `CONCAT`/`SUB`/`uint7`
artifacts), so the pipeline replaces them with `__asm { }` blocks and tracks portable
`.keep.cpp` rewrites here.

| File | Description |
|------|-------------|
| `MMX_FUNCTIONS_ANALYSIS.md` | Full inventory of all 34 MMX functions, categories, and rewrite feasibility |
| `MMX_BLEND_FAMILY_DECODED.md` | Unified blend formula covering ~10 pixel-blend variants + blur/corona routines |
| `RENDER_PERSPECTIVE_SCANLINE16_DECODED.md` | `renderMMXPerspectiveScanline16/32` decoded into portable C |
| `RECOMMENDED_MMX_RENAMES.md` | Consistent naming proposal for the 12 blend-family functions + outliers |

**Status:** Active - Inventory complete; portable rewrites in progress

---

### [08-developer_mode_and_cheats/](08-developer_mode_and_cheats/)

Game debugging and options: the `VELOCITY` and `SPOOKHOUSE` env-var gates (Velocity
Engine vs. Nocturne project codenames), runtime debug flags on `CGame` (console,
camera, geometry, collision, profile, single-step), all 44 encrypted typed-cheat-codes
(god mode, weapons, ammo, weather, dismemberment, etc.) plus the event-triggered
`headOfHorror` cheat, and the full ini schema across `nocturne.ini`, `pod.ini`, and
`skeledit.ini`.

| File | Description |
|------|-------------|
| `README.md` | Folder overview + project codenames + "enable everything" recipe |
| `environment_variables.md` | All seven `getenv()` callees, dev gates split from CRT/Windows infrastructure |
| `runtime_debug_flags.md` | `CGame` debug flags + hotkey table + `g_ModalDialogActive` (input-suppression gate during pick-list pop-up dialogs) |
| `cheats.md` | All 45 cheats by category (cleartext recovered via `decrypt_cheats.py`) |
| `developer_tools_menu.md` | The `Ctrl+D` main-menu shortcut into the editor menu (mission play, shape/set/skeletal/mission editors, POD file manager, etc.) — gated by a one-shot license agreement |
| `retail_vs_editor_mysteries.md` | Retail-vs-editor build differences, with definitive vs partial labels: D3D disabled in options, cutscene voices (**SOLVED** — they play; a one-line streaming defect silenced MP3s, gated as `NOCTURNE_AUTHENTIC_STREAM_LENGTH`), flat `.msn` picker vs curated chapter list, 640×480 cap + non-persisting graphics options, and the 23 `APIDLL*` entry points no shipped DLL has |
| `script_event_flags.md` | The second debug surface: developer warps and event flags in the mission data rather than the binary, and the one easter egg. Includes the `[Graphics] nudityFlag` / `quimbyFlag` content switch |
| `cut_content.md` | Features whose code exists in the binary but were never UI-exposed in *any* shipped Nocturne build (cut, not editor-gated). |
| `ini_settings.md` | Full `nocturne.ini` (5 sections), plus `RENDER.INI`, `pod.ini`, and `skeledit.ini` formats |

**Status:** Reference - All 45 cheat cleartext strings recovered via
`scripts/Python/decrypt_cheats.py`; in-game effect of `debug_toggle_flag` not yet mapped.

---

### [09-flashlight_lighting_investigation/](09-flashlight_lighting_investigation/)

The flashlight / set spot-light failing to illuminate world geometry, and the volumetric cone
rendering as discrete circles instead of the original's smooth colorful glow. Ground-truthed
against the original `nocedit.exe` run under Wine. The first is fixed; the second is not.

| File | Description |
|------|-------------|
| `01_INVESTIGATION_STATE.md` | The lighting pipeline map (FUN addresses/files), what was ruled out, the Wine reference shots, and gdb/capstone probe recipes |

**Key outcomes so far:**
- Rasterizer `-O2` per-file build fix (the Debug `-O0` was the framerate stutter)
- §20 missing-cave-copy fix in `calculateSpatialLighting` (uninit reflected pos/normal)
- Ghidra fix: `transformMirrorVertex` signature → `CVector3i*` (FISTP-proven)
- `missing_cave_copy` detector widened 16→12 bytes (now catches `CVector3i`/`CVector3f` caves)

**Root cause of the lighting half** — `CDemonCamera::precomputeNormals` carried the same §20
defect in a form the detector then missed: a `CVector3i` copy truncated to
`local_60.z = local_84.z` where the asm cave block at `0x0060a0a0` copies all three fields. With
`.x`/`.y` left stale every entry in `g_PrecomputedWorldPositions` was garbage, so
`precomputeLight` projected all geometry into a corner of the shadow map and no dynamic light
produced extents. The source does the full copy now, and the detector grew a partial-cave-copy
pass for the truncated shape.

The document is the trail that narrowed it, not a description of the current build.

**Status:** the flashlight lights geometry; the volumetric cone still renders as a stepped
pyramid instead of a smooth halo

---

### [10-tridx7_crt_identification/](10-tridx7_crt_identification/)

Identification, naming, and signatures for the MSVC VC6 C runtime statically linked into
`tridx7.dll` (everything ≥ 0x10005400; the `APIDLL*` driver code is below it). 248 CRT functions
catalogued with snake_case parameters.

| File | Description |
|------|-------------|
| `crt_functions.md` | Human catalog: addr, proposed name, signature, confidence, evidence — per CRT source bucket |
| `crt_functions.tsv` | Machine data the apply tools consume (generated from the md by `extract_crt_catalog.py`) |

**Key outcomes:**
- All 248 named; 200 signatured (return/params/`__cdecl` + snake_case names)
- 8 scalar typedefs added + `_LDOUBLE` as a 10-byte struct (export-safe)
- Tooling: `name_crt_functions.py`, `apply_crt_signatures.py`, `extract_crt_catalog.py`

**Status:** essentially complete (only the naked `_chkstk` left unsignatured)

---

### [11-tridx7_3d_renderer_dll/](11-tridx7_3d_renderer_dll/)

`tridx7.dll` is the retail DirectX7 hardware renderer nocedit.exe loads at runtime; its 37
`APIDLL*` exports are the render API, called through nocedit's typed `g_APIDLL_*` pointers.

| File | Description |
|------|-------------|
| `apidll_signatures_and_bridge.md` | Missing-struct specs for the 7 blocked APIDLL sigs; the 3 exports nocedit couldn't type, derived from DLL asm; and a field-by-field verification of `CExternalRendererBridge` vs the DLL's actual usage |

**Key outcomes:**
- 27/37 APIDLL signatures applied from nocedit funcdefs (`apply_apidll_signatures.py`)
- 3 untyped exports derived from asm (`GetDisplayContext`→`void(HDC*)`, `ReleaseDisplayContext`→`void(HDC)`, `setVideoMode`→`int(void**)`)
- `CExternalRendererBridge` size/layout confirmed (35 dwords / 0x8c); 3 fields proven mislabeled, 11 flagged as DLL-unreferenced guesses

**Status:** 27 applied; 7 pending user-added structs; bridge audited

---

### [12-camera_switch_lighting_flip/](12-camera_switch_lighting_flip/)

Scene lighting changing when the game window gains or loses focus. Two bugs behind one
symptom report, plus a third — a one-frame shadow loss on the way back from the pause
menu — that presents the same way and has a separate, settled cause.

| File | Description |
|------|-------------|
| `README.md` | All three bugs, the eliminated lists, and where Bug 2b stands |
| `altfocus_lighting_probe.gdb` | projection + `CDemonSet` lighting gates per camera apply |
| `altfocus_lighting_dump.gdb` | automatic numbered lighting-state dumps after each apply |
| `altfocus_restore_probe.gdb` | focus transitions against camera applies |
| `altfocus_filter_phase_probe.gdb` | per-light animated-filter phase at each apply |
| `altfocus_dirtyrect_probe.gdb` | spot-light shadow-map dirty-rect accounting |
| `altfocus_pixel_capture.gdb` | periodic frontbuffer capture |
| `altfocus_transient_burst.gdb` | 14 consecutive frames per apply — found Bug 2a |
| `menureturn_restore_ab.gdb` | suppresses half the redraw's lightmap pair — found Bug 3 |
| (+14 more) | Per-stage lightmap, occlusion, extent and focus-burst probes; the menu-return bake counter; the blend oracle (`blend_oracle_dump.gdb`, `composite_inputs_dump.gdb`, `verify_blend.py`); hardware-draw suppression |

**Key outcomes:**
- Bug 1 **fixed** — `setCameraView` made the current camera its own previous-best, so the
  virtual director stole the view on focus regain. Gated by `NOCTURNE_AUTHENTIC_WINDOWS`.
- Bug 2a **fixed** — a focus regain re-applies the same camera and tears down the corona
  queue, costing one frame of light glows (braziers). Dip measured −0.243 → −0.023.
- Bug 2b **open** — the longer-lived dim; six state hypotheses eliminated by measurement.
- The original notes for this chapter were never committed; the README is a reconstruction
  and marks which claims were re-verified.

**Status:** Bugs 1 and 2a fixed; Bug 2b open with a documented don't-re-chase list

---

### [13-accel_per_pixel_lighting/](13-accel_per_pixel_lighting/)

Why 3D-accelerated geometry rendered darker and flatter than the software rasterizer.
**Root cause found and fixed:** the GL shim left `GL_FOG` enabled when D3D set
`FOGTABLEMODE = NONE`, fogging every DLL-drawn primitive toward the fog colour `(5,5,5)`.

| File | Description |
|------|-------------|
| `01_INVESTIGATION_STATE.md` | Full log: the root cause, the verification numbers, the measurement traps that made this take far longer than it should have, and a long list of ruled-out causes |
| `render_probe_*.txt` | Probe dumps (flag combos, per-texture vertex light, GL batch state) for the castle exterior and interior office scenes |

Reference frames are deliberately not committed; the doc carries the capture recipe.

**Root cause** — `gl_ddraw.cpp` `device_SetRenderState` case 35 (`D3DRENDERSTATE_FOGTABLEMODE`)
fell through on value 0 (NONE), leaving fog enabled from `FOGENABLE`. In D3D7 `NONE` means
"no table fog — use per-vertex fog from the specular alpha"; GL has no vertex fog, so an enabled
`GL_FOG` always applies table fog with the current mode (default `GL_EXP`, density 1.0). The
blitted pre-rendered backdrop never goes through that path, which is exactly why only 3D
geometry looked wrong. Fixed by enabling GL fog only when
`FOGENABLE != 0 && FOGTABLEMODE != NONE`.

**That file is gone.** The GL-backed DirectDraw retired with the DX7 path on 2026-09-06;
`trigl` derives `fog_enabled` from a render-state flag in `trigl_state.cpp` and never sees
D3D's two fog registers, so the fall-through cannot recur in this shape. The measurements below
stand — they are what established that the hardware path is designed to match software.

Verified on the interior office scene (character crop means): software `16.08`, accel with the
bug `13.11` (0.815), accel fixed `16.47` (1.024). The residual `+2.4 %` is *expected* — a
single-pixel trace independently predicts hardware is ~2 % brighter than software for identical
inputs (`texel*(cw>>7)/255` vs `texel*cw/32768`).

**Other outcomes:**
- `render_flags` bit `0x004` proven to be **GOURAUD**, not "fog-Z colour"
  (`applyRenderState_FUN_10003f10` maps it to D3DRENDERSTATE_SHADEMODE), and bit `0x008` to be
  **fog** rather than a generic solid blend — both corrected in
  `02-.../RENDER_STATE_FLAGS_VERIFIED.md`
- Retail vs editor ruled out: the whole APIDLL bridge and the `renderPolygon*Op*` table are
  **byte-identical**; the "const-change" diffs there are only `g_CurrentLineNumber`
- `render_probe` in tridx7's shims reported what reached the hardware — flag combos, per-texture
  vertex light, per-batch GL state. It went with the DX7 path; `trigl` carries its own
  instruments (`nocturne_trigl_paint_texture`, `shims/debug/dump.h`), and the `render_probe_*.txt`
  dumps here are the output of the retired one
- The per-vertex fog D3D *did* intend — `buildTLVertex` packs it into the specular alpha — is
  applied by `trigl`'s shader; see `17-shader_renderer_migration/`.

**Measurement lessons** (all three produced wrong conclusions before being caught):
- Never least-squares fit on a *differing-pixels mask* — it makes an 18 % effect look like 2×.
  Use whole-region means, histograms, or matched percentiles.
- Capture must be **frame-synced** (`SDL_GL_SwapWindow`); an arbitrary gdb pause returns a
  different image each call.
- Absolute-brightness thresholds encode brightness, not material — use ratio maps.

**Status:** SOLVED

---

### [14-mirror_actor_reflections/](14-mirror_actor_reflections/)

Why mirrors reflected the room and a character's corona but never the character's opaque
model. **Root cause found and fixed:** the actor visibility gate ran against the wrong
camera *and* through a transform its caller had pushed, so every bounding-box face was
clipped away by the mirror's own clip planes.

| File | Description |
|------|-------------|
| `00_OVERVIEW.md` | Problem, resolution, reading order, and the consolidated don't-re-chase list. **Start here.** |
| `01_HOW_MIRRORS_WORK.md` | Architecture: the two independent reflection mechanisms, the cull chain, the camera-state globals, and the actor transform push |
| `02_RULING_OUT_THE_PIPELINE.md` | The mirror pipeline diffed byte-for-byte and cleared; the `make_sibling_anchors.py` gap that hid the real difference behind ~1900 unpaired functions |
| `03_THE_VISIBILITY_GATE.md` | Where the two builds actually diverge, side by side |
| `04_FAILED_AND_PARTIAL_FIXES.md` | Two fixes that looked correct and were not, and what each one falsified |
| `05_MEASUREMENT_AND_SOLUTION.md` | The instrumented diagnosis, the fix, and its before/after verification |
| `06_CLEARED_LEADS.md` | Everything audited against asm and found faithful, with the evidence, plus the open questions |
| `07_ACCEL_DISPLACEMENT.md` | A separate, **editor-only** defect: a mirror pass sampled at the wrong field of view. FIXED |
| `mirror_cull_probe.gdb` | The gdb probe used for the measurements — source it with `scripts/Bash/dbg.sh probe` |
| (+12 more `.gdb`) | Actor admission and positions, cull box, clip ratio, baked depth, projection factor, camera switch |

**Root cause** — two causes stacked. `CDemonCamera::testVisibility` (`0x4544f0`) installs
`g_BackgroundSavedCameraState` before rasterising an actor's bounding box, which during a
mirror pass discards the mirror camera and tests the reflection against the main scene
camera. But that swap cannot simply be removed: its real purpose is to overwrite
`g_TransformMatrix` with a *clean* camera matrix, discarding the actor transform that
`CDemonActor::setupRenderState` pushed a moment earlier. Fixed by capturing the clean
mirror camera in `setupMirrorRendering` and installing that, behind
`NOCTURNE_AUTHENTIC_MIRROR_CULL` (default 0).

Verified causally, not just visually: the actor's box corner moved from `z = -11.68`
(behind the mirror camera) to `+46.20` (in front), and box tests went from 209 pass / 554
fail to 743 pass / 4 fail across a full 360° turn.

**Other outcomes:**
- Corrected a long-standing architecture claim: character actors *do* reach `CMirror`, via
  the cull gate (`renderSinglePrimitive` branches on `advanced_culling_enabled`)
- `CMirror::reflectAndClipPrimitive`'s `d=0.122` cross-binary drift decoded and shown
  benign — register allocation, one strength reduction, NOP padding
- The 5 mirror clip planes proven correct: `sizeof(CMirrorReflection)=0x94` plus path
  offsets `{0x04,0x14,0x24,0x34,0x44}` = `CMirror::clip_planes[0..4]`

**A second, unrelated mirror defect — also fixed.** `07_ACCEL_DISPLACEMENT.md`: one cause with
two faces, gated by `NOCTURNE_AUTHENTIC_MIRROR_PROJECTION`. `CDemonSet::setCameraView` renders
the room's static geometry twice under acceleration, and the second call inherits a projection
matrix the first call's mirror loop destroyed. Accelerated, geometry at the left and right of
the screen stops lining up with the backdrop while collision stays correct; in software the
reflection is drawn scaled about the screen centre, leaving part of the depth window
`renderMirrorQuadDepth` punched at its near-infinite value, so every later mirror pass draws
there unoccluded — which is how a free-standing background actor comes out twice.
**This one is editor-only**: `nocedit.exe`'s `beginBackgroundScene` pushes a viewport, retail's
swaps buffer rows and returns. Screenshots from `nocturne.exe` are not a reference for how
`nocedit.exe` should look here.

**Caveat:** the cull fix makes reflections work but is **not** demonstrated to match retail —
retail has no camera swap at all, and how it tolerates the pushed actor transform is
still unexplained (open question 1 in `06_CLEARED_LEADS.md`).

**Status:** FIXED, both defects (deviations, not faithful reconstructions)

---

### [15-iris_fade_transition/](15-iris_fade_transition/)

The circle that widens as a room loads jumps part-way through and appears to start over,
centred on the main character as he walks into the shot.

| File | Description |
|------|-------------|
| `README.md` | State machine, cause, measurements, fix |
| `iris_fade_probe.gdb` | every `beginFadeIn`/`beginFadeOut` with a backtrace, plus type transitions |
| `iris_jump_probe.gdb` | every centre change during a fade, with radius and percentage |
| `death_pause_probe.gdb` | which of `runGameSession`'s three death exits is taken, and in what iris state |

**Key outcomes:**
- Not a second trigger — exactly one `beginFadeIn`, state machine `1 → 2 → 0` once, and
  `updateFadeTransition` verified faithful instruction by instruction against `0x4e09c0`.
- `renderIrisFade` re-centres on the focus actor every frame (`CALL` at `0x4e0add`), but
  `calculateIrisFadeCenter` only writes the centre while that actor is on screen — so a
  hero who walks in after the load makes the centre snap mid-growth.
- Measured: centre held at `(320,240)` to 46 % of the fade then jumped ~250 px to
  `(400,477)` while the disc radius was only ~296. After the fix, one centre change at 0 %.
- Fix pins the **opening** iris only; the closing iris still tracks the hero.

**Status:** FIXED (deviation; original-game defect, gated by `NOCTURNE_AUTHENTIC_IRIS_FADE`)

---

### [16-svetlana_blade_envmap/](16-svetlana_blade_envmap/)

Black artefacts on Svetlana's blades, worst around the handles, tracking the lighting.
Present in retail and in **both** software and accelerated rendering.

| File | Description |
|------|-------------|
| `README.md` | The depth fight, the fix that made things worse, the measured dead leads, method traps |
| `blade_mixed_triangle_probe.gdb` | the mixed-UV-source triangle count |
| `blade_zero_slots_probe.gdb` | which blade vertices leave the lighting pass unwritten |
| `blade_normal_writer_probe.gdb` | watchpoint reporting who writes a normal slot |
| `blade_scratch_clobber_probe.gdb` | traces the nonzero normal population across the frame |
| `blade_depth_test.gdb` | the depth comparison removed for the marked draws — the headline measurement |
| (+32 more) | DLL-side emit probes, software-mode probes, earlier bisects |

**Root cause** — **a depth fight, on both paths.** The blade is drawn twice at the same depth:
its own `SVETLANA_2.RAW` texture first, the `BACKGND.RAW` env map blended over it, both spanning
eye z `2000..2365`. Both passes test and write depth with LEQUAL, so the overlay should win
every tie; it loses a dithered subset because the two passes' interpolated depths differ
fractionally. The artefacts are exactly the pixels the overlay failed to win — removing the
depth comparison for the marked draws fills every hole, coverage `6272 → 6831` (+8.9%).

The renderer is faithful here: `applyRenderState` sets ZENABLE/ZWRITEENABLE/ZFUNC LESSEQUAL and
`trigl_state.cpp` reproduces that table, so retail fights too. Fixing it is a deliberate
departure, not a corrected transcription.

**Accelerated is fixed** — the overlay is biased toward the viewer, so it wins its own pixels.
**Software skips the overlay**: its depth comes from the vertices of the surface underneath,
which the overlay shares, so there is no per-pass depth to bias. Both behind
`NOCTURNE_AUTHENTIC_ENVMAP_OVERLAY`.

**Other outcomes:**
- **The mixed-UV-source mechanism is real, was measured correctly, and is not the defect.**
  `renderEnvMapTriangles` picks each vertex's UV source independently and 14 of 78 triangles mix
  the two; the env pass also renders vertices the covering `lightVerticies` call never lit.
  Both hold up. Neither is what put black speckle on the blades.
- **The old fix is deleted.** `NOCTURNE_AUTHENTIC_ENVMAP_UV` halved the sphere-map coordinate
  and clamped the overflow; it hid the speckle by flattening the reflection until the missing
  pixels stopped showing, and it wrote into the shared `g_VertexNormalArray`, changing the
  shading of everything drawn after it (38,574 pixels across the whole figure). With the fight
  fixed it had no caller left.
- The env map is legitimately near-black: `g_EnvMapTexture` is a static `"BACKGND.RAW"` never
  written anywhere, measured 38.1 % pure black and 92.2 % luma<32.
- Four big leads **measured dead**: out-of-range indices, shared-scratch clobbering (so
  splitting `g_VertexNormalArray` would change nothing), a float/int pun, and the earlier
  "software is clean, remainder is accel-only" claim.
- Unrelated shim bug found and fixed on the way: the GL shim dropped
  `D3DRENDERSTATE_TEXTUREADDRESS = CLAMP`, leaving every texture on `GL_REPEAT`.

**Do not re-chase through the CPU side** — the normals, the UV branch, the face list and the
image are all sound by the time the geometry reaches the hardware.

**Status:** SOLVED — accelerated fixed, software skips the overlay, both gated

---

### [17-shader_renderer_migration/](17-shader_renderer_migration/)

Moving the GL shim off fixed function onto shaders, so the graphics can later be improved with
modern techniques.

| File | Description |
|------|-------------|
| `README.md` | State table, the native renderer A/B, open items with a DON'T-RE-CHASE list, the measurement rules |
| `renderer_ab_capture.gdb` | the two renderers captured on a held frame |
| `blit_same_frame_ab.gdb` | both present paths on one frame, before the swap |
| `vertex_path_ab.gdb` / `vertex_fog_ab.gdb` | the vertex-submission and per-vertex-fog A/Bs |
| `software_reference_capture.gdb` / `lightmap_view_capture.gdb` | software reference frames, lightmap views |
| `geometry_drop_capture.gdb` | the mode-change path dropping actors |
| `compare_ppm.py` | percentile/mean comparison for the captures |

**The migration is finished.** Draw path and present blit are both off fixed function and
verified **bit-identical**, in software mode and under acceleration — not merely inside the
noise floor. The context is GL 3.3 core with no fixed-function GL anywhere.

**It ended somewhere it did not start.** `trigl` — `shims/renderer/`, ~3.7k lines — implements
the 37 `APIDLL*` entry points directly against modern GL, passed its A/B against the path the
migration began from, and is now **the only renderer in the build**. The decompiled DX7
renderer, its GL-backed DirectDraw and the shader layer built on them are out of the build;
the tridx7 tree stays on disk as the specification.

**The main result of the first working session was a correction.** The migration was expected to
fix the chapel window (`12-camera_switch_lighting_flip/`) by applying the per-pixel light/fog
grid to hardware geometry. That was built, measured, and reverted: accel *without* the grid
matches software at every percentile (`14.33` vs `14.22`, ratio `1.0076`), while applying it
darkens to `0.41x`. The grid is the **software rasterizer's** lighting mechanism — geometry
drawn through the renderer DLL carries its own per-vertex lighting and already arrives at final
brightness. So the window is a **double-draw** of `CGlass`, needing a game-side fix. The flag
that existed to A/B this is gone along with the bridge it published, since there is no longer a
second path to compare. Do not reopen this.

What the shader path *can* do that fixed function structurally cannot: D3D7's per-vertex fog,
which `buildTLVertex` packs into the specular **alpha** byte and GL's 3-component secondary
colour therefore drops entirely — set on 94.4% of vertices at mean 126/255. On by default: without
it, a stationary actor at the fog limit flashes into view for ~13 frames after every camera apply
(a dormant ghoul in the sentinels mission alley).

**Status:** COMPLETE — what remains are two game-side defects it was expected to fix and does not

---

### [18-resolution_and_aspect_ratio/](18-resolution_and_aspect_ratio/)

What the engine can be pushed to on resolution, where the real ceilings are, and why widescreen
is a content problem rather than a code one.

| File | Description |
|------|-------------|
| `README.md` | The two ceilings, the two coordinate spaces, text inside a box, the resolution list, aspect ratio and how the scene is reframed |
| `camera_geometry_probe.gdb` | what geometry the camera derives for a mode, and which height conditionals fire |
| `present_filter_probe.gdb` | whether the window is the same size as what is rendered into it |
| `fog_plane_probe.gdb` | the fog plane against the camera grid |
| `corona_extent_probe.gdb` | `g_CoronaLeftExtent`, whose two producers disagree about the sentinel |
| `burn_probe.gdb` | why a character can never reach `is_fully_burned` |

**Key outcomes:**
- **The software *rasteriser* has no resolution limit — software *mode* does.** The rasteriser
  writes into `g_ScreenBufferArray[scanline_y]` at the native resolution and
  `CDemonCamera::init`'s clamp sizes the lighting grid, but two renderer-owned pieces sit past
  480 lines: `lockAndRenderToBuffer` takes the renderer's hold buffer (fatal with no renderer
  DLL) and `compositeLightmapToFramebuffer` maps the 640x480 lighting grid to the screen
  row-for-row. The acceleration gate is kept, and is not part of the resolution flag.
- **`g_ResolutionTable[9]` is not the Options list** — its only reader is `initGraphicsSystem`,
  for the 8bpp startup mode. The menu was a hardcoded `game_pixy` chain, which is why 1600x1200
  was unreachable and 400x300 could be labelled and stepped away from but never selected.
- **Two unguarded ceilings, raised to 3840x2160:** in the binary `g_ScreenBufferArray[1200]` and
  friends cap height at 1200 lines, and `g_ReciprocalLookupTable[1600]`, indexed by *pixel span*,
  caps software spans at ~1598. The port sizes both by equates the generator emits at 2160 and
  3842.
- **Above 480 lines two coordinate spaces coexist** (native, and the camera's 640x480 virtual
  space that the renderer stretches). Elements that must line up have to share one. Getting this
  wrong put the inventory description text up to 104 px off its panel, correct at 640x480 and
  1280x1024 purely because those are where the stretch is a whole number.
- **Text inside a box takes its box's stretch, truncated, and is clipped to the box.** Position
  needs the exact fractional stretch; size needs its floor, because glyph bitmaps cannot be
  resampled — two of the five fonts are 1-bit. Rounding to nearest overshoots at 1024x768 and
  1600x1200 and also divides the wrap width, so the block gains lines as it gains height and
  leaves the panel or the letterbox bar. Verified over all 94 item descriptions and all 1082
  subtitle lines at 10 modes.
- **True widescreen is not available from the shipped backdrops** — they are fixed 640x480 8-bit
  images and the pixels for a wider view do not exist. A wider screen gets the scene reframed
  instead: pillarboxed, or panned and scanned after the focus actor, at the frame lock where the
  target holds the scene and none of the 2D. Re-rendering backdrops is a content project with an
  unverified premise.

---

### [19-automap/](19-automap/)

A Doom-style line map that fills in as the player walks: design, measured numbers, and the
extraction rules — including the ones that look right and are not.

| File | Description |
|------|-------------|
| `README.md` | Where the geometry is, wall/floor classification, banding, reveal, cost, tools |

**Key outcomes:**
- **Feasible — a level reads as a floorplan.** Measured on `CASTLE.geo`: curtain walls, towers,
  courtyards and interior rooms are legible from above with no authoring work. Not obvious in
  advance, since the game was composed as fixed camera views over pre-rendered backdrops.
- **The geometry is in `CDemonRaytrace::cube_data`, not `cube_list` or `triangle_list`.** Two
  adjacent cube pointers with misleading names; `cube_list` is the `.GEO` import path and is
  NULL at runtime, so reading it concludes the level has no collision. Triangles are
  `STriangleRef`s holding pointers into each cube's own vertex buffer, duplicated into every
  cube they straddle.
- **Band edges by their own height — not triangles.** Triangle-overlap drags whole storeys in
  through stair shafts and draws phantom rooms; triangle-centre discards the cliff you are
  standing on, because a 91-unit drop centres 45 units below your feet. One storey (~13 units
  here), asymmetric, since the player's position is at his feet.
- **`dominant_axis` classifies walls for free** (floors 31%), and keeping only edges used by one
  wall triangle turns 151,222 segments into 8,503 — a wireframe into a floorplan.
- **Reveal per 3D cell: 5.6 KB for a whole level.** Three dimensions, or a tower walked at the
  top uncovers the hall beneath it. Persisted as a block appended after the save's last section,
  which older builds never reach — parsing is sequential and bounded, the final section is
  fixed-length, and the version gate is a minimum with no upper bound, so no version bump is
  needed. Past a completion threshold the fog lifts entirely; the percentage is measured against
  cubes holding geometry (4,579 of 46,139), since a share of all cubes would never fire.

---

### [20-overlay_accumulation/](20-overlay_accumulation/)

Why blended 2D thickens on frames that draw no geometry: a dirty bit that lied, the readback it
suppressed, and the six wrong explanations that fit the same evidence.

| File | Description |
|------|-------------|
| `README.md` | The cause, why it presents as weight, the measurements, the dead ends |
| `death_banner_probe.gdb` | Banner draws per frame, position, scene renders per frame |
| `frame_order_probe.gdb` | Ordered trace of renderScene, flushes, lock, 2D and uploads |
| `banner_frame_probe.gdb` | Per banner frame: uploads, geometry flushes, `target_ahead` at lock |
| `which_buffer_probe.gdb` | Whether the banner lands in the CPU image or the hold buffer |
| `verify_probe.gdb` | That banner frames read back, and the screen backup still sees the composite |
| `hazard_probe.gdb` | 2D drawn in the window the correction widens, which a readback would erase |

**Key outcomes:**
- **`unlock_hold_buffer` broke the `target_ahead` invariant.** It uploads `g_dev.hold`,
  stretched, into the scene target while leaving `g_dev.image` untouched, so the target does hold
  content the image does not — but it reported otherwise. `lock_frame` reads that flag to decide
  whether to read the target back, so the lock skipped its readback and the image kept the
  previous frame's composite for the engine to draw over.
- **The glyph blend reads its destination**, so drawing the same text over itself is not
  idempotent — solid interiors replace identically while antialiased edges darken. Weight, not
  brightness, is the signature.
- **The trigger is a camera cut that submits no geometry**, since a geometry flush would have
  set the flag anyway. Measured across 248 consecutive banner frames: `geom_flushes=0` and
  `lock_target_ahead=0` on every one; 263 frames read `lock_target_ahead=1` once the invariant
  is restored, with the screen backup behind the first modal still keeping the composite.
- **3D and 2D never interleave within a frame** — all geometry precedes the lock, all 2D
  follows it, so the target holds the scene alone between the hold upload and the first flush.
- **Nothing uses the window the correction widens.** A readback that now happens could only
  erase 2D drawn between `unlockHoldBuffer` and the next `lockFrame`; across menus, pause,
  options and play that window was entered 782 times with 0 draws inside it. Below 481 lines the
  hold path is never taken at all, and on any frame with geometry the flag was already set, so
  both are unchanged by construction.
- **Seven dead ends are recorded with their measurements**, including keeping a separate 3D-only
  snapshot to rebase from, which reconstructs something the pipeline already had, and layer
  separation, which would work but is not needed.

---

### [21-character_motions/](21-character_motions/)

How characters animate: the motion-list half of a `.SKL` skeleton — states, motions,
transitions, signals, markers — what each field does at runtime, and what each character has.
Dump any skeleton with `scripts/Python/dump_skl_motions.py`.

| File | Description |
|------|-------------|
| `README.md` | Index and key facts |
| `format.md` | File layout, transition commands, desired state and keepState, signals, markers, root motion |
| `heroes.md` | The nine playable classes: capability matrix, signal values, per-hero notes, every state with its motions and routes |

**Key outcomes:**
- **An unrouted desired state is silently never taken.** Transitions are looked up only in the
  current motion's list; with no entry the request stays pending while the motion loops.
  Gabriella's pickup, rummage, door, push and ladder route only from STAND, so the shipped
  `use_item` pickup, which also fires while walking, snaps her onto the object and then does
  nothing.
- **Signals are where animation drives the game** — pickups, doors, levers, melee hits and
  footsteps happen in each class's signal handler, not where the motion was chosen. Two signals
  on one frame fire only the last listed; Svetlana's PushOff and IcePick's attack3 each lose one.
- **Only the Stranger and Gabriella have interaction motions.** The other seven have none, and
  Colonel's skeleton emits no signals at all, not even footsteps.
- **Only the Stranger can jump or fall**, through a start/middle/land/end chain whose middle
  signal sets the upward velocity; the fatal-landing state is an alias with no motion, landing
  in DIE. Svetlana's two jumps are asked for by mission scripts only.
- **Layered draw/shoot motions are never played by the controller**; the class poses them by
  marker position. KICK_DOOR is authored for Gabriella and never asked for in the shipped
  game.
- **The Blair Witch games extend both formats.** BW1 and BW3 have motion list v3, which adds
  a stored-frame resolution: a pose is `frameStart + frame/res`. BW1 has skeleton v4, with
  binary float32 angles, opened `"rb"`. `format.md` has both, and the per-game counts.

---

### [22-actor_class_hierarchy/](22-actor_class_hierarchy/)

The `CDemonActor` tree and its virtual-method contract in all five builds: nocedit, retail
nocturne, bw1, blairwitch2 and bw3. Parents come from each build's `registerActorClass`
calls. Slots are aligned to nocedit's tables, and parameters are checked against the target's
call sites. Generated by `scripts/Python/actor_hierarchy_report.py`.

| File | Description |
|------|-------------|
| `README.md` | Method, confirmed findings, dead ends, regeneration |
| `hierarchy.md` | The class tree, with which builds register each class |
| `virtual_methods.md` | Every slot: method, nocedit signature, slot index per build, evidence, parameter verdicts; slots each build added |
| `classes.md` | Per class and build: parent, table length, overrides |
| `hierarchy.json` | Machine-readable tree and table lengths |
| `added_slot_names.json` | Hand-kept names for slots the BW builds added, each with the fact that settles it; the baseline for naming more |

**Key outcomes:**
- **No shared class changes parent in any build**, so every class a BW game adds inherits a
  base whose slot meanings and signatures carry over. No slot method has a parameter conflict
  in any build.
- **The BW games added virtuals to base classes**: `CDemonActor` gained 2 slots in bw1 and
  bw3 and 4 in bw2; `CHero` gained 4 in bw1 and 5 in bw2; `CCharacter` gained 1 in bw2 and
  `CWeapon` 1 in bw3. The positions are confirmed by the `process` dispatch offset in
  `CDemonSet_processActors`: `+0x4` in nocedit and retail, `+0xc` in bw1/bw3, `+0x14` in bw2.
- **nocedit's `onAreaDeleted`/`onActorDeleted` and its five editor slots never existed in
  retail**: they are later editor-build additions.
- **bw2's `chain.cpp` is stale**: `CChain`'s 54-slot table was built against bw1's
  `CDemonActor`, under a 56-slot parent.
- **51 added slots are named from their code**, among them `markResourcesInUse`,
  `toggleGoggles`, `doHeroAction` and bw2's CBasicEnemy state machine. The rest stay `vfuncN`.

---

### [23-game_structs/](23-game_structs/)

Every game struct and class in the five builds: sizes, fields, and each field's offset in each
build. The Blair Witch layouts are nocedit's, copied where matched code shows the same offsets,
and placed by the measured shift where the class was resized. Generated by
`scripts/Python/struct_layout_report.py`.

| File | Description |
|------|-------------|
| `README.md` | How the BW layouts were derived, confirmed findings, regeneration |
| `index.md` | Every game struct's size and state per build, with RTTI confirmation |
| `changes.md` | Per build: the resized structs, fields moved, fields not placed |
| `structs/<Name>.md` | One page per struct: fields with offsets in every build, undefined bytes |
| `structs.json` | Machine-readable |

**Key outcomes:**
- **Every BW layout with an RTTI record is exactly the recorded size**: 173, 166 and 124 classes.
- **A field's offset is placed only where the measured shift settles it.** The rest are left as
  undefined bytes, never guessed. bw2's `CEnemy.victim` lands at `+0x10a78`, the offset bw2's own
  code reads.
- **BW grew the character classes**: CCharacter by 940 / 19,516 / 4,008 bytes in bw1 / bw2 / bw3;
  bw2 also grew CDemonActor by 348.

---

### [24-bw_units/](24-bw_units/)

Every Blair Witch function in a real folder and unit: placeholder and sibling-guessed units
corrected from contiguity, class, factory, assert and link-order evidence.

| File | Description |
|------|-------------|
| `README.md` | The evidence rules, findings, the BW link order, the export gate |

**Key outcomes:**
- **862 functions renamed; no `unk*` folder is left** (239 / 319 / 304 in bw1 / bw2 / bw3).
- **bw2 filed every actor's `staticInit`/`factoryFunc` under the next unit's name.**
- **bw2 and bw3 append their own files unsorted after the sorted link list.** BW also inserted
  `fldnotes.cpp` and `thehand.cpp` out of place.
- **The functions export now fails on a placeholder folder, a non-8.3 name or an unexplained
  link-order break** (`check_tu_alignment.gate`).

---

### [25-pod_archives/](25-pod_archives/)

The archive formats the engine reads in all five builds: EPD, POD1, POD2 and two POD3s, how
they are mounted and searched, nocedit's builder, and every shipped POD checked against them.

| File | Description |
|------|-------------|
| `README.md` | Index, key facts, Ghidra corrections, open questions |
| `formats.md` | Every layout with its read sites; CRC-32/MPEG-2 and its ranges; audit and dependency records |
| `mounting.md` | `pod.ini`, priority and dependency ordering, lookup precedence per build, reading, checksums, errors |
| `editor.md` | nocedit's POD tools: the POD2 builder, response files, audit trail, mount management |
| `measurements.md` | The shipped PODs of all four games, measured |
| `later_versions.md` | POD4 to POD6 from outside sources, unverified |

**Key outcomes:**
- **Every shipped archive is POD2 but Nocturne's `tground.pod` (POD1)**, and each is exactly
  nocedit's builder output: both CRCs valid, names sorted, audit records after the data.
- **nocedit's POD3 and the Blair Witch POD3 are different layouts**; neither ships. Retail reads
  only POD1 and POD2, and bw1/bw3 cannot read POD1.
- **CRC-32/MPEG-2 in every build, never checked on mount.** Priority and dependency ordering run
  only in the editor; elsewhere the mount order is `pod.ini`'s.
- **A POD beats a loose file, except in bw3.** No format compresses, encrypts or hashes.

---

## Standalone Documents

### [ghidra_suspect_patterns.md](ghidra_suspect_patterns.md)

Reference guide for common Ghidra decompiler artifacts and how to fix them:

- BADSPACEBASE - Stack frame resolution failure
- `in_stack_XXXX` - Unresolved stack parameters
- `in_EAX`, `in_ECX` - Inferred register parameters
- `CONCAT44`, `CONCAT22` - Value concatenation artifacts
- `SUB84`, `SUB42` - Value extraction artifacts
- `SBORROW` - Signed borrow detection

---

## Implementation Files

The research in this folder has led to implementation code in:

```
scripts/Python/ghidra_annotations/annotations/pseudocode/
├── callfixups.py         # Call fixup registration
├── decompiler_fixes.py   # Per-function fix flags
├── proto.py              # Prototype overrides
├── transforms.py         # P-code overrides and text transforms
├── suspects.py           # Suspect pattern detection
└── exporter.py           # Main export orchestration

spec/Ghidra/Processors/x86/data/languages/
├── x86watcom.cspec       # Custom Watcom calling conventions
├── x86watcom.ldefs       # Language definition
└── ia.sinc.patch         # SLEIGH customizations
```

---

## Custom Ghidra Build

This project uses Ghidra 12.1 built from source with custom patches:

| Patch | Location | Purpose |
|-------|----------|---------|
| MULTIEQUAL stack trace | `heritage.cc` | Enhanced stack variable tracing |
| Call fixup registry | `DecompileCallback.java` | Per-function call replacement |
| P-code override registry | `DecompileCallback.java` | Per-instruction P-code injection |
| Proto override registry | `HighFunction.java` | Per-call-site signatures |
| Decompiler fix flags | `DecompInterface.java` + C++ | Per-function fix flag system |

Ghidra source location: `~/Repositories/Ghidra/`

---

## Quick Links

| Topic | Document |
|-------|----------|
| Understand BADSPACEBASE | [05-badspacebase_investigation/02_ROOT_CAUSE.md](05-badspacebase_investigation/02_ROOT_CAUSE.md) |
| Fix suspect patterns | [ghidra_suspect_patterns.md](ghidra_suspect_patterns.md) |
| Add per-function helpers | [06-per_function_decompiler_helpers/03_QUICK_IMPLEMENTATION_GUIDE.md](06-per_function_decompiler_helpers/03_QUICK_IMPLEMENTATION_GUIDE.md) |
| Understand render system | [02-mrgl_initial_investigation/3d-rendering-system-analysis.md](02-mrgl_initial_investigation/3d-rendering-system-analysis.md) |
| Primitive formats | [03-rendering_primitives/19_ALL_PRIMITIVE_FORMATS_FINAL.md](03-rendering_primitives/19_ALL_PRIMITIVE_FORMATS_FINAL.md) |
| Audio system | [04-mp3_audio_system/mp3_audio_system_analysis.md](04-mp3_audio_system/mp3_audio_system_analysis.md) |
| tridx7 CRT catalog | [10-tridx7_crt_identification/crt_functions.md](10-tridx7_crt_identification/crt_functions.md) |
| tridx7 render API + bridge | [11-tridx7_3d_renderer_dll/apidll_signatures_and_bridge.md](11-tridx7_3d_renderer_dll/apidll_signatures_and_bridge.md) |
| How mirror reflection works | [14-mirror_actor_reflections/01_HOW_MIRRORS_WORK.md](14-mirror_actor_reflections/01_HOW_MIRRORS_WORK.md) |
| Compare the two binaries | [14-mirror_actor_reflections/02_RULING_OUT_THE_PIPELINE.md](14-mirror_actor_reflections/02_RULING_OUT_THE_PIPELINE.md) |
| Geometry misaligned against the backdrop | [14-mirror_actor_reflections/07_ACCEL_DISPLACEMENT.md](14-mirror_actor_reflections/07_ACCEL_DISPLACEMENT.md) |
| The renderer, and how it was verified | [17-shader_renderer_migration/README.md](17-shader_renderer_migration/README.md) |
| Resolution, HUD scaling, widescreen | [18-resolution_and_aspect_ratio/README.md](18-resolution_and_aspect_ratio/README.md) |
| Developer warps and mission event flags | [08-developer_mode_and_cheats/script_event_flags.md](08-developer_mode_and_cheats/script_event_flags.md) |
| Actor classes and virtual slots in every build | [22-actor_class_hierarchy/virtual_methods.md](22-actor_class_hierarchy/virtual_methods.md) |
| Any game struct's fields in every build | [23-game_structs/index.md](23-game_structs/index.md) |

---

## Changelog

The changelog is in [changelog/](changelog/README.md), one file per month.
