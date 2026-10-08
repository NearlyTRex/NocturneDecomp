#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CFootstep {
public:
    CFootstep();
    ~CFootstep();

    void init(CVector3f *position, UOrientationVector *orientation, int is_bloody, int alpha,
              int blood_type);
    void render(int expire_flag);
};

} // namespace nocturne::core
