#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CShotgun : public CWeapon {
public:
    static const CDemonActorType kType;

    explicit CShotgun(CActor &classes);
    ~CShotgun() override;

    void process(float delta_time) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void onFired() override;
    int fire() override;
    float getDamage() override;
    void renderAimBeam() override;
};

} // namespace nocturne::core
