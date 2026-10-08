#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CExplosion {
public:
    CExplosion();
    ~CExplosion();

    void activate(CVector3f *position, float scale, float gore_multiplier);
    void process();
    void render();
};

} // namespace nocturne::core
