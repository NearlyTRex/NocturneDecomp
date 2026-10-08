#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CLightningBolt {
public:
    CLightningBolt();
    ~CLightningBolt();

    void reset();
    void activate(CVector3f *start_position, float start_width, float end_width);
    void activateDirectional(CVector3f *start_position, CVector3f *end_position, float end_width,
                             float end_spread);
    void process();
    void render();
};

} // namespace nocturne::core
