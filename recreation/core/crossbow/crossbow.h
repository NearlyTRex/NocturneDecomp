#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CCrossbow : public CWeapon {
public:
    CCrossbow();
    ~CCrossbow() override;

    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    CDemonActorType *getActorType() override;
    CVector3f *getMuzzlePoint(CVector3f *out_point) override;
    int fire() override;
    float getDamage() override;
};

} // namespace nocturne::core
