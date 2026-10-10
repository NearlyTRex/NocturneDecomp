#pragma once

#include "common/fwd.h"
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
    int onCollision(common::CVector3f *collision_normal) override;

    void setup(common::CVector3f *position, common::CVector3f *velocity,
               CKeyFramedModel *model_ptr);
};

} // namespace nocturne::core
