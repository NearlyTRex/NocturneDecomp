# Flashlight / set-light geometry-lighting bug — investigation state

Status: **OPEN** (root cause not nailed). Started 2026-05-27. This doc lets us resume cold.

## Symptom

In the Linux port (`build/exe-linux-asan`, the editor `nocedit.exe`):
- The Stranger/NPC flashlight (and set spot lights) **do not light up world geometry** — walls/floor in the beam stay dark.
- The volumetric light cone renders as **discrete concentric circles of increasing size** instead of a seamless cone.
- (Earlier) framerate stutter — **fixed** (see below).

Ground truth: running the original `nocedit.exe` under Wine renders a **large, smooth, COLORFUL radial glow** (bright blue-white core → magenta → green/yellow rim) and a properly lit scene. So this IS a real bug, NOT faithful behavior.

## Geometry-lighting pipeline (verified by reading + gdb backtrace)

```
CDemonLight is g_DynamicLights[]   (flashlight max_distance≈32; set light 'longlt' max_distance≈185)
  gatherVisibleLights      core/set.cpp FUN_0056d4a0   — PROMOTES enabled/visible dynamic lights
                                                          into g_PrimaryDirectionalLights[]/Secondary
per vertex:
  CDeformableModel_lightVertices  core/skeleton.cpp FUN_0059ab50   (characters)  OR static set path
   → lightVerticies               core/set.cpp FUN_0056eac0   (vertex_normals=NULL → computes them,
                                                                normalizes ×65535, (int)ROUND → CVector3i)
    → lightVertexColor            core/set.cpp FUN_0056ddb0
     → calculateSpatialLighting   core/set.cpp FUN_0056db80   (sums primary+secondary+globe+mirror-dyn)
      → calculateAttenuatedDirectionalLight  core/dcamera.cpp FUN_0044edf0  (computes N·L, returns intensity)
       → sampleLightingAntialiased core/dcamera.cpp FUN_0044e790  (range/atten + shadow_depth_buffer
                                                                   visibility + precomputed gobo texture)
```

Volumetric cone (the visible beam, separate from geometry lighting):
`renderVolumetricLightShaft` core/dlight.cpp FUN_00474ad0 — 25 camera-facing additive billboards,
gated `g_CGamePtr->halo_mode == 2`. Geometrically faithful (verified). Texture g_LightTextures[1]
(texidx 59, 64×64, smooth radial bell-curve texels; palette smooth black→bluish→white). Why ours is
discrete vs original's big colorful smooth glow is a SEPARATE open question (texture/palette/technique).

## Confirmed / done

- **Perf (done, user-confirmed)**: rasterizers compiled at `-O2 -fno-strict-aliasing` (CMakeLists per-file
  `set_source_files_properties` matching `Scanline(16|32)_FUN_` + `SKIP_PRECOMPILE_HEADERS`). The asan build
  is `Debug` = `-O0`; that was the stutter, not the renderer logic. Output bit-identical (`-fwrapv` global).
- **§20 fix (done, compiles, capstone-verified)**: `calculateSpatialLighting` FUN_0056db80 keep — the
  dynamic-lights loop (nested in the mirror-glass-actor loop) read **uninitialized** `local_48`/`local_24`;
  the decompiler dropped two REAL 12-byte cave copies at `0x60ca61`/`0x60ca7e` (`local_3c`→`local_48` reflected
  pos, `local_30`→`local_24` reflected normal). Fixed by passing `local_3c`/`local_30` directly. NOTE: this is
  the **mirror-reflection** dynamic path (only runs when `mirror_glass_actor_count > 0`) — tangential to the
  main symptom. After the Ghidra retype below + re-export, drop the `(CVector3i *)` cast (local_3c becomes CVector3i).
- **Ghidra fix (USER doing)**: `transformMirrorVertex_FUN_005229b0` (core/mirror.cpp) signature is wrong — it
  **FISTPs integers** (asm `FISTP dword` at 0x522a29/34/40), so `input_vertex`, `output_vertex`, and return
  should all be `CVector3i*`, not `CVector3f*` (Ghidra mistyped; matches sibling `transformMirrorEdgeToIntegerSpace`).
  Only caller is `calculateSpatialLighting`.
- **Detector gap (FIXED)**: `missing_cave_copy` in suspects.py `_find_cave_copy_blocks` required
  `consec >= 8` (16-byte / 4-pair minimum) → blind to 12-byte (`CVector3i`/`CVector3f`, 3-pair) cave copies.
  That's why the suspect list never flagged the `calculateSpatialLighting` drop. Lowered to `consec >= 6`
  (12 bytes). Regression-gated over all 9405 functions: **280 → 300** flags (+20 across 9 fns), now catches
  `calculateSpatialLighting` + the known TP `CPlatform_processInEditor`; the `≥2 dead-local + size-match`
  cross-check guards FPs. Regression recipe: `/tmp/cave_regress.py` (stubs the package, loads suspects.py +
  pass_by_value.py standalone, runs `identify_missing_cave_copy` over every `*.cpp`+`.asm`; diff before/after
  with `comm`). The new flags are candidates to review on the next export.

## OPEN — root cause not nailed

Runtime probes of `calculateAttenuatedDirectionalLight` (the N·L step) gave **inconsistent** results:
- One sample: surface normal `N ≈ (1.33e9, 1.20e9, 1.11e9)` — float-bit-like garbage, **constant across a
  whole object** (e.g. `0x41F00000 = 30.0f`), → `intensity ≈ 1.67e9` (should be ≤ ~196608 for a 16.16 dot).
  Garbage intensity → `sampleLightingAntialiased`'s `texel<<10 * intensity` overflows → broken lighting.
- Another sample (backtrace, `CDeformableModel_lightVertices` path): normals **valid** (`-37500`, `7816`,
  `59568`… all ≤ ±65536) and varying per vertex. Lighting input fine here.

→ Not a blanket bug. Hypothesis: a **specific object/light reads stale `g_VertexNormalArray`** (a shared global
buffer) — its normal computation was skipped/failed, so it holds a previous object's data, which happens to be
float-typed elsewhere. Also unconfirmed: whether the **flashlight (max_distance≈32) is even gathered** into the
geometry light list — only `longlt` (185) appeared in geometry-lighting samples.

`sampleLightingAntialiased` and `calculateAttenuatedDirectionalLight` are **correct reconstructions** (no Ghidra
fix needed in them). The garbage enters upstream (the normal, or the gather).

## Next steps to resume

1. **Correlate the garbage normal to a specific object/light**: gate a `calculateAttenuatedDirectionalLight`
   probe on `light_direction->x > 0x10000` (garbage) and `bt` to see which `lightVerticies`/`lightVertices`
   caller + which `light_source` (dump `light_source->base.camera_name`). Identify the degenerate object.
2. **Check the gather**: does `gatherVisibleLights` promote the flashlight (max_distance≈32)? Probe it; dump
   each `g_DynamicLights[i]->base.camera_name` + whether it lands in `g_PrimaryDirectionalLights`.
3. **Stale g_VertexNormalArray**: in `lightVerticies`, confirm normals are recomputed for every object (the
   `vertex_normals == NULL` branch vs the passed-in branch); a missing memset/recompute → stale garbage.
4. Separately: the cone's smooth-glow-vs-discrete question — compare g_LightTextures[1] palette/size + the
   blend against the original's colorful glow.

## gdb probe recipes used (dbg.sh)

- Build/run: `scripts/Bash/dbg.sh build|start|cont|stop|status`; probe: `dbg.sh probe FILE.gdb` (pause→source→resume);
  read: `dbg.sh log-full | grep '[TAG]'`; clear: `printf 'delete\n' >/tmp/clear.gdb; dbg.sh probe /tmp/clear.gdb`.
- Breakpoint symbol form: functions use full prefixed name (`core_dcamera_cpp_..._FUN_xxxx`); **line** breakpoints
  use the file BASENAME (`CDemonLight_..._FUN_xxxx.keep.cpp:NN`), NOT prefixed.
- The flashlight cone only renders in-scene with the light on; battery drains — user added a no-drain cheat to
  keep it lit for probing.
- Capstone ground-truth (verify cave blocks aren't fabricated): `python3 scripts/Python/disassemble_function.py <Func_FUN_xxxx>`.

Memory cross-ref: `project_flashlight_halo_and_o0_perf.md`.
