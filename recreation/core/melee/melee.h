#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

namespace nocturne::core {

class CMelee : public CWeapon {
public:
    CMelee();
    ~CMelee() override;

    void process(float delta_time) override;
    int getAllowedMeleeAttackTypes() override;
    void fillAttackDamageInfo(int attack_flags, SDamageInfo *out_damage_info,
                              CDemonActor *victim) override;
    void playAttackHitEffects(int attack_flags, SDamageInfo *damage_info,
                              CDemonActor *victim) override;
    int canPickup(CDemonActor *picker) override;
    CDemonActorType *getActorType() override;
    void archive() override;
    void setWeaponState(int weapon_state) override;
    int fire() override;
    float getDamage() override;
    void renderAimBeam() override;
};

} // namespace nocturne::core
