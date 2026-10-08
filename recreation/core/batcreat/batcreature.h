#pragma once

#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CBatCreature : public CEnemy {
public:
    CBatCreature();
    ~CBatCreature() override;

    void setup() override;
    void process(float delta_time) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int getTargetPoints(CVector3f *out_points_array) override;
    CDemonActorType *getActorType() override;
    void archive() override;
    void processDamage(SDamageInfo *damage_info) override;
};

} // namespace nocturne::core
