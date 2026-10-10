#pragma once

#include "common/fwd.h"

namespace nocturne::core {

void computeSplineBasis(float *out_basis, float t, float tension);
common::CVector3f *evaluateSplinePoint3D(float *basis, common::CVector3f *out,
                                         common::CVector3f *p0, common::CVector3f *p1,
                                         common::CVector3f *p2, common::CVector3f *p3);
common::CVector3f *evaluateSplineTangent3D(float *basis, common::CVector3f *out,
                                           common::CVector3f *p0, common::CVector3f *p1,
                                           common::CVector3f *p2, common::CVector3f *p3);

} // namespace nocturne::core
