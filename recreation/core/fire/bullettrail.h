#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CBulletTrail {
public:
    CBulletTrail();
    ~CBulletTrail();

    void process();
    void render();
};

} // namespace nocturne::core
