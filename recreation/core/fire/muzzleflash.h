#pragma once

#include "common/fwd.h"

namespace nocturne::core {

class CMuzzleFlash {
public:
    void init(common::CVector3f *position, common::CMatrix3x3f *rotation_matrix);
    void process();
    void render();
};

} // namespace nocturne::core
