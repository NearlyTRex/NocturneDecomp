#pragma once

#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
CHero *closestHeroToPoint(CLocation *location);
int isAnyHeroWithinRadius(CVector3f *point, float radius);
int isAnyHeroWithinCylinder(CVector3f *point, float horizontal_radius, float vertical_tolerance);
CHeroPlaceholder *factoryFuncHeroPlaceholder();

} // namespace nocturne::core
