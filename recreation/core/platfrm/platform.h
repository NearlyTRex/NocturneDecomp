#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CPlatform : public CDemonActor {
public:
    CPlatform();
    ~CPlatform() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    void renderBackground(int layer_flag) override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    EGroundType getGroundType() override;
    int getBlockVirtualDirectorFlag() override;
    int allowBulletHoles() override;
    CDemonActorType *getActorType() override;
    void archive() override;

    void startMovement(float goal_param, float movement_rate);
    void attachActor(CDemonActor *actor);
};

} // namespace nocturne::core
