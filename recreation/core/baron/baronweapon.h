#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CBaronWeapon : public CWeapon {
public:
    CBaronWeapon();
    ~CBaronWeapon() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CDemonActorType *getActorType() override;
    void setWeaponState(int weapon_state) override;
    int fire() override;
    int isReadyToFire() override;
    void renderAimBeam() override;
};

} // namespace nocturne::core
