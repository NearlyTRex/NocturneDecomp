#pragma once

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
    float customRayIntersect(CVector3f *ray_origin, CVector3f *ray_direction,
                             CVector3f *out_normal) override;
    void customIntersectCylinderXZ(SIntersectXZCylinder *cylinder) override;
    int customGetFloorHeight(CVector3f *position, float search_radius,
                             float *out_floor_height) override;
    CDemonActorType *getActorType() override;
    void archive() override;
};

} // namespace nocturne::core
