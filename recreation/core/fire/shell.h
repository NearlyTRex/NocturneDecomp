#pragma once

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
    int onCollision(CVector3f *collision_normal) override;

    void setup(CVector3f *position, CVector3f *euler_angles, CVector3f *velocity,
               CKeyFramedModel *model_ptr);
};

} // namespace nocturne::core
