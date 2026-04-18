// Name: core_melee.cpp_CMelee_ctor_FUN_0050e7d0
// Address: 0050e7d0
// Address Range: [[0050e7d0, 0050e91e]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_CMelee_ctor_FUN_0050e7d0(CMelee *this_ptr)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_CMelee_ctor_FUN_0050e7d0(CMelee *this_ptr)

{
  char cVar1;
  CMelee *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CMelee *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CMeleeVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar2->base).model,"melee.kfm");
  (pCVar2->base).weapon_type = 7;
  pCVar2->ammo_type = -1;
  (pCVar2->base).ammo_count = 0;
  (pCVar2->base).is_spread_weapon = 0;
  (pCVar2->base).fire_mode = 0;
  (pCVar2->base).can_penetrate = 0;
  (pCVar2->base).bolt_velocity = 5.0;
  (pCVar2->base).fire_cooldown = 0;
  (pCVar2->base).can_attach_light = 0;
  pCVar2->allowed_attack_types = 1;
  pCVar2->strength_lo = 10.0;
  pCVar2->strength_hi = 15.0;
  pCVar2->dismember_prob = 0.5;
  pCVar2->can_go_in_inventory = 0;
  pcVar3 = "shovel?.wav";
  pCVar2->blood_spurt_count = 0;
  pCVar2->blood_spurt_timer = 0.0;
  pcVar4 = pCVar2->thrust_hit_character_sound;
  pCVar2->ammo_type = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "shvl-f?.wav";
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
  pcVar3 = "shvl-s?.wav";
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
