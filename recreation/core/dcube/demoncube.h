#pragma once

#include "core/fwd.h"

#include <cstdint>
#include <cstdio>

namespace nocturne::core {

class CDemonCube {
public:
    CDemonCube();
    ~CDemonCube();

    void allocVoxelMemory();
    void load(std::FILE *file_handle);
    void rotateVertices(std::uint32_t rendering_mode);
    float rayIntersectTriangles(CVector3f *ray_origin, CVector3f *ray_direction,
                                CVector3f *hit_normal, std::uint32_t *hit_material);
    void testCylinderCollision(SIntersectXZCylinder *cylinder);
    int testCylinderGroundCollision(CVector3f *cylinder_position, float cylinder_radius,
                                    CVector3f *output_height, CVector3f *output_normal,
                                    std::uint32_t *output_material);
};

} // namespace nocturne::core
