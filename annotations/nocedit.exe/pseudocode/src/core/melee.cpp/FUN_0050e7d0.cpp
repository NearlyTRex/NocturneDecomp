// Name: core_melee.cpp_FUN_0050e7d0
// Address: 0050e7d0
// Address Range: [[0050e7d0, 0050e91e]]
// Convention: __cdecl
// Signature: CMelee * core_melee.cpp_FUN_0050e7d0(CMelee * this_ptr)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_FUN_0050e7d0(CMelee *this_ptr)

{
  char cVar1;
  CMelee *pCVar2;
  char *pcVar3;
  char **ppcVar4;
  
  pCVar2 = (CMelee *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar2->base_weapon).base_actor.vtable._ub =
       &PTR_core_weapon_cpp_ActorModelSomething_FUN_00661174;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar2->base_weapon).model,"melee.kfm");
  (pCVar2->base_weapon).field3_0x2d8[8] = '\a';
  (pCVar2->base_weapon).field3_0x2d8[9] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[10] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[0xb] = '\0';
  pCVar2->ammo_type = -1;
  (pCVar2->base_weapon).ammo_count = 0;
  (pCVar2->base_weapon).field3_0x2d8[0] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[1] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[2] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[3] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[4] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[5] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[6] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[7] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[0xc] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[0xd] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[0xe] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[0xf] = '\0';
  (pCVar2->base_weapon).bolt_velocity = 5.0;
  (pCVar2->base_weapon).fire_cooldown = 0.0;
  (pCVar2->base_weapon).can_attach_light = 0;
  pCVar2->allowed_attack_types = 1;
  pCVar2->strength_lo = 10.0;
  pCVar2->strength_hi = 15.0;
  pCVar2->dismember_prob = 0.5;
  pCVar2->can_go_in_inventory = 0;
  pcVar3 = "shovel?.wav";
  pCVar2->field6_0x58c[4] = '\0';
  pCVar2->field6_0x58c[5] = '\0';
  pCVar2->field6_0x58c[6] = '\0';
  pCVar2->field6_0x58c[7] = '\0';
  pCVar2->field6_0x58c[8] = '\0';
  pCVar2->field6_0x58c[9] = '\0';
  pCVar2->field6_0x58c[10] = '\0';
  pCVar2->field6_0x58c[0xb] = '\0';
  ppcVar4 = &pCVar2->thrust_hit_character_sound;
  pCVar2->ammo_type = 0;
  do {
    cVar1 = *pcVar3;
    *(char *)ppcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)ppcVar4 + 1) = cVar1;
    ppcVar4 = (char **)((int)ppcVar4 + 2);
  } while (cVar1 != '\0');
  pcVar3 = "shvl-f?.wav";
  ppcVar4 = &pCVar2->swing_hit_character_sound;
  do {
    cVar1 = *pcVar3;
    *(char *)ppcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)ppcVar4 + 1) = cVar1;
    ppcVar4 = (char **)((int)ppcVar4 + 2);
  } while (cVar1 != '\0');
  pcVar3 = "shvl-s?.wav";
  ppcVar4 = &pCVar2->hit_other_sound;
  do {
    cVar1 = *pcVar3;
    *(char *)ppcVar4 = cVar1;
    if (cVar1 == '\0') {
      return pCVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)ppcVar4 + 1) = cVar1;
    ppcVar4 = (char **)((int)ppcVar4 + 2);
  } while (cVar1 != '\0');
  return pCVar2;
}
