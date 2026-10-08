#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CLever : public CDemonActor {
public:
    CLever();
    ~CLever() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    CDemonActorType *getActorType() override;
    void archive() override;

    void setState(float new_state);
    void activate();
    CVector3f *getHandlePosition(CVector3f *out_position);
    int isAccessibleFrom(CVector3f *world_position);
};

} // namespace nocturne::core
