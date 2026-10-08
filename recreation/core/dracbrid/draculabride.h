#pragma once

#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CDraculaBride : public CEnemy {
public:
    CDraculaBride();
    ~CDraculaBride() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int getTargetPoints(CVector3f *out_points_array) override;
    CDemonActorType *getActorType() override;
    void archive() override;
    void processDamage(SDamageInfo *damage_info) override;
    EDeathState getDeathState() override;
};

} // namespace nocturne::core
