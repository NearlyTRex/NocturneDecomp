#pragma once

#include "common/fwd.h"

namespace nocturne::common {

class CMatrix3x3f {
public:
    void buildRotationMatrix(CVector3f *euler_angles);
    CVector3f *transformVector(CVector3f *output, CVector3f *input);
    CVector3f *transformVectorTranspose(CVector3f *output, CVector3f *input);
    CVector3f *getEulerAngles(CVector3f *euler_angles);
};

} // namespace nocturne::common
