#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CGunFlame {
public:
    CGunFlame();
    ~CGunFlame();

    void reset();
    void activate(CVector3f *position, CVector3f *euler_angles, int flame_type);
    void process();
    void render();
};

} // namespace nocturne::core
