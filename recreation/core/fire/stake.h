#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

namespace nocturne::core {

class CStake {
public:
    CStake();
    ~CStake();

    void init(common::CVector3f *position, common::CVector3f *orientation);
    void spawn(common::CVector3f *spawn_position, common::CVector3f *orientation_angles,
               common::CVector3f *surface_normal);
    void render();
    void process();
};

} // namespace nocturne::core
