// Name: core_actor.cpp_FUN_0040b090
// Address: 0040b090
// Address Range: [[0040b090, 0040b0c4]]
// Convention: unknown
// Signature: void core_actor_cpp_FUN_0040b090(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void core_actor_cpp_FUN_0040b090(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = core_flies_cpp_findFliesByFollowActor_FUN_0048fbe0(param_1);
  if (iVar1 != 0) {
    return;
  }
  core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670(INT_005b96c4,param_1,param_2,param_3,0);
  return;
}
