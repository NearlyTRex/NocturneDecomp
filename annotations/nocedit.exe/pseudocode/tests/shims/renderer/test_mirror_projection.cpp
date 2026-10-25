// =============================================================================
// MIRROR PROJECTION — the field of view a mirror pass builds its camera from
// =============================================================================
//
// setupMirrorRendering samples the scene camera's field of view as
// calculateProjectionFactor does, 18 * 65536 / g_ProjectionScale. Inside a
// pushed viewport the live scale is the 0x10000 pushViewport left, not the
// camera's, so the scale the viewport was pushed over is the one that counts;
// a camera installed inside the window sets a real scale of its own, and that
// one counts. See mirror_projection.h.

#include "nocturne.h"
#include "nocturne_test.h"

namespace {

const int kUnreconciled = 0x10000; // what pushViewport leaves live
const float kDefaultFov = 18.0f;   // the factor at that scale

void at(int live_scale, int stack_depth, int pushed_over = 0) {
    g_ProjectionScale = live_scale;
    g_ViewportStackIndex = stack_depth;
    if (stack_depth > 0)
        g_ViewportStack_ProjectionScale[stack_depth - 1] = pushed_over;
}

} // namespace

// Outside a pushed viewport the live scale is the camera's.
NOCTURNE_TEST(outside_a_pushed_viewport_the_live_scale_counts) {
    at(0x20000, 0);
    CHECK_NEAR(nocturne_mirror_projection_factor(), 9.0f, 1e-5f);
    at(kUnreconciled, 0);
    CHECK_NEAR(nocturne_mirror_projection_factor(), kDefaultFov, 1e-5f);
}

// Inside one, a live scale still at 0x10000 is pushViewport's, and the scale
// it was pushed over is the camera's.
NOCTURNE_TEST(inside_a_pushed_viewport_the_scale_pushed_over_counts) {
    at(kUnreconciled, 2, 0x18000);
    CHECK_NEAR(nocturne_mirror_projection_factor(), 12.0f, 1e-5f);
}

// A camera installed inside the window has set a real scale, and it counts.
NOCTURNE_TEST(a_camera_set_inside_the_window_counts) {
    at(0x8000, 1, 0x18000);
    CHECK_NEAR(nocturne_mirror_projection_factor(), 36.0f, 1e-5f);
}

NOCTURNE_TEST_MAIN()
