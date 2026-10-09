#pragma once

#include "common/fwd.h"
#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CTentacle : public CEnemy {
public:
    CTentacle();
    ~CTentacle() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int shouldIgnoreForTargeting() override;
    CDemonActorType *getActorType() override;
    void archive() override;
    int attractActorToward(CDemonActor *actor, common::CVector3f *target_local_point) override;
};

} // namespace nocturne::core
