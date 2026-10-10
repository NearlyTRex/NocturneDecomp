#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
float rayTriangleIntersection(CDemonTriangle *triangle, common::CVector3f *rayOrigin,
                              common::CVector3f *rayDirection);
void cylinderTriangleTest(CDemonTriangle *triangle, SIntersectXZCylinder *cylinder);
int rayTriangleFloorTest(CDemonTriangle *triangle, common::CVector3f *position, float search_radius,
                         float *out_height);

} // namespace nocturne::core
