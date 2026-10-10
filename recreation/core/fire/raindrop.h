#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/particle/particle.h"

namespace nocturne::core {

class CRainDrop : public CParticle {
public:
    CRainDrop();
    ~CRainDrop() override;

    void render() override;
    int onCollision(common::CVector3f *collision_normal) override;
};

} // namespace nocturne::core
