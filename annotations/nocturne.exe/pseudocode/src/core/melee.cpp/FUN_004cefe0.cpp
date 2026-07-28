// Name: core_melee.cpp_FUN_004cefe0
// Address: 004cefe0
// Address Range: [[004cefe0, 004cf080]]
// Convention: unknown
// Signature: void core_melee_cpp_FUN_004cefe0(int param_1,int param_2,undefined4 param_3,CDemonActor *param_4)

#include "nocturne.h"

void core_melee_cpp_FUN_004cefe0(int param_1,int param_2,uint param_3,CDemonActor *param_4)

{
  CDemonActor *pCVar1;
  
  core_actor_cpp_FUN_0040bce0(param_1,param_2,param_3,param_4);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (param_4,g_CCharacterActorType_00765a60.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_004cf090(param_1,0x14,pCVar1[0x1c].prev_actor);
    if (param_2 == 1) {
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x598);
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x5fc);
    return;
  }
  if (param_4 == (CDemonActor *)0x0) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x660);
  return;
}
