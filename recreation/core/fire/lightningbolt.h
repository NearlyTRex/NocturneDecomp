#pragma once

#include "common/fwd.h"

namespace nocturne::core {

class CLightningBolt {
public:
    void reset();
    void activate(common::CVector3f *start_position, float start_width, float end_width);
    void activateDirectional(common::CVector3f *start_position, common::CVector3f *end_position,
                             float end_width, float end_spread);
    void process();
    void render();
};

} // namespace nocturne::core
