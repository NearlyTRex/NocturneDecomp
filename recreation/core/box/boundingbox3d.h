#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"
#include "core/fwd.h"

#include <cstdint>

namespace nocturne::core {

class CBoundingBox3D {
public:
    common::CVector3f min;
    common::CVector3f max;

    // Grows the box to take in the point.
    void expand(const common::CVector3f &point);
    // One of the eight corners: each of the index's lowest three bits takes the max for its axis,
    // x, y and z from the lowest up, and the min when clear.
    [[nodiscard]] common::CVector3f getCorner(std::uint32_t corner_index) const;
    int isVisible();
    float getBoundingBoxScreenSize();
    // Where the segment from ray_origin to ray_origin + ray_direction enters the box, as a fraction
    // of ray_direction: -1 when it misses, 0 when it starts inside. out_normal, when given, takes
    // the face it enters by, or the reversed direction normalised when it starts inside.
    [[nodiscard]] float doesRayIntersect(const common::CVector3f &ray_origin,
                                         const common::CVector3f &ray_direction,
                                         common::CVector3f *out_normal) const;
    void reset();
    int doesBoxIntersect(CBoundingBox3D *other);
    float getMaximumBound();
    void render();
    common::CVector3f *clampPoint(common::CVector3f *out_point, common::CVector3f *in_point);
    int doesSphereIntersect(common::CVector3f *sphere_center, float radius);

    static constexpr std::uint32_t kCorners = 8;

private:
    static constexpr std::uint32_t kCornerMaxX = 1;
    static constexpr std::uint32_t kCornerMaxY = 2;
    static constexpr std::uint32_t kCornerMaxZ = 4;
};

} // namespace nocturne::core
