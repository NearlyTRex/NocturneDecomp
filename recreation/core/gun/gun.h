#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CGun : public CWeapon {
public:
    CGun();
    ~CGun() override;

    [[nodiscard]] const CDemonActorType &getActorType() const override;
    int fire() override;
    float getDamage() override;
};

} // namespace nocturne::core
