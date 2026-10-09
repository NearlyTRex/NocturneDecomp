#pragma once

#include "common/fwd.h"

namespace nocturne::core {

class CSmokeParticle {
public:
    void setupRenderState();
    void reset();
    void init(common::CVector3f *position, float drag_factor, common::CVector3f *wind_influence,
              int alpha_value);
    void process();
    void render();
};

} // namespace nocturne::core
