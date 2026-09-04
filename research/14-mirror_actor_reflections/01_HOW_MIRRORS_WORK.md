# How mirror reflections work

Background needed to follow the rest of this investigation. Addresses are `nocedit.exe`
unless stated otherwise.

## Two independent mechanisms

Static geometry and character actors reach the mirror by completely different routes.
This matches the symptom exactly — the room reflected while actors did not — and is the
key structural fact for the whole investigation.

### Static / primitive geometry — uses the `CMirror` polygon clipper

Only three functions ever call into `CMirror`, all in `core/set.cpp`, all gated on
`g_CDemonRendererPtr2->advanced_culling_enabled`:

```
renderPrimitiveList                -> CMirror::clipAndRenderReflectedPrimitive
renderTexturedPrimitiveListVariant -> CMirror::renderMirroredPrimitive
renderSinglePrimitive              -> CMirror::renderReflectedPrimitive
                                        \-> all three funnel into reflectAndClipPrimitive
```

`reflectAndClipPrimitive` clips a polygon against the mirror's **5 clip planes** and
returns 0 if fewer than 3 vertices survive. It reads vertex positions as
`projected_vertex.transformed_{x,y,z}` straight out of the renderer's vertex buffer, so
**the vertices must already be in the same camera space the clip planes were built in.**
That constraint drives everything later in this investigation.

### Character actors — re-rendered with the mirror camera installed

`renderOpaqueActors` renders each actor normally, then once more per mirror:

```
renderOpaqueActors
  for each actor in sorted_render_actors:
      renderOpaque(actor)                    ; normal pass
      enableFaceCapture(1)
      for i in 0 .. mirror_glass_actor_count-1:
          setupMirrorRendering(this, i, 0)   ; installs mirror reflection,
                                             ; enableAdvancedCulling(1), setAlphaMask(i+1),
                                             ; active_mirror = &mirror
          renderOpaque(actor)                ; second full render, mirrored camera
          enableFaceCapture(1)
          restoreCameraAfterMirror(this)     ; clears active_mirror
```

Inside that second render the geometry goes:

```
CCharacter::renderOpaque
  -> CDemonActor::setupRenderState      <-- pushes the actor transform (see below)
  -> CBoundingBox3D::isVisible          <-- CULL GATE, returns early if false
  -> renderCharacter -> CDeformableModelInstance::renderWithOptions
     -> renderPolygons -> CDeformableModel::renderParts
        -> CDemonSet::renderFaceListOrEnvMap
           -> CDemonRenderer::renderFaceList
              (face_capture_enabled != 0)  -> renderTexturedFace  (per face)
                 -> clipAndFillPoly
                    (face_capture_enabled != 0) -> clipAndRasterize
                       (g_VertexProcessingEnabled != 0)
                          -> clipPolygonToViewFrustum -> renderPolygonSoftware
  -> CDemonActor::restoreRenderState
```

A reflected actor's *model* is therefore confined to the mirror by the camera and frustum
that `setupMirrorReflection` installs, not by `CMirror`'s polygon clipper.

## The cull gate also runs through `CMirror`

The model render never touches `CMirror`, but **the visibility test does**, and that is
what culls actors:

```
CCharacter::renderOpaque -> CBoundingBox3D::isVisible -> isVisibleWithCamera
  -> CDemonCamera::testVisibility -> CDemonSet::renderSinglePrimitive (0x570df0)
  -> (advanced_culling_enabled != 0)
  -> CMirror::renderReflectedPrimitive -> CMirror::reflectAndClipPrimitive
```

`renderSinglePrimitive` branches on `advanced_culling_enabled`, which
`setupMirrorRendering` holds at 1 for the entire reflected render. So during a mirror
pass the six bounding-box faces are clipped against the mirror's five clip planes, and
`testVisibility` returns 0 — actor culled — whenever fewer than three vertices survive.

`CCharacter::renderOpaque` gates on this strictly:

```c
iVar3 = CBoundingBox3D::isVisible(this_ptr_00);
if (iVar3 != 0) {
    this_ptr->was_rendered_opaque = 1;
    CCharacter::renderCharacter(this_ptr);   // only reached when visible
    ...
}
```

So a visible reflection *requires* `testVisibility` to return non-zero.

## The two camera-state globals

`CDemonCamera::testVisibility` (`core/dcamera.cpp`, `0x4544f0`) begins:

```c
getCameraAndViewportState(g_CDemonRendererPtr2, &g_SavedCameraState);
setupCameraAndViewport   (g_CDemonRendererPtr2, &g_BackgroundSavedCameraState);
... transformPoint the 8 corners, rasterise the 6 box faces via renderSinglePrimitive ...
setupCameraAndViewport   (g_CDemonRendererPtr2, &g_SavedCameraState);
```

`getCameraAndViewportState` / `setupCameraAndViewport` are an exact field-for-field
inverse over the same 39 globals — `g_Projection.*`, `g_CameraOrigin{X,Y,Z}`,
`g_CameraRotation{Pitch,Yaw,Roll}`, `g_Clip{Left,Right,Top,Bottom}`,
`g_Relative{X,Y,Z}`, `g_TransformMatrix`, `g_InverseMatrix`, `g_ProjectionScale`.
Consequently *saving and immediately re-installing the same state is a provable no-op*,
a fact that matters in `04_FAILED_AND_PARTIAL_FIXES.md`.

## The actor transform push

`CCharacter::renderOpaque` calls `CDemonActor::setupRenderState` **before** the cull gate:

```c
void CDemonActor::setupRenderState(CDemonActor *this_ptr) {
  processCameraRelativeVertex(g_CDemonRendererPtr2, &this_ptr->location.position);
  applyScaledTransform      (g_CDemonRendererPtr2, &this_ptr->orient.vec, NULL);
}
```

`applyScaledTransform`'s parameters are misnamed in the decompiler output: it is passed
`orient.vec` and scales by `(1/π)·32768`, i.e. radians to a fixed-point angle, so its
first three arguments are **rotation angles, not a position**. It calls
`matrixPushAndTransform`, which *pushes* onto the matrix stack;
`CDemonActor::restoreRenderState` calls `matrixPop`. The push is balanced, deliberate,
and present in both binaries — model vertices are model-local, so the renderer sets up
local→camera before drawing them.

**The cull gate therefore runs while an actor transform is on the matrix stack.** This is
the fact that makes the naive fix wrong.
