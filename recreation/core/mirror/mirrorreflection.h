#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CMirrorReflection {
public:
    void setupMirrorReflection(CVector3f *camera_position, CVector3f *camera_rotation,
                               float projection_scale);
    CVector3i *transformMirrorVertex(CVector3i *input_vertex, CVector3i *output_vertex);
    CVector3i *transformMirrorEdgeToIntegerSpace(CVector3i *point_a, CVector3i *point_b,
                                                 CVector3i *output);
};

} // namespace nocturne::core
