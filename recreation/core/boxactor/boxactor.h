#pragma once

#include "common/fwd.h"
#include "core/charactr/character.h"
#include "core/fwd.h"

namespace nocturne::core {

class CBoxActor : public CCharacter {
public:
    CBoxActor();
    ~CBoxActor() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    EGroundType getGroundType() override;
    int getBlockVirtualDirectorFlag() override;
    void setPositionAndOrientation(common::CVector3f *new_position,
                                   common::CVector3f *new_orientation) override;
    void onPickup(CDemonActor *owner) override;
    int getAllowedMeleeAttackTypes() override;
    int canPickup(CDemonActor *picker) override;
    void pickup(CDemonActor *carrier) override;
    void onDropped(common::CVector3f *drop_position) override;
    CDemonActor *getCarrier() override;
    CDemonActorType *getActorType() override;
    void archive() override;

    void resolveRayPush(common::CVector3f *ray_origin, common::CVector3f *ray_direction);
};

} // namespace nocturne::core
