#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CWeapon : public CDemonActor {
public:
    CWeapon();
    ~CWeapon() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    void onPickup(CDemonActor *owner) override;
    int canPickup(CDemonActor *picker) override;
    void pickup(CDemonActor *carrier) override;
    void onDropped(CVector3f *drop_position) override;
    CDemonActor *getCarrier() override;
    void archive() override;
    virtual void onFired();
    virtual void setWeaponState(int weapon_state);
    virtual CVector3f *getMuzzlePoint(CVector3f *out_point);
    virtual int fire();
    virtual int isReadyToFire();
    virtual float getDamage();
    virtual void renderAimBeam();
    virtual void updateLighting();
};

} // namespace nocturne::core
