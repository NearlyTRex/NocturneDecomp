#pragma once

#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CGhoul : public CEnemy {
public:
    CGhoul();
    ~CGhoul() override;

    void setup() override;
    void process(float delta_time) override;
    void renderBackground(int layer_flag) override;
    int getTargetPoints(CVector3f *out_points_array) override;
    CDemonActorType *getActorType() override;
    void archive() override;
    void processDamage(SDamageInfo *damage_info) override;
    int canBeAttracted(CVector3f *out_attract_position) override;
    CVector3f *getTargetPoint(CVector3f *out_point) override;
};

} // namespace nocturne::core
