#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CEmitter : public CDemonActor {
public:
    CEmitter();
    ~CEmitter() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    void renderBackground(int layer_flag) override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    CDemonActorType *getActorType() override;
    void archive() override;

    void launchFireballAtHero();
};

} // namespace nocturne::core
