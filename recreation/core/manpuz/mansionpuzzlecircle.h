#pragma once

#include "common/fwd.h"
#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CMansionPuzzleCircle : public CDemonActor {
public:
    CMansionPuzzleCircle();
    ~CMansionPuzzleCircle() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    void onLaserHit(SLaserInfo *laser_info) override;
    float customRayIntersect(common::CVector3f *ray_origin, common::CVector3f *ray_direction,
                             common::CVector3f *out_normal) override;
    void customIntersectCylinderXZ(SIntersectXZCylinder *cylinder) override;
    int customGetFloorHeight(common::CVector3f *position, float search_radius,
                             float *out_floor_height) override;
    CDemonActorType *getActorType() override;
    void archive() override;
};

} // namespace nocturne::core
