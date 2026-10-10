#pragma once

#include "core/charactr/character.h"
#include "core/fwd.h"

namespace nocturne::core {

class CAmmoBox : public CCharacter {
public:
    CAmmoBox();
    ~CAmmoBox() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int canPickup(CDemonActor *picker) override;
    CDemonActorType *getActorType() override;
    void archive() override;

    void openBox(float open_pct);
    void addToInventory(CInventory *inventory);
};

} // namespace nocturne::core
