#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CParticle {
public:
    CParticle();
    virtual ~CParticle();

    virtual void setup(CVector3f *position, CVector3f *velocity);
    virtual void process();
    virtual void render();
    virtual int onCollision(CVector3f *collision_normal);
};

} // namespace nocturne::core
