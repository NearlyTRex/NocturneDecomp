#pragma once

#include "common/fwd.h"
#include "core/charactr/character.h"
#include "core/fwd.h"

namespace nocturne::core {

class CEnemy : public CCharacter {
public:
    CEnemy();
    ~CEnemy() override;

    void setup() override;
    void renderBackground(int layer_flag) override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    void archive() override;
    void releaseVictim() override;
    void onVictimLost(CDemonActor *lost_actor) override;
    void processDamage(SDamageInfo *damage_info) override;
    virtual common::CVector3f *getTargetPoint(common::CVector3f *out_point);
    virtual void updateVictim(float delta_time);

    int testAttackRadius(common::CVector3f *point, float radius, SDamageInfo *damage_info);
    int testAttackLine(common::CVector3f *start, common::CVector3f *end, SDamageInfo *damage_info);
    int canSeeTarget(CDemonActor *target);
    void setVictim(CDemonActor *victim);
    int updatePatrol(float delta_time);
};

} // namespace nocturne::core
