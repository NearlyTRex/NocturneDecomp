#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/particle/particle.h"

namespace nocturne::core {

class CShell : public CParticle {
public:
    using CParticle::setup;

    CShell();
    ~CShell() override;

    void process() override;
    void render() override;
    int onCollision(common::CVector3f *collision_normal) override;

    void setup(common::CVector3f *position, common::CVector3f *euler_angles,
               common::CVector3f *velocity, CKeyFramedModel *model_ptr);
};

} // namespace nocturne::core
