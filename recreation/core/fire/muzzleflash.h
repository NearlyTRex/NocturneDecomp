#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CMuzzleFlash {
public:
    CMuzzleFlash();
    ~CMuzzleFlash();

    void init(CVector3f *position, CMatrix3x3f *rotation_matrix);
    void process();
    void render();
};

} // namespace nocturne::core
