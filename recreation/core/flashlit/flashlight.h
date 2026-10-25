#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CFlashlight : public CWeapon {
public:
    static const CDemonActorType kType;

    CFlashlight();
    ~CFlashlight() override;

    [[nodiscard]] const CDemonActorType &getActorType() const override;
    int fire() override;
    float getDamage() override;
};

} // namespace nocturne::core
