#pragma once

#include "core/charactr/character.h"
#include "core/fwd.h"

namespace nocturne::core {

class CBackgroundActor : public CCharacter {
public:
    CBackgroundActor();
    ~CBackgroundActor() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    void renderBackground(int layer_flag) override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    EGroundType getGroundType() override;
    CDemonActorType *getActorType() override;
    void archive() override;
};

} // namespace nocturne::core
