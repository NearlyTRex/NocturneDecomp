#pragma once

#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
float rayTriangleIntersection(CDemonTriangle *triangle, CVector3f *rayOrigin,
                              CVector3f *rayDirection);
void cylinderTriangleTest(CDemonTriangle *triangle, SIntersectXZCylinder *cylinder);
int rayTriangleFloorTest(CDemonTriangle *triangle, CVector3f *position, float search_radius,
                         float *out_height);

} // namespace nocturne::core
