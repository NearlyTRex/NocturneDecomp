#pragma once

namespace nocturne::platform {

// A vertex through the camera transform and the projection.
struct SProjectedVertex {
    // Eye-space depth.
    int transformed_z = 0;
    // 16.16 pixels.
    int screen_x = 0;
    int screen_y = 0;
};

} // namespace nocturne::platform
