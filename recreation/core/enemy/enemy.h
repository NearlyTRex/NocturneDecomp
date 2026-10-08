#pragma once

#include "core/charactr/character.h"
#include "core/fwd.h"

namespace nocturne::core {

class CEnemy : public CCharacter {
public:
    CEnemy();
    ~CEnemy() override;

    void setup() override;
    void renderBackground(int layer_flag) override;
    int getTargetPoints(CVector3f *out_points_array) override;
    void archive() override;
    void releaseVictim() override;
    void onVictimLost(CDemonActor *lost_actor) override;
    void processDamage(SDamageInfo *damage_info) override;
    virtual CVector3f *getTargetPoint(CVector3f *out_point);
    virtual void updateVictim(float delta_time);
    virtual void randomize();

    int testAttackRadius(CVector3f *point, float radius, SDamageInfo *damage_info);
    int testAttackLine(CVector3f *start, CVector3f *end, SDamageInfo *damage_info);
    int canSeeTarget(CDemonActor *target);
    void setVictim(CDemonActor *victim);
    int updatePatrol(float delta_time);
};

} // namespace nocturne::core
