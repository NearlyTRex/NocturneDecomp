#pragma once

#include "core/charactr/character.h"
#include "core/fwd.h"

namespace nocturne::core {

class CAmmo : public CCharacter {
public:
    CAmmo();
    ~CAmmo() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int canPickup(CDemonActor *picker) override;
    CDemonActorType *getActorType() override;
    void archive() override;

    void setWeaponClass(char *weapon_class_name);
    void setAmmoCount(int ammo_count);
};

} // namespace nocturne::core
