#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

namespace nocturne::core {

class CFootstep {
public:
    CFootstep();
    ~CFootstep();

    void init(common::CVector3f *position, common::UOrientationVector *orientation, int is_bloody,
              int alpha, int blood_type);
    void render(int expire_flag);
};

} // namespace nocturne::core
