#pragma once

#include "core/fwd.h"
#include "core/particle/particle.h"

namespace nocturne::core {

class CPopcorn : public CParticle {
public:
    CPopcorn();
    ~CPopcorn() override;

    void render() override;
    int onCollision(CVector3f *collision_normal) override;
};

} // namespace nocturne::core
