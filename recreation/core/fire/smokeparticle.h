#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CSmokeParticle {
public:
    CSmokeParticle();
    ~CSmokeParticle();

    void setupRenderState();
    void reset();
    void init(CVector3f *position, float drag_factor, CVector3f *wind_influence, int alpha_value);
    void process();
    void render();
};

} // namespace nocturne::core
