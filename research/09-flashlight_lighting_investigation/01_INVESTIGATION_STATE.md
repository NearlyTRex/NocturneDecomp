# Flashlight / set-light geometry-lighting bug — investigation state

Status: **OPEN** — two real bugs: (A) the flashlight doesn't light static world geometry — its per-frame contribution doesn't reach the rendered static world (narrowed; fix site not yet found); (B) the cone renders as a stepped pyramid instead of a smooth halo. Started 2026-05-27. Resumable investigation log.

## Symptom

In the Linux port (`build/exe-linux-asan`, the editor `nocedit.exe`):
- The Stranger/NPC flashlight **does not light static world geometry** — walls/floor stay dark. It DOES light characters (see 2026-05-28). Real, open bug.
- The volumetric light cone renders as a **stepped pyramid of discrete, non-overlapping billboards** instead of a smooth halo. Real, open bug — the 25 billboards should blend into a continuous glow. (The loop reconstruction is geometrically faithful, but the on-screen result is wrong vs the smooth original; size-vs-spacing / overlap / blend TBD.)
- (Earlier) framerate stutter — **fixed** (see below).

Ground truth: the original `nocedit.exe` under Wine lights walls, ground, characters, and objects in the beam, and renders a smooth, colorful radial halo (blue-white core → magenta → green/yellow rim). Both port symptoms above are real bugs, NOT faithful behavior.

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
gated `g_CGamePtr->halo_mode == 2`. BUG: the port renders these as a stepped pyramid of separate quads, but
the original is a smooth radial halo — the billboards must overlap/blend into a continuous glow and don't.
The loop's geometry (half-size grows with distance) reconstructs faithfully, so the defect is in how the quads
combine: investigate billboard size vs inter-quad spacing (`focal_length`/`max_distance`), the per-quad alpha
falloff, and the additive blend path. Texture g_LightTextures[1] (texidx 59, 64×64, smooth radial bell-curve texels).

## Confirmed / done

- **Perf (done, confirmed)**: rasterizers compiled at `-O2 -fno-strict-aliasing` (CMakeLists per-file
  `set_source_files_properties` matching `Scanline(16|32)_FUN_` + `SKIP_PRECOMPILE_HEADERS`). The asan build
  is `Debug` = `-O0`; that was the stutter, not the renderer logic. Output bit-identical (`-fwrapv` global).
- **§20 fix (done, compiles, capstone-verified)**: `calculateSpatialLighting` FUN_0056db80 keep — the
  dynamic-lights loop (nested in the mirror-glass-actor loop) read **uninitialized** `local_48`/`local_24`;
  the decompiler dropped two REAL 12-byte cave copies at `0x60ca61`/`0x60ca7e` (`local_3c`→`local_48` reflected
  pos, `local_30`→`local_24` reflected normal). Fixed by passing `local_3c`/`local_30` directly. NOTE: this is
  the **mirror-reflection** dynamic path (only runs when `mirror_glass_actor_count > 0`) — tangential to the
  main symptom. After the Ghidra retype below + re-export, drop the `(CVector3i *)` cast (local_3c becomes CVector3i).
- **Ghidra fix (pending)**: `transformMirrorVertex_FUN_005229b0` (core/mirror.cpp) signature is wrong — it
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

## Disproven hypotheses (kept for the record)

- **"Garbage normals / stale `g_VertexNormalArray`"** (2026-05-27): an early probe sample showed a surface
  normal `N ≈ 1.3e9` (float-bit-like, e.g. `0x41F00000`). **DISPROVEN 2026-05-28** — world normals are sane unit
  vectors (`≈±65536`, e.g. `(0,0,67537)`). The early reading was most likely a fixed-point int value misread as
  float, and/or the `(float)→int` store bug in `lightVerticies` since fixed. `calculateAttenuatedDirectionalLight`
  and `sampleLightingAntialiased` are correct reconstructions (they light the character correctly).
- **"Gather / `isBoundingBoxVisible` rejects the flashlight"** and **"coordinate/space mismatch"** — also
  DISPROVEN 2026-05-28 (see below).

## 2026-05-28 — major narrowing (gdb/tmux runtime probing, flashlight ON)

Ruled out four hypotheses (orientation, gather/cull, garbage normals, coordinate mismatch) and localized the
failure to: **the flashlight's per-frame lighting contribution does not reach the rendered static world** — only
characters pick it up.

**1. Flashlight orientation is FAITHFUL — not a bug.** `CWeapon_updateLighting_FUN_005ee4a0` builds the light's
`rotation_matrix` from `weapon->base.orient.vec` with `+0.3490658f` (= exactly 20°) added to `.x` (pitch);
asm-confirmed (`FLD [orient.x]; FADD FLOAT_00657b21; FSTP` → `buildRotationMatrix`). Runtime: when the aim
settles, `orient.vec.x≈0` (horizontal, matches the laser) and the beam axis `rotation_matrix.m[*].z =
(0.045,-0.342,0.939)` = exactly 20° below horizontal. So the laser-vs-flashlight 20° gap and the "tilted"
look are original behavior. (The cone's stepped-pyramid *appearance* is a separate, real bug — see Symptom — not the 20° orientation.)

**2. The gather / `isBoundingBoxVisible` is NOT the root cause.** Measured: flashlight (`g_CDemonLightInstance`)
is in `g_DynamicLights` and `light_enabled_flag=1` every frame, but `CDemonCamera_isBoundingBoxVisible_FUN_00452180`
rejects it in ALL per-object gathers — it only enters `g_PrimaryDirectionalLights` via the `position==NULL`
global branch (set.cpp:45-52). BUT forcing `isBoundingBoxVisible`→1 for the flashlight (gdb `return 1`) put it in
every object's list and **changed nothing on screen**. So the cull is a red herring. (Also: the flashlight's
`source_matrix` is a valid fixed-point matrix — the earlier "NaN" was a float-misread of int bits; `beginScene`
+`updateTransformMatrices` run 72×/4s on it; gobo `precomputed_lighting_textures`, `shadow_depth_buffer`,
`cached_projection` all populated/sane.)

**3. THE KEY FINDING — flashlight lights CHARACTERS, not WORLD geometry.** Forcing `isBoundingBoxVisible`→1 AND
`sampleLightingAntialiased`→60000 for the flashlight lit ONLY CStranger (the character model brightened),
world geometry stayed dark. Why: `calculateAttenuatedDirectionalLight_FUN_0044edf0` computes
`dot = normalize(world_pos - light_pos) · normal` and **returns 0 when `dot >= 0`** (line 40), i.e. only
surfaces FACING the light reach `sampleLightingAntialiased`. Counts under forcing: `calcAttenDirLight=3880`,
`sampleLightingAntialiased=1073` (≈28%) — the 28% lit subset is essentially the character. World geometry has
N·L≥0 → bails before the forced `sampleLightingAntialiased`, so forcing it had no effect on the world.

**What's confirmed OK:** the set lighting path runs per frame (`CDemonSet_lightVerticies_FUN_0056eac0` 90×/4s;
`setCameraView` 0×) and near static geometry IS processed — yet the rendered static world doesn't change (see #4).
World normals are SANE unit vectors (`(0,0,67537)` ≈ (0,0,1.03) in 16.16; the `(float)→int` keep fix in
lightVerticies's `vertex_normals!=NULL & rendering_mode==0` branch was a real faithfulness fix but did NOT move
the symptom — world likely flows a different branch). `source_matrix` etc. fine.

**4. NARROWED — the flashlight's per-frame contribution never reaches the RENDERED static world.**
A coordinate/space-mismatch hypothesis was checked and DISPROVEN: `transformToWorldSpace` is correct
(`g_CameraOrigin = (-834,4839,-44724) = (-3.26,18.90,-174.70)` exactly matches the camera), so the world path's
`world_pos` is right; near geometry IS processed (4125 flashlight N·L verts span world_z `[-141,-8]`, **3023
within ~32 units of the light** — an earlier "none near" reading was a buggy gdb 3-D distance expr). Decisive
test: forcing `calculateAttenuatedDirectionalLight`→60000 for the flashlight (bypassing the N·L gate entirely)
STILL lit only the character. So even a maxed flashlight contribution doesn't change the static world on screen,
even though the set lighting path runs per frame and processes near geometry. Only characters
(`CDeformableModel_lightVertices`, re-lit per frame) pick up the moving flashlight.

**Open tension to resolve next:** the set path (`CDemonSet_lightVerticies`) runs per frame and processes near
static geometry, yet the rendered static world is unaffected. So the per-frame set-lighting result isn't applied
to the visible static geometry — candidate reasons: (a) the per-frame calls cover only a subset (dynamic set
pieces) and the main static room is lit once and cached; (b) the static room is drawn from a cached display list
/ baked vertex colors built at `setCameraView`; (c) a render-order issue (static world drawn before the per-frame
relight). Identify which, and where the original re-applies the moving flashlight to static geometry.

## Next steps to resume

Bug A — static world not lit (resolve the §4 open tension: set path runs per frame + processes near geometry,
yet the rendered static world is unaffected):
1. **Identify what the per-frame `CDemonSet_lightVerticies` calls (90×/4s) actually cover.** Dump the caller /
   object per call (vertex_count, a sample world_pos) — are they the visible static room, or only dynamic set
   pieces? If the main room isn't among them, it's lit once and cached.
2. **Trace what draws the visible static room and where its vertex colors come from** — a cached display list /
   baked colors from `setCameraView`, vs the per-frame `g_RenderVertexBuffer`. Also check render order (static
   world drawn before the per-frame relight?). The point where the moving flashlight should re-reach static
   geometry is the fix site.

Bug B — cone renders as a stepped pyramid instead of a smooth halo:
3. In `renderVolumetricLightShaft` compare billboard half-size (`fVar3 = dist*18/focal`) against inter-quad
   spacing (`0.04*max_distance`) — confirm whether the quads should overlap and don't (size/`focal_length`/
   `max_distance` scaling), then check per-quad alpha falloff and the additive blend path vs the original.

## gdb probe recipes used (dbg.sh)

- Build/run: `scripts/Bash/dbg.sh build|start|cont|stop|status`; probe: `dbg.sh probe FILE.gdb` (pause→source→resume);
  read: `dbg.sh log-full | grep '[TAG]'`; clear: `printf 'delete\n' >/tmp/clear.gdb; dbg.sh probe /tmp/clear.gdb`.
- Breakpoint symbol form: functions use full prefixed name (`core_dcamera_cpp_..._FUN_xxxx`); **line** breakpoints
  use the file BASENAME (`CDemonLight_..._FUN_xxxx.keep.cpp:NN`), NOT prefixed.
- The flashlight cone only renders in-scene with the light on; the battery drains, so a no-drain cheat keeps it
  lit for probing.
- Capstone ground-truth (verify cave blocks aren't fabricated): `python3 scripts/Python/disassemble_function.py <Func_FUN_xxxx>`.
