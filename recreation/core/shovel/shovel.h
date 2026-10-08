#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CShovel : public CWeapon {
public:
    CShovel();
    ~CShovel() override;

    CDemonActorType *getActorType() override;
    int fire() override;
    float getDamage() override;
    void renderAimBeam() override;
};

} // namespace nocturne::core
