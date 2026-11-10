// Name: core_melee.cpp_CMelee_ctor_FUN_004ea8b0
// Address: 004ea8b0
// Address Range: [[004ea8b0, 004ea9fe]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_CMelee_ctor_FUN_004ea8b0(CMelee *this_ptr)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_CMelee_ctor_FUN_004ea8b0(CMelee *this_ptr)

{
  char cVar1;
  CMelee *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CMelee *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CMeleeVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&(pCVar2->base).model,(char *)0x5dc915);
  (pCVar2->base).weapon_type = WEAPON_TYPE_UNUSED;
  pCVar2->ammo_type = AMMO_TYPE_NONE;
  (pCVar2->base).ammo_count = 0;
  (pCVar2->base).is_spread_weapon = 0;
  (pCVar2->base).fire_mode = FIRE_MODE_AUTOMATIC;
  (pCVar2->base).can_penetrate = 0;
  (pCVar2->base).bolt_velocity = 5.0;
  (pCVar2->base).fire_cooldown = 0;
  (pCVar2->base).can_attach_light = 0;
  pCVar2->allowed_attack_types = 3;
  pCVar2->strength_lo = 10.0;
  pCVar2->strength_hi = 15.0;
  pCVar2->dismember_prob = 0.5;
  pCVar2->can_go_in_inventory = 1;
  pcVar3 = "swordimpactflesh0?.wav";
  pCVar2->blood_spurt_count = 0;
  pCVar2->blood_spurt_timer = 0.0;
  pcVar4 = pCVar2->thrust_hit_character_sound;
  pCVar2->ammo_type = AMMO_TYPE_GENERIC;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "swordimpactflesh0?.wav";
  pcVar4 = pCVar2->swing_hit_character_sound;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "swordimpactrock0?.wav";
  pcVar4 = pCVar2->hit_other_sound;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return pCVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return pCVar2;
}
