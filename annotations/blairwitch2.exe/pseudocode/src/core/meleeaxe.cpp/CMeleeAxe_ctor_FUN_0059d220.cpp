// Name: core_meleeaxe.cpp_CMeleeAxe_ctor_FUN_0059d220
// Address: 0059d220
// Address Range: [[0059d220, 0059d2f6]]
// Convention: unknown
// Signature: CMeleeAxe * core_meleeaxe_cpp_CMeleeAxe_ctor_FUN_0059d220(CMeleeAxe *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMeleeAxe * core_meleeaxe_cpp_CMeleeAxe_ctor_FUN_0059d220(CMeleeAxe *this_ptr)

{
  char cVar1;
  CMelee *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_melee_cpp_CMelee_ctor_FUN_004ea8b0(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CMeleeAxeVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&(pCVar2->base).model,(char *)0x5ef7fb);
  (pCVar2->base).weapon_type = WEAPON_TYPE_BARON;
  pCVar2->strength_lo = 25.0;
  pcVar3 = "axeimpactflesh0?.wav";
  pCVar2->strength_hi = 50.0;
  pCVar2->dismember_prob = 0.0;
  pcVar4 = pCVar2->thrust_hit_character_sound;
  pCVar2->can_go_in_inventory = 1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "axeimpactflesh0?.wav";
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
  pcVar3 = "axeimpactwood0?.wav";
  pcVar4 = pCVar2->hit_other_sound;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return (CMeleeAxe *)pCVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return (CMeleeAxe *)pCVar2;
}
