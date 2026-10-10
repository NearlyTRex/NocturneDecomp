#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CShotgun : public CWeapon {
public:
    CShotgun();
    ~CShotgun() override;

    void process(float delta_time) override;
    CDemonActorType *getActorType() override;
    void onFired() override;
    int fire() override;
    float getDamage() override;
    void renderAimBeam() override;
};

} // namespace nocturne::core
