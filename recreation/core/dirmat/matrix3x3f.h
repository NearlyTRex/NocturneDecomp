#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CMatrix3x3f {
public:
    void buildRotationMatrix(CVector3f *euler_angles);
    CVector3f *transformVector(CVector3f *output, CVector3f *input);
    CVector3f *transformVectorTranspose(CVector3f *output, CVector3f *input);
    CVector3f *getEulerAngles(CVector3f *euler_angles);
};

} // namespace nocturne::core
