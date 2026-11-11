// Name: unkafter_cross.cpp_CSimpleCross_ctor_FUN_005a7980
// Address: 005a7980
// Address Range: [[005a7980, 005a7a56]]
// Convention: unknown
// Signature: CSimpleCross * unkafter_cross_cpp_CSimpleCross_ctor_FUN_005a7980(CSimpleCross *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSimpleCross * unkafter_cross_cpp_CSimpleCross_ctor_FUN_005a7980(CSimpleCross *this_ptr)

{
  char cVar1;
  CMelee *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_melee_cpp_CMelee_ctor_FUN_004ea8b0(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CSimpleCrossVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&(pCVar2->base).model,(char *)0x5f07ad);
  (pCVar2->base).weapon_type = WEAPON_TYPE_BARON|WEAPON_TYPE_FLASHLIGHT;
  pCVar2->strength_lo = 5.0;
  pcVar3 = "shovel?.wav";
  pCVar2->strength_hi = 10.0;
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
  pcVar3 = (char *)0x5f07c4;
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
  pcVar3 = (char *)0x5f07d0;
  pcVar4 = pCVar2->hit_other_sound;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return (CSimpleCross *)pCVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return (CSimpleCross *)pCVar2;
}
