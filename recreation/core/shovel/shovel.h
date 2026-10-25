#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CShovel : public CWeapon {
public:
    static const CDemonActorType kType;

    CShovel();
    ~CShovel() override;

    [[nodiscard]] const CDemonActorType &getActorType() const override;
    int fire() override;
    float getDamage() override;
    void renderAimBeam() override;
};

} // namespace nocturne::core
