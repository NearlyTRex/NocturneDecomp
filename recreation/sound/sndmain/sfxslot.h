#pragma once

#include "sound/fwd.h"

namespace nocturne::sound {

class CSfxSlot {
public:
    CSfxSlot();
    ~CSfxSlot();

    int compute(float delta_time);
    void mix(SMixBuffer mix_buffer);
    void kill();
    void pollHwHandle();
    int pollHwPlaybackPos();
    void seek();
};

} // namespace nocturne::sound
