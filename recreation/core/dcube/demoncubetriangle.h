#pragma once

#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CDemonCubeTriangle {
public:
    void readFromFile(std::FILE *file_handle, CVector3f *vertex_buffer_base);
    float rayTriangleIntersection(CVector3f *ray_origin, CVector3f *ray_direction);
};

} // namespace nocturne::core
