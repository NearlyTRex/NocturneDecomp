#pragma once

#include "core/fwd.h"

#include <cstdint>

namespace nocturne::core {

class CBoundingBox3D {
public:
    CBoundingBox3D();
    CBoundingBox3D(const CBoundingBox3D &other);
    ~CBoundingBox3D();

    void expand(CVector3f *point);
    CVector3f *getCorner(CVector3f *out_point, std::uint32_t corner_index);
    int isVisible();
    float getBoundingBoxScreenSize();
    float doesRayIntersect(CVector3f *ray_origin, CVector3f *ray_direction, CVector3f *out_normal);
    void reset();
    int doesBoxIntersect(CBoundingBox3D *other);
    float getMaximumBound();
    void render();
    CVector3f *clampPoint(CVector3f *out_point, CVector3f *in_point);
    int doesSphereIntersect(CVector3f *sphere_center, float radius);
};

} // namespace nocturne::core
