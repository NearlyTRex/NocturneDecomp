#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CCryptVessel : public CDemonActor {
public:
    CCryptVessel();
    ~CCryptVessel() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    void renderBackground(int layer_flag) override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int canPickup(CDemonActor *picker) override;
    void pickup(CDemonActor *carrier) override;
    void onDropped(CVector3f *drop_position) override;
    CDemonActor *getCarrier() override;
    CDemonActorType *getActorType() override;
    void archive() override;
};

} // namespace nocturne::core
