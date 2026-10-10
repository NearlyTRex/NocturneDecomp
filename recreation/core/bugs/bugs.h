#pragma once

#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CBugs : public CEnemy {
public:
    CBugs();
    ~CBugs() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    CDemonActorType *getActorType() override;
    void archive() override;
    void processDamage(SDamageInfo *damage_info) override;
    EDeathState getDeathState() override;
};

} // namespace nocturne::core
