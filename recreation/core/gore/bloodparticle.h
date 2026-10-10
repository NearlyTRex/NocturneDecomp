#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/particle/particle.h"

namespace nocturne::core {

class CBloodParticle : public CParticle {
public:
    using CParticle::setup;

    CBloodParticle();
    ~CBloodParticle() override;

    void render() override;
    int onCollision(common::CVector3f *collision_normal) override;

    void setup(common::CVector3f *position, common::CVector3f *velocity, int blood_type);
    void setupRenderState();
};

} // namespace nocturne::core
