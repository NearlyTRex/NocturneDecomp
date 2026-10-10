#pragma once

#include "common/fwd.h"
#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CFlameCan : public CDemonActor {
public:
    CFlameCan();
    ~CFlameCan() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    CDemonActorType *getActorType() override;
    void archive() override;

    void ignite();
};

} // namespace nocturne::core
