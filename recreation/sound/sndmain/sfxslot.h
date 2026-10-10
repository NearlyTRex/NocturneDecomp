#pragma once

#include "sound/fwd.h"

namespace nocturne::sound {

class CSfxSlot {
public:
    CSfxSlot();

    int compute(float delta_time);
    void kill();
    void seek();
};

} // namespace nocturne::sound
