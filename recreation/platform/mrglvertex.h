#pragma once

namespace nocturne::platform {

// A polygon's corner: a shared vertex, and the texture coordinates this polygon gives it.
struct SMRGLVertex {
    // Into the vertex buffer the polygon is drawn with.
    int vertex_index = 0;
    // 8.24.
    int texture_u = 0;
    int texture_v = 0;
};

} // namespace nocturne::platform
