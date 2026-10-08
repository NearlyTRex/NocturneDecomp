#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CGlass : public CDemonActor {
public:
    CGlass();
    ~CGlass() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    void renderBackground(int layer_flag) override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    EGroundType getGroundType() override;
    void onLaserHit(SLaserInfo *laser_info) override;
    CDemonActorType *getActorType() override;
    void archive() override;

    void renderBrokenGlass();
    void shatter(CVector3f *location);
    int checkBreakableCondition();
};

} // namespace nocturne::core
