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
    common::CVector3f *getCorner(common::CVector3f *out_point, std::uint32_t corner_index);
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
};

} // namespace nocturne::core
