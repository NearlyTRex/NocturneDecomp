// Name: core_lightgun.cpp_FUN_004ffff0
// Address: 004ffff0
// Address Range: [[004ffff0, 00500089]]
// Convention: unknown
// Signature: undefined4 core_lightgun_cpp_FUN_004ffff0(CCharacter *param_1)

#include "nocturne.h"

uint core_lightgun_cpp_FUN_004ffff0(CCharacter *param_1)

{
  int iVar1;
  
  iVar1 = (*(((param_1->base).vtable._uc)->_uc).isInvulnerable)(param_1);
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&param_1->base,"CGhoul");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&param_1->base,"CTVBat");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&param_1->base,"CBatCreature");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&param_1->base,"CWerewolf");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&param_1->base,"CSvetlana");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
