#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CBulletHole {
public:
    CBulletHole();
    ~CBulletHole();

    void init(CVector3f *hit_position, CVector3f *surface_normal, CDemonActor *hit_actor);
    void process();
    void setupRenderState();
    void render();
};

} // namespace nocturne::core
