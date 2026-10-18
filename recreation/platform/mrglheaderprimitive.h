#pragma once

#include "platform/clipplane.h"

#include <vector>

namespace nocturne::platform {

// A polygon whose corners are drawn as the vertex buffer holds them. The MRGL record is a header
// followed by as many corner indices as its count says; here the indices are the record's own.
struct SMRGLHeaderPrimitive {
    // The polygon's plane, as calculateSurfaceNormal finds it.
    SClipPlane surface_normal;
    // Into the vertex buffer, whose corners keep their own texture coordinates.
    std::vector<int> vertex_indices;
};

} // namespace nocturne::platform
