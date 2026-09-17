// =============================================================================
// MIRROR — SCENE CAMERA ACROSS A REFLECTED PASS — implementation
// =============================================================================
//
// See mirror_projection.h for why the scene camera has to be saved as a state
// rather than rebuilt from a field of view.

#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_MIRROR_PROJECTION

// Written by CDemonSet::setupMirrorRendering, read by
// CDemonSet::restoreCameraAfterMirror. Zero-initialised: the two are a matched
// pair at every call site, and the write always precedes the read.
SCameraViewportState g_MirrorSceneCameraState = {};

// calculateProjectionFactor (0x48c870), over the scale g_TransformMatrix was
// baked from rather than whatever is live. pushViewport stacks the scale and
// writes 0x10000 over the global without re-baking; popViewport reads the slot
// back after decrementing, so the entry below the index is the scale the window
// opened with. A pushed viewport alone does not justify preferring it — a
// camera installed inside the window sets a real scale and re-bakes, which the
// per-actor mirror passes do. A live scale still at 0x10000 is what marks the
// global and the matrix as unreconciled.
float nocturne_mirror_projection_factor(void)
{
    int scale = g_ProjectionScale;

    if (scale == 0x10000 && g_ViewportStackIndex > 0) {
        scale = g_ViewportStack_ProjectionScale[g_ViewportStackIndex - 1];
    }

    return ((float)18 / (float)scale) * (float)65536;
}

#endif
