#pragma once

#include "core/fwd.h"
#include "core/particle/particle.h"

namespace nocturne::core {

class CFireball : public CParticle {
public:
    CFireball();
    ~CFireball() override;

    void process() override;
    void render() override;
    int onCollision(CVector3f *collision_normal) override;

    void setupRenderState();
};

} // namespace nocturne::core
