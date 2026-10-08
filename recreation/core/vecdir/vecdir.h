#pragma once

#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
CVector3f *convertDirectionVectorToEulerAngles(CVector3f *out_euler_angles,
                                               CVector3f *in_direction_vector);

} // namespace nocturne::core
