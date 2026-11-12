// Name: core_cross.cpp_CCross_ctor_FUN_005a69f0
// Address: 005a69f0
// Address Range: [[005a69f0, 005a6b2a]]
// Convention: unknown
// Signature: CCross * core_cross_cpp_CCross_ctor_FUN_005a69f0(CCross *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCross * core_cross_cpp_CCross_ctor_FUN_005a69f0(CCross *this_ptr)

{
  char cVar1;
  CCross *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CCross *)core_melee_cpp_CMelee_ctor_FUN_004ea8b0(&this_ptr->base);
  (pCVar2->base).base.base.vtable._ub = &g_CCrossVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&(pCVar2->base).base.model,(char *)0x5f06e9);
  (pCVar2->base).base.weapon_type = WEAPON_TYPE_BARON|WEAPON_TYPE_FLASHLIGHT;
  (pCVar2->base).strength_lo = 25.0;
  pcVar3 = "shovel?.wav";
  (pCVar2->base).strength_hi = 50.0;
  (pCVar2->base).dismember_prob = 0.9;
  pcVar4 = (pCVar2->base).thrust_hit_character_sound;
  (pCVar2->base).can_go_in_inventory = 1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5f0700;
  pcVar4 = (pCVar2->base).swing_hit_character_sound;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5f070c;
  pcVar4 = (pCVar2->base).hit_other_sound;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&(pCVar2->base).base.base.field_0x2a8 = 0x3dcccccd;
  (pCVar2->base).base.base.is_transparent = 0;
  pCVar2->charge = 0.0;
  pCVar2->charge_time = 0.0;
  pCVar2->pulse_timer = 0.0;
  pCVar2->glow_intensity = 0.7;
  pCVar2->corona_queued = 0;
  pCVar2->blast_pending = 0.0;
  pCVar2->unused_83c = 0;
  pCVar2->blast_strength = 0.0;
  return pCVar2;
}
