#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CCurtain : public CDemonActor {
public:
    CCurtain();
    ~CCurtain() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int getBlockVirtualDirectorFlag() override;
    CDemonActorType *getActorType() override;
    void archive() override;
};

} // namespace nocturne::core
