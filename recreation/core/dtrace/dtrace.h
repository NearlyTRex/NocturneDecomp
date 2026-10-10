#pragma once

#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
void initIntersectionCylinder(SIntersectXZCylinder *this_ptr, float start_x, float start_z,
                              float dir_x, float dir_z, float radius, float bottom_y, float top_y);

} // namespace nocturne::core
