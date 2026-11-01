#pragma once

#include "common/math/vector3f.h"

namespace nocturne::core {

// The angles about x and y that turn the z axis to the direction, z's own left at zero; straight
// up or down is a quarter turn about x alone.
[[nodiscard]] common::CVector3f
convertDirectionVectorToEulerAngles(const common::CVector3f &in_direction_vector);

} // namespace nocturne::core
