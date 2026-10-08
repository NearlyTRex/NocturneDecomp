#pragma once

#include "core/fwd.h"
#include "core/particle/particle.h"

namespace nocturne::core {

class CBloodParticle : public CParticle {
public:
    using CParticle::setup;

    CBloodParticle();
    ~CBloodParticle() override;

    void render() override;
    int onCollision(CVector3f *collision_normal) override;

    void setup(CVector3f *position, CVector3f *velocity, int blood_type);
    void setupRenderState();
};

} // namespace nocturne::core
