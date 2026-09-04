# Phases 5–6 — instrumented diagnosis and the fix

## Instrumentation

A live gdb probe on the running build, filtered to a single actor's bounding box during a
mirror pass, so the log stays readable while the game runs. The probe is kept alongside
these notes as `mirror_cull_probe.gdb`; source it with `scripts/Bash/dbg.sh probe`.

The filter matches `corners[0]` against the live hero position, both in 1/256 fixed point,
within a small window. Sampling only a few frames is not enough — an early burst-limited
probe caught no passing test at all, because the box changes with animation as well as
with facing — so the probe runs continuously and reports per face.

Two derived quantities carry most of the signal:

- **Which plane rejected a face.** The five clip-plane tests are a short-circuited `&&`
  chain, so the *number* of `clipPolygonAgainstPlane` calls for a face names the plane
  that killed it: 5 calls = survived, k<5 = plane k collapsed it below 3 vertices.
- **Whether a face was partially clipped.** A box straddling a plane produces partial
  results (`out=3`, `out=5`). Only ever seeing `out=4` (all in) or `out=0` (all out) means
  the box is wholesale on one side, not near a boundary.

## What the measurements showed

With the character stationary and the mirror-gated fix from phase 4 in place:

* The mirror camera **is** correctly installed. `g_CameraOrigin` during the test is
  `(-2.64, 45.90, 53.94)`, matching `active_mirror->reflection.camera_origin` exactly,
  while the saved main camera is `(-74.68, 45.90, 53.88)` — a reflection across a plane at
  x ≈ -38.66, with the actor at x = -50 correctly on the room side.
* The mirror's own corners confirm the plane: `c1=(-38.656, 37.347, 47.550)`,
  `c3=(-38.664, 44.941, 57.298)`.
* `g_TransformMatrix`'s **columns** — which are what `transformPoint` actually uses — have
  norms **4/3, 16/9, 1.000**: aspect scale baked into x and y, unit forward axis
  `(0.370, -0.502, 0.781)`. Hand-transforming a box corner through it reproduces the
  observed camera-space vertex exactly, so the arithmetic is fully accounted for.
* The actor's box corner lands at **z = -11.68 — behind the camera** (`transformPoint`'s
  own outcode treats `z < 1` as behind).
* **The mirror itself also lands behind the camera:** `(c1 - cam)·forward = -14.02`. The
  installed transform faces roughly 110° away from the mirror it is supposed to look
  through.
* Consequently every face scores `dot ≈ +61` against clip plane 0 (`D = 39.60`, i.e. the
  mirror plane sits at z ≈ +41.6 in front) and is rejected whole. Faces were never
  partially clipped.
* Sweeping the facing over `-2.44 … +0.80` across 763 tests: the visible window is only
  `facing ∈ [-0.20, +0.13]` — 209 pass, 554 fail.

**So the clip planes, `reflectAndClipPrimitive`, and the mirror camera are all correct.
What is wrong is the transform in force at the moment the box is tested.**

## The explanation

`CDemonActor::setupRenderState` runs before the cull gate and **pushes the actor's own
heading onto `g_TransformMatrix`** (`matrixPushAndTransform`; `restoreRenderState` pops
it). Details in `01_HOW_MIRRORS_WORK.md`.

Two independent matrix samples confirm it: `m[1]` is byte-identical between them while
`m[0]` and `m[2]` differ. That is the signature of a pre-multiplied Y-axis rotation — for
`M' = R_y · M`, row 1 of `R_y` is `(0,1,0)`, so row 1 passes through untouched.

Therefore the purpose of `testVisibility`'s camera swap is **not primarily to choose a
camera**. It is to overwrite `g_TransformMatrix` with a clean camera matrix, discarding
the actor rotation the caller just pushed, for the duration of the box test — and then
put it back.

That makes the phase-3/4 deviations the wrong *shape*. Re-installing the state just saved
is a no-op, so `R_actor_heading` survives into the test, and the box is measured through
a matrix that rotates with the character. **This is a defect in the fix, not in the
reconstruction; the `.keep` files on this path are faithful.**

The choice was never swap-versus-no-swap. It is *which clean state to install*:

| variant | installs | outcome |
|---|---|---|
| `nocedit.exe` as shipped | background camera | clean matrix, wrong camera → reflection culled |
| phases 3–4 | current state (no-op) | right camera, **polluted matrix** → culled at most facings |
| correct | **mirror camera's clean state** | right camera, clean matrix |

## The fix

A clean mirror camera state exists at exactly one moment: after `setupMirrorReflection`
installs the mirror camera and before `renderOpaque` pushes an actor onto it. Capture it
there, use it in the gate.

**`shims/mirror_cull.{h,cpp}`** — one global, declared only when the flag is 0:

```c
extern struct SCameraViewportState g_MirrorCullCameraState;
```

(`shim_config.h` is reached from the top of `nocturne.h`, before `types.h`, so the header
forward-declares the tag.)

**`CDemonSet::setupMirrorRendering`** — capture:

```c
setupMirrorReflection(&mirror.reflection, &g_SavedCameraOrigin.f,
                      &g_SavedCameraRotation, g_SavedProjectionFactor);
#if !NOCTURNE_AUTHENTIC_MIRROR_CULL
  getCameraAndViewportState(g_CDemonRendererPtr2, &g_MirrorCullCameraState);
#endif
  enableAdvancedCulling(g_CDemonRendererPtr2, 1);
```

**`CDemonCamera::testVisibility`** — use:

```c
cull_camera_state = &g_BackgroundSavedCameraState;
#if !NOCTURNE_AUTHENTIC_MIRROR_CULL
  if (g_CDemonSetPtr->active_mirror != (CMirror *)0x0) {
    cull_camera_state = &g_MirrorCullCameraState;
  }
#endif
setupCameraAndViewport(g_CDemonRendererPtr2, cull_camera_state);
```

Both `.keep` files compile and report `clean` from `test_suspects.sh`.

## Verification

Same probe, same actor, before and after:

| | before | after |
|---|---|---|
| box corner `z` (camera space) | **-11.68** (behind camera) | **+46.20** (in front) |
| test verdicts | 209 pass / 554 fail | **743 pass / 4 fail** |
| box faces | 1080 rejected, 360 survived | **1235 survived, 0 rejected** |
| facing covered | -2.44 … +0.80 | **-3.14 … +3.07** (full turn) |

The sign flip on `z` is the causal confirmation rather than a correlation: the box was
being tested behind the mirror camera and now sits in front of it. No face is clipped at
any facing.

**Residual, 4 of 747 tests (0.5%):** two pairs of frames in which all six faces survive
all five clip planes but `renderSinglePrimitive` still returns 0 — the clip is fine and
the depth-profiled rasterisation drew nothing that frame. Plausibly correct occlusion.
Not pursued.

## Caveat on faithfulness

This is a deliberate deviation, not a reconstruction, and it is **not demonstrated to
match retail**. Retail has no camera swap at all, so it must tolerate the pushed actor
transform in some way that is still unexplained. See `06_CLEARED_LEADS.md`.

It is also a **two-site** deviation — a capture in `setupMirrorRendering`, a use in
`testVisibility` — where the shipped code had one self-contained swap. That is heavier
than a single-function change and worth revisiting if the retail question is ever
resolved.
