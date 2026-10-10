#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

namespace nocturne::core {

class CParticle {
public:
    CParticle();
    virtual ~CParticle();

    virtual void setup(common::CVector3f *position, common::CVector3f *velocity);
    virtual void process();
    virtual void render();
    virtual int onCollision(common::CVector3f *collision_normal);
};

} // namespace nocturne::core
