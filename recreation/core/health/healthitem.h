#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CHealthItem : public CDemonActor {
public:
    CHealthItem();
    ~CHealthItem() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    void onPickup(CDemonActor *owner) override;
    int canPickup(CDemonActor *picker) override;
    CDemonActorType *getActorType() override;
    void archive() override;

    int useItem(CCharacter *user);
};

} // namespace nocturne::core
