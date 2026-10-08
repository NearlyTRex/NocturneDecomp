#pragma once

#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CZombie : public CEnemy {
public:
    CZombie();
    ~CZombie() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    int getTargetPoints(CVector3f *out_points_array) override;
    int shouldIgnoreForTargeting() override;
    CDemonActorType *getActorType() override;
    void archive() override;
    int isGrabbable(CDemonActor *grabber) override;
    int canBeGrabbed(CDemonActor *grabber, int grab_type) override;
    int getGrabbed(CDemonActor *grabber, int grab_type) override;
    void processDamage(SDamageInfo *damage_info) override;
    int canBeAttracted(CVector3f *out_attract_position) override;
    CMatrix3x4f *getCarryObjToBodyXForm(int hand_index, CMatrix3x4f *out_matrix) override;
};

} // namespace nocturne::core
