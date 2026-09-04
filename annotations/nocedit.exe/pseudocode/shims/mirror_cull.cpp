// =============================================================================
// MIRROR — ACTOR CULL CAMERA — implementation
// =============================================================================
//
// See mirror_cull.h for why a saved mirror camera is needed at all.

#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_MIRROR_CULL

// Written by CDemonSet::setupMirrorRendering, read by CDemonCamera::testVisibility.
// Zero-initialised: testVisibility only reads it while active_mirror is non-null,
// and setupMirrorRendering is what sets active_mirror, so it is always written
// before it is read.
SCameraViewportState g_MirrorCullCameraState = {};

#endif
