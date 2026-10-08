#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CLightGun : public CWeapon {
public:
    CLightGun();
    ~CLightGun() override;

    void process(float delta_time) override;
    CDemonActorType *getActorType() override;
    int fire() override;
    float getDamage() override;
    void renderAimBeam() override;
};

} // namespace nocturne::core
