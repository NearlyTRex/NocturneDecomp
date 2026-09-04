# Phase 2 — where the two builds diverge

With the pipeline cleared and the previously-unpaired functions now comparable, the
difference is in the actor visibility gate.

## The editor swaps cameras; retail has no such function

`CDemonCamera::testVisibility` (`core/dcamera.cpp`, `0x4544f0`) swaps the renderer's
camera before it rasterises the bounding box:

```c
getCameraAndViewportState(g_CDemonRendererPtr2, &g_SavedCameraState);
setupCameraAndViewport   (g_CDemonRendererPtr2, &g_BackgroundSavedCameraState);  // <<<
... transformPoint the 8 corners, rasterise the 6 box faces via renderSinglePrimitive ...
setupCameraAndViewport   (g_CDemonRendererPtr2, &g_SavedCameraState);
```

Confirmed in the assembly at `0x45450f`: `PUSH 0x151be98 | g_BackgroundSavedCameraState`.
**The reconstruction is faithful — this is not a decompilation bug.**

During a mirror pass the renderer is holding the mirrored camera that
`setupMirrorRendering` → `setupMirrorReflection` → `setupMirrorCamera` installed. The swap
throws it away and tests the reflected actor's box against the main scene camera, where
the reflection's virtual position — behind the mirror plane, inside the wall — is not
visible. `testVisibility` returns 0 → `CBoundingBox3D::isVisibleWithCamera` returns 0 →
`CCharacter::renderOpaque` culls → no reflected model.

**Retail `nocturne.exe` has no `CDemonCamera::testVisibility` at all.** It inlines the same
bounding-box rasterisation directly into `CBoundingBox3D::isVisibleWithCamera`
(`0x41d050`, 1023 B against the editor's 447 B), and that inlined copy performs **no
camera save/swap/restore**. Its complete call set is `getCorner`,
`transformAndProjectPoint`, `isVisiblePlane`, `renderSinglePrimitive`,
`enableFaceCapture`, `setPlaneCullingEnabled`.

## The two shapes, side by side

| | `nocedit.exe` | retail `nocturne.exe` |
|---|---|---|
| `isVisibleWithCamera` | 447 B — projects the 8 corners, **un-projects** them to world space via `g_InverseMatrix`, hands the world corners to a virtual `CDemonCamera::testVisibility` | 1023 B — projects the 8 corners and rasterises the 6 box faces **inline, from those same projected vertices** |
| camera used for the face test | `g_BackgroundSavedCameraState`, swapped in | whatever is current — during a mirror pass, the mirror camera |
| per-face gating | `setRenderingState(1)` | `setPlaneCullingEnabled(0)` plus a per-face `isVisiblePlane` test |

The editor's round trip — project with camera A, un-project with A's inverse, re-project
with camera B — is the identity *only when A and B are the same camera*. In a mirror pass
they are not: un-project with the mirror inverse gives true world coordinates, then
re-projecting through the main camera puts the box inside the wall.

Retail never round-trips. It rasterises the faces from the vertices it just projected, so
there is no second camera to disagree with.

## Why this explains the exact symptom

- Static room geometry reflects: it never goes through `isVisibleWithCamera`, it carries
  its own explicit `CMirror` clip planes (see `01_HOW_MIRRORS_WORK.md`).
- The character's corona/flare reflects: a different `renderScene` sub-loop.
- Only the opaque model is culled.

The swap also appears to be inert outside a mirror pass, since the current and background
cameras normally agree — which is why the difference only ever shows up in mirrors.

> **That last statement is false, and believing it caused the first failed fix.** See
> `04_FAILED_AND_PARTIAL_FIXES.md`.
