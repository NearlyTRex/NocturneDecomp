#pragma once

// =============================================================================
// MIRROR — SCENE CAMERA ACROSS A REFLECTED PASS
// =============================================================================
//
// Support for NOCTURNE_AUTHENTIC_MIRROR_PROJECTION (see shim_config_authentic.h).
// One saved camera state, holding the scene camera as it stood immediately
// before a mirror pass replaced it.
//
// CDemonSet::restoreCameraAfterMirror does not restore the camera, it rebuilds
// one, from three loose globals that CDemonSet::setupMirrorRendering sampled:
// an origin, a rotation, and a field of view read back through
// calculateProjectionFactor as 18 * 65536 / g_ProjectionScale. The round trip
// through that factor is an exact involution, so nothing is lost in it. What
// goes wrong is when it is sampled.
//
// CDemonRenderer::pushViewport stacks g_ProjectionScale and resets the live
// global to 0x10000 without rebaking g_TransformMatrix, because the stack
// carries the camera scalars and not the matrices derived from them. Between
// that push and the next bake the global and the matrix disagree by design, and
// CDemonCamera::beginBackgroundScene opens exactly such a window around the
// pass that builds a camera angle. A mirror pass inside it samples the default
// field of view rather than the camera's, and restoreCameraAfterMirror's
// setProjectionScale/setupSceneRendering then bakes g_TransformMatrix from it —
// scaling columns 0 and 1 by 0x100000000/g_ProjectionScale and leaving column 2
// alone. Everything drawn afterwards in that pass is scaled about the centre of
// the screen by 18/fov, and popViewport restores the scale without rebaking, so
// the matrix stays wrong until something else bakes it.
//
// Hence a state, not a scalar. The renderer already carries an exact 21-field
// snapshot in getCameraAndViewportState/setupCameraAndViewport, matrices and
// projection scale included, so the pass can be bracketed by a save and a
// write-back that reproduce the transient disagreement instead of collapsing
// it. Captured at the top of setupMirrorRendering, before setupMirrorReflection
// installs the mirror camera over it.
//
// This is a different camera from g_MirrorCullCameraState in mirror_cull.h,
// which is sampled a few lines later and is deliberately the mirror's own.
//
// That sample also builds the mirror's own camera: setupMirrorRendering passes
// it to setupMirrorReflection, which stores it and calls setupMirrorCamera. So
// restoring the scene camera afterwards does not help the reflection, which has
// already been drawn at the default field of view. Only renderSceneGeometry is
// inside the window; the per-actor mirror loops in renderScene run after it
// closes, so the reflected room and the reflected actors use different cameras
// and the room lands scaled by 18/fov, off the glass. nocturne.exe is unaffected
// — its beginBackgroundScene (0x440b20) pushes no viewport.
//
// Hence nocturne_mirror_projection_factor.
//
// Inert when NOCTURNE_AUTHENTIC_MIRROR_PROJECTION is 1 — nothing writes or
// reads the state, restoreCameraAfterMirror keeps the shipped rebuild, and
// setupMirrorRendering keeps the shipped sample.

#if !NOCTURNE_AUTHENTIC_MIRROR_PROJECTION

// shim_config.h is reached from the top of nocturne.h, before types.h, so the
// struct is still incomplete here — forward-declare the tag. Every use site
// sees the full definition, and an extern declaration does not need it.
struct SCameraViewportState;

// The renderer's camera/viewport state as of the last setupMirrorRendering,
// sampled before the mirror camera is installed. Written by
// CDemonSet::setupMirrorRendering, read by CDemonSet::restoreCameraAfterMirror.
extern struct SCameraViewportState g_MirrorSceneCameraState;

// The field of view the mirror camera is built from, taken over the projection
// scale a pushed viewport stacked rather than the 0x10000 it left live.
float nocturne_mirror_projection_factor(void);

#endif
