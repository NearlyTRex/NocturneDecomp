#pragma once

#include "common/fwd.h"

namespace nocturne::core {

class CDemonGlobe {
public:
    void setPosition(common::CVector3f *position);
    void precomputeAttenuation(float radius);
    void renderCorona();
    void renderCoronaTextured();
    int intersectAABB(common::CVector3f *reference_position, common::CMatrix3x3f *rotation_matrix,
                      common::CVector3f *aabb_min, common::CVector3f *aabb_max);
    int getAttenuationAtVertex(common::CVector3i *vertex_position,
                               common::CVector3i *surface_normal);
};

} // namespace nocturne::core
