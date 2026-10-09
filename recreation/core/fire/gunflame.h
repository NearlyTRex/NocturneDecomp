#pragma once

#include "common/fwd.h"

namespace nocturne::core {

class CGunFlame {
public:
    void reset();
    void activate(common::CVector3f *position, common::CVector3f *euler_angles, int flame_type);
    void process();
    void render();
};

} // namespace nocturne::core
