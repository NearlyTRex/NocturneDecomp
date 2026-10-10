#pragma once

#include "common/fwd.h"

namespace nocturne::core {

void staticInit();
common::CVector3f *convertDirectionVectorToEulerAngles(common::CVector3f *out_euler_angles,
                                                       common::CVector3f *in_direction_vector);

} // namespace nocturne::core
