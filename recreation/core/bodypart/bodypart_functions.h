#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
CBodyPart *createBodyPart(common::CVector3f *position, common::UOrientationVector *orientation,
                          common::CVector3f *initial_velocity, CDemonActor *scale_source,
                          int dont_use_normals, int is_transparent, int blood_type);
CBodyPart *factoryFuncBodyPart();
common::CVector3f *scaleVector(common::CVector3f *src, common::CVector3f *dst, float *scalar);
common::CVector3f *subtractVector(common::CVector3f *a, common::CVector3f *dst,
                                  common::CVector3f *b);
common::CVector3f *addVector(common::CVector3f *a, common::CVector3f *dst, common::CVector3f *b);

} // namespace nocturne::core
