#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CDemonGlobe {
public:
    CDemonGlobe();
    ~CDemonGlobe();

    void setPosition(CVector3f *position);
    void precomputeAttenuation(float radius);
    void renderCorona();
    void renderCoronaTextured();
    int intersectAABB(CVector3f *reference_position, CMatrix3x3f *rotation_matrix,
                      CVector3f *aabb_min, CVector3f *aabb_max);
    int getAttenuationAtVertex(CVector3i *vertex_position, CVector3i *surface_normal);
};

} // namespace nocturne::core
