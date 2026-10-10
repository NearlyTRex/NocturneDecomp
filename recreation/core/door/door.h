#pragma once

#include "common/fwd.h"
#include "core/actor/demonactor.h"
#include "core/fwd.h"

#include <cstdint>

namespace nocturne::core {

class CDoor : public CDemonActor {
public:
    CDoor();
    ~CDoor() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    void renderBackground(int layer_flag) override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    EGroundType getGroundType() override;
    int getBlockVirtualDirectorFlag() override;
    int allowBulletHoles() override;
    void updateCollisionData() override;
    CDemonActorType *getActorType() override;
    void archive() override;

    void onOpened();
    void setSwingRange(float swing_range);
    common::CVector3f *getOpenStandPos(common::CVector3f *out_pos, common::CVector3f *direction,
                                       common::CVector3f *actor_pos);
    int getMoveType(CDemonActor *opener);
    std::uint32_t onLocked();
};

} // namespace nocturne::core
