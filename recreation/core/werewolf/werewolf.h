#pragma once

#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CWerewolf : public CEnemy {
public:
    CWerewolf();
    ~CWerewolf() override;

    void setup() override;
    void process(float delta_time) override;
    int renderTransparent() override;
    int getTargetPoints(CVector3f *out_points_array) override;
    CDemonActorType *getActorType() override;
    void archive() override;
    void processDamage(SDamageInfo *damage_info) override;
    EDeathState getDeathState() override;
    void setWalkTarget(CDemonActor *target, float min_distance, float max_distance) override;
};

} // namespace nocturne::core
