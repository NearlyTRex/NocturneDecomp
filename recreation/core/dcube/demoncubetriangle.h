#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"

#include <array>
#include <cstdint>

namespace nocturne::core {

// One of a cube's triangles: three of the cube's vertices and the triangle's plane.
class CDemonCubeTriangle {
public:
    // Three indices into the cube's vertices, the plane's normal and distance, and the axis the
    // normal leans furthest along.
    void readFromFile(common::CBinaryReader &reader);
    float rayTriangleIntersection(common::CVector3f *ray_origin, common::CVector3f *ray_direction);

    // As the file gives them, unchecked against the cube's vertex count.
    [[nodiscard]] const std::array<int, 3> &getVertexIndices() const;
    [[nodiscard]] const common::CVector3f &getNormal() const;
    [[nodiscard]] float getPlaneDistance() const;
    [[nodiscard]] std::uint32_t getDominantAxis() const;

private:
    std::array<int, 3> vertex_indices_{};
    common::CVector3f normal_;
    float plane_distance_ = 0.0F;
    std::uint32_t dominant_axis_ = 0;
};

} // namespace nocturne::core
