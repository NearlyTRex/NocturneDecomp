#pragma once

#include "platform/projectedvertex.h"

namespace nocturne::platform {

// A vertex as the engine hands it to the hardware renderer.
struct SRenderVertex {
    SProjectedVertex projected_vertex;
    // 8.24.
    int u = 0;
    int v = 0;
    // 8.8.
    int r = 0;
    int g = 0;
    int b = 0;
    int a = 0;
};

} // namespace nocturne::platform
