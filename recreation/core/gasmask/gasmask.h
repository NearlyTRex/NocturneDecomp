#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CGasMask : public CDemonActor {
public:
    CGasMask();
    ~CGasMask() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int canPickup(CDemonActor *picker) override;
    CDemonActorType *getActorType() override;
    void archive() override;
};

} // namespace nocturne::core
