#pragma once

#include "common/fwd.h"
#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CMirrorHack : public CDemonActor {
public:
    CMirrorHack();
    ~CMirrorHack() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    void getInteractionInfo(SInteractionInfo *out_info) override;
    int startInteraction(CDemonActor *user) override;
    int updateInteraction(common::UOrientationVector *user_orientation,
                          SPlayerInput *player_control) override;
    void stopInteraction(CDemonActor *user) override;
    void onLaserHit(SLaserInfo *laser_info) override;
    CDemonActorType *getActorType() override;
};

} // namespace nocturne::core
