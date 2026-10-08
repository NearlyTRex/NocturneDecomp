#pragma once

#include "core/fwd.h"

namespace nocturne::core {

void computeSplineBasis(float *out_basis, float t, float tension);
CVector3f *evaluateSplinePoint3D(float *basis, CVector3f *out, CVector3f *p0, CVector3f *p1,
                                 CVector3f *p2, CVector3f *p3);
CVector3f *evaluateSplineTangent3D(float *basis, CVector3f *out, CVector3f *p0, CVector3f *p1,
                                   CVector3f *p2, CVector3f *p3);

} // namespace nocturne::core
