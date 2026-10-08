#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CStake {
public:
    CStake();
    ~CStake();

    void init(CVector3f *position, CVector3f *orientation);
    void spawn(CVector3f *spawn_position, CVector3f *orientation_angles, CVector3f *surface_normal);
    void render();
    void process();
};

} // namespace nocturne::core
