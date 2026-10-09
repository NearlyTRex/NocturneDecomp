#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

namespace nocturne::core {

class CBulletHole {
public:
    void init(common::CVector3f *hit_position, common::CVector3f *surface_normal,
              CDemonActor *hit_actor);
    void process();
    void setupRenderState();
    void render();
};

} // namespace nocturne::core
