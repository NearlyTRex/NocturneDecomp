#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CCrossbow : public CWeapon {
public:
    static const CDemonActorType kType;

    CCrossbow();
    ~CCrossbow() override;

    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    common::CVector3f *getMuzzlePoint(common::CVector3f *out_point) override;
    int fire() override;
    float getDamage() override;
};

} // namespace nocturne::core
