#pragma once

#include "core/fwd.h"
#include "core/particle/particle.h"

namespace nocturne::core {

class CRock : public CParticle {
public:
    using CParticle::setup;

    CRock();
    ~CRock() override;

    void process() override;
    void render() override;
    int onCollision(CVector3f *collision_normal) override;

    void setup(CVector3f *position, CVector3f *velocity, CKeyFramedModel *model_ptr);
};

} // namespace nocturne::core
