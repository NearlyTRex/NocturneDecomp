#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CFlashlight : public CWeapon {
public:
    CFlashlight();
    ~CFlashlight() override;

    CDemonActorType *getActorType() override;
    int fire() override;
    float getDamage() override;
};

} // namespace nocturne::core
