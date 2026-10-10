#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CDynamite : public CWeapon {
public:
    CDynamite();
    ~CDynamite() override;

    void process(float delta_time) override;
    CDemonActorType *getActorType() override;
    int fire() override;
    float getDamage() override;
    void renderAimBeam() override;

    void lightFuse();
    int isFuseLit();
    int isFuseBurnedOut();
};

} // namespace nocturne::core
