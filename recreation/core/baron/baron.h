#pragma once

#include "core/fwd.h"
#include "core/hero/hero.h"

namespace nocturne::core {

class CBaron : public CHero {
public:
    CBaron();
    ~CBaron() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    CDemonActorType *getActorType() override;
    void archive() override;
    int isGrabbable(CDemonActor *grabber) override;
    void processDamage(SDamageInfo *damage_info) override;
    void drawWeapon(int drawn) override;
    int isWeaponDrawn() override;

    void attachToOwner(CDemonActor *target);
    void detachFromOwner(CDemonActor *target);
};

} // namespace nocturne::core
