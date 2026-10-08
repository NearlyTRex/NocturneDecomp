#pragma once

#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
CBodyPart *createBodyPart(CVector3f *position, UOrientationVector *orientation,
                          CVector3f *initial_velocity, CDemonActor *scale_source,
                          int dont_use_normals, int is_transparent, int blood_type);
CBodyPart *factoryFuncBodyPart();
CVector3f *scaleVector(CVector3f *src, CVector3f *dst, float *scalar);
CVector3f *subtractVector(CVector3f *a, CVector3f *dst, CVector3f *b);
CVector3f *addVector(CVector3f *a, CVector3f *dst, CVector3f *b);

} // namespace nocturne::core
