# Mirror actor reflections — overview

## The problem

In rooms containing a mirror, the decompiled `nocedit.exe` build reflected the room
geometry and a character's corona/flare, but **never the character's opaque model**.
Retail `nocturne.exe` reflects all three. The mirror itself worked; only actors were
missing from it.

## The resolution

Actors were being culled by the visibility gate that runs *inside* the reflected render
pass. Two separate causes stacked on top of each other:

1. `CDemonCamera::testVisibility` installs `g_BackgroundSavedCameraState` before
   rasterising an actor's bounding box. During a mirror pass that discards the mirror
   camera and tests the reflection against the main scene camera, where it fails.
2. That swap cannot simply be removed. Its real purpose is to overwrite
   `g_TransformMatrix` with a *clean camera matrix*, discarding an actor transform that
   the caller pushed a moment earlier. Removing the swap leaves that actor transform in
   place and the box is tested through it.

The fix installs a **clean mirror camera state** — satisfying both requirements at once —
behind `NOCTURNE_AUTHENTIC_MIRROR_CULL` (default `0`). See `05_MEASUREMENT_AND_SOLUTION.md`.

## Reading order

| document | contents |
|---|---|
| `01_HOW_MIRRORS_WORK.md` | architecture: the two reflection mechanisms and the call chains. Read first. |
| `02_RULING_OUT_THE_PIPELINE.md` | the mirror pipeline is byte-identical between builds; how a real difference stayed hidden behind a tooling gap |
| `03_THE_VISIBILITY_GATE.md` | where the two builds actually diverge |
| `04_FAILED_AND_PARTIAL_FIXES.md` | two fixes that looked correct and were not, and what each one proved |
| `05_MEASUREMENT_AND_SOLUTION.md` | the instrumented diagnosis, the fix, and its verification |
| `06_CLEARED_LEADS.md` | everything audited and found faithful, plus the open questions |

## Do not re-chase

Consolidated from `06_CLEARED_LEADS.md`; each entry there carries the evidence.

- The mirror pipeline (`core/mirror.cpp`, the `core/set.cpp` mirror driver) — byte-identical.
- `CMirror::reflectAndClipPrimitive`'s `d=0.122` cross-binary drift — decoded, benign.
- The 5 mirror clip planes — written to the correct offsets.
- `setupMirrorReflection`'s 4-matrix chain, `CBoundingBox3D::isVisible`,
  `isVisibleWithCamera`, `clipPolygonToViewFrustum`, `renderPolygonSoftware`,
  `calculateTriangleWindingOrder` — all audited against assembly and faithful.
- Reordering `setupRenderState` against the cull gate — retail calls the same pair in the
  same order.

## Status of the fix

It makes reflections work, is verified causally rather than visually, and is now known to
compute the same camera-space vertices retail computes.

Retail has no camera swap because it never leaves the actor-pushed space: it rasterises
the box faces straight from the vertices it just projected. nocedit instead round-trips
through world space via the **camera-only** `g_InverseMatrix`, and re-projecting world
corners requires a pure camera matrix — which is the swap's entire purpose. Installing the
clean *mirror* camera state is the unique choice that lands nocedit's vertices where
retail's are. Derivation and evidence in `06_CLEARED_LEADS.md`.

The remaining deviation is structural, not numerical: two sites (a capture in
`setupMirrorRendering`, a use in `testVisibility`) where the shipped code had one
self-contained swap.

## Separate defect, also fixed

A mirror pass samples its field of view while `beginBackgroundScene` has a viewport pushed,
so it gets the default 18 rather than the camera's. Under acceleration that displaces
geometry against the backdrop; under software it scales the reflected room off the glass
and leaves the mirror's depth window open. Unrelated to the cull gate.
See `07_ACCEL_DISPLACEMENT.md`.

## Which binary is the reference

`nocedit.exe`. The two binaries differ here: `beginBackgroundScene` pushes a viewport in
the editor (`0x44cc70`) and not in retail (`0x440b20`), so `nocturne.exe` has neither
symptom. A `nocturne.exe` screenshot is not evidence about how `nocedit.exe` should look,
and treating one as such has cost this investigation time more than once.
