#pragma once

#include "common/fwd.h"
#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CHotDemon : public CEnemy {
public:
    CHotDemon();
    ~CHotDemon() override;

    void setup() override;
    void process(float delta_time) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    CDemonActorType *getActorType() override;
    void archive() override;
    void processDamage(SDamageInfo *damage_info) override;
    EDeathState getDeathState() override;
};

} // namespace nocturne::core
