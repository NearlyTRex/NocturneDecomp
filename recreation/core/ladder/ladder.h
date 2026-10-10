#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CLadder : public CDemonActor {
public:
    CLadder();
    ~CLadder() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    EGroundType getGroundType() override;
    CDemonActorType *getActorType() override;
    void archive() override;
};

} // namespace nocturne::core
