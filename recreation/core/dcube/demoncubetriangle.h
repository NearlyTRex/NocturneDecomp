#pragma once

#include "common/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CDemonCubeTriangle {
public:
    void readFromFile(std::FILE *file_handle, common::CVector3f *vertex_buffer_base);
    float rayTriangleIntersection(common::CVector3f *ray_origin, common::CVector3f *ray_direction);
};

} // namespace nocturne::core
