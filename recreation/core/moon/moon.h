#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CMoon {
public:
    CMoon();
    ~CMoon();

    void init();
    void free();
    void update(float delta_time);
    void render();
    void renderJoystickCalibration();
    int isAnimationFirstHalf();
};

} // namespace nocturne::core
