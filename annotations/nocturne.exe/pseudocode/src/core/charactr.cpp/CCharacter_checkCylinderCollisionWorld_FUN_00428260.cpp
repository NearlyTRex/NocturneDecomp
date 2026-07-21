// Name: core_charactr.cpp_CCharacter_checkCylinderCollisionWorld_FUN_00428260
// Address: 00428260
// Address Range: [[00428260, 004282c6]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_00428260(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

uint core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_00428260(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  byte local_10 [12];
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,local_10,param_2);
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xa4))(param_1,local_10,param_3);
  if (iVar1 == 0) {
    *(uint *)(param_4 + 4) = 0;
    return 0;
  }
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x100))(param_1,param_4);
  return 1;
}
