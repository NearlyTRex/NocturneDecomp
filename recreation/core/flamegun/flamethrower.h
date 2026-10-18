#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CFlameThrower : public CWeapon {
public:
    CFlameThrower();
    ~CFlameThrower() override;

    void process(float delta_time) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    int fire() override;
    float getDamage() override;
    void renderAimBeam() override;
};

} // namespace nocturne::core
