#pragma once

#include "common/fwd.h"
#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CTrigger : public CDemonActor {
public:
    CTrigger();
    ~CTrigger() override;

    void setup() override;
    void process(float delta_time) override;
    int renderTransparent() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    float evaluateTriggerCondition(CDemonActor *querying_actor,
                                   common::CVector3f *query_position) override;
    int processActionButton() override;
    void onLaserHit(SLaserInfo *laser_info) override;
    CDemonActorType *getActorType() override;
    void archive() override;

    void onProjectileHit();
    int acceptsDamageFrom(CDemonActor *actor);
    void applyDamage(float hit_points);
};

} // namespace nocturne::core
