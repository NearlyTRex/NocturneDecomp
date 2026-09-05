#pragma once

// =============================================================================
// MIRROR — ACTOR CULL CAMERA
// =============================================================================
//
// Support for NOCTURNE_AUTHENTIC_MIRROR_CULL (see shim_config_authentic.h).
// One saved camera state, and it exists because of an ordering problem that is
// easy to get wrong twice.
//
// CDemonCamera::testVisibility rasterises an actor's bounding box to decide
// whether the actor is visible. Before it can do that it has to establish a
// camera, because its CALLER has already moved the renderer off one:
// CCharacter::renderOpaque calls CDemonActor::setupRenderState, which
// matrixPushAndTransform's the actor's own heading onto g_TransformMatrix (and
// restoreRenderState pops it afterwards). That push is deliberate and both
// binaries do it — model vertices are model-local, so the renderer sets up
// local->camera before drawing them.
//
// So testVisibility's
//
//     getCameraAndViewportState(renderer, &g_SavedCameraState);
//     setupCameraAndViewport   (renderer, &g_BackgroundSavedCameraState);
//     ... transform 8 corners, rasterise 6 faces ...
//     setupCameraAndViewport   (renderer, &g_SavedCameraState);
//
// is not really a camera *choice*. Its job is to overwrite g_TransformMatrix
// with a clean camera matrix for the duration of the box test, throwing away
// the actor rotation, and then put things back.
//
// Which makes "just don't swap during a mirror pass" the wrong fix, however
// reasonable it looks: re-installing the state you just saved is a no-op, so
// the actor's heading stays in the matrix and the box is tested through it.
// Measured, that puts the hero's box AND the mirror itself behind the camera
// (z<0) at most facings, so every box face fails the mirror plane and the
// reflection is culled — with a verdict that tracks which way the character is
// pointing, which is exactly the symptom that fix was meant to remove.
//
// The state that IS wanted is the mirror camera, clean: the renderer holds
// precisely that between setupMirrorReflection installing it and renderOpaque
// pushing the actor onto it. CDemonSet::setupMirrorRendering captures it here;
// testVisibility installs it while a mirror pass is active.
//
// Inert when NOCTURNE_AUTHENTIC_MIRROR_CULL is 1 — nothing writes or reads it,
// and testVisibility keeps the shipped g_BackgroundSavedCameraState swap.

#if !NOCTURNE_AUTHENTIC_MIRROR_CULL

// shim_config.h is reached from the top of nocturne.h, before types.h, so the
// struct is still incomplete here — forward-declare the tag. Every use site
// sees the full definition, and an extern declaration does not need it.
struct SCameraViewportState;

// The renderer's camera/viewport state as of the last setupMirrorRendering,
// i.e. the mirror camera before any actor transform has been pushed onto it.
// Only meaningful while CDemonSet::active_mirror is non-null, which is the only
// window in which testVisibility consults it.
extern struct SCameraViewportState g_MirrorCullCameraState;

#endif
