#pragma once

#include "common/fwd.h"

namespace nocturne::core {

class CMirrorReflection {
public:
    void setupMirrorReflection(common::CVector3f *camera_position,
                               common::CVector3f *camera_rotation, float projection_scale);
    common::CVector3i *transformMirrorVertex(common::CVector3i *input_vertex,
                                             common::CVector3i *output_vertex);
    common::CVector3i *transformMirrorEdgeToIntegerSpace(common::CVector3i *point_a,
                                                         common::CVector3i *point_b,
                                                         common::CVector3i *output);
};

} // namespace nocturne::core
