#pragma once

#include "common/fwd.h"
#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CVampireBoss : public CEnemy {
public:
    CVampireBoss();
    ~CVampireBoss() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    CDemonActorType *getActorType() override;
    void archive() override;
    void processDamage(SDamageInfo *damage_info) override;
    EDeathState getDeathState() override;
    common::CMatrix3x4f *getCarryObjToBodyXForm(int hand_index,
                                                common::CMatrix3x4f *out_matrix) override;
};

} // namespace nocturne::core
