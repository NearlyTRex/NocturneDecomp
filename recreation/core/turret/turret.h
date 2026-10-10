#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CTurret : public CWeapon {
public:
    CTurret();
    ~CTurret() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    int canPickup(CDemonActor *picker) override;
    void getInteractionInfo(SInteractionInfo *out_info) override;
    int startInteraction(CDemonActor *user) override;
    int updateInteraction(common::UOrientationVector *user_orientation,
                          SPlayerInput *player_control) override;
    void stopInteraction(CDemonActor *user) override;
    CDemonActorType *getActorType() override;
    void archive() override;
    common::CVector3f *getMuzzlePoint(common::CVector3f *out_point) override;
    int fire() override;
    float getDamage() override;
};

} // namespace nocturne::core
