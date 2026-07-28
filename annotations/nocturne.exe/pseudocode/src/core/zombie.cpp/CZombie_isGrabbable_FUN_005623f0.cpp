// Name: core_zombie.cpp_CZombie_isGrabbable_FUN_005623f0
// Address: 005623f0
// Address Range: [[005623f0, 00562420]]
// Convention: unknown
// Signature: int core_zombie_cpp_CZombie_isGrabbable_FUN_005623f0(CCharacter *param_1,CDemonActor *param_2)

#include "nocturne.h"

int core_zombie_cpp_CZombie_isGrabbable_FUN_005623f0(CCharacter *param_1,CDemonActor *param_2)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CTentacle");
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = core_charactr_cpp_CCharacter_isGrabbable_FUN_004280a0(param_1,param_2);
  return iVar1;
}
