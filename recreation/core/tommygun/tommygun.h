#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CTommyGun : public CWeapon {
public:
    static const CDemonActorType kType;

    CTommyGun();
    ~CTommyGun() override;

    void process(float delta_time) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void setWeaponState(int weapon_state) override;
    int fire() override;
    float getDamage() override;
};

} // namespace nocturne::core
