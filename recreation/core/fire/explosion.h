#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

namespace nocturne::core {

class CExplosion {
public:
    CExplosion();

    void activate(common::CVector3f *position, float scale, float gore_multiplier);
    void process();
    void render();
};

} // namespace nocturne::core
