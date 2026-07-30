// Name: core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0
// Address: 0040bca0
// Address Range: [[0040bca0, 0040bcdc]]
// Convention: unknown
// Signature: void core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  *(uint *)(param_3 + 4) = 0x40a00000;
  *(uint *)(param_3 + 0x30) = 0x67;
  *(uint *)(param_3 + 0x2c) = 0x3e4ccccd;
  *(uint *)(param_3 + 8) = 0x3ecccccd;
  *(int *)(param_3 + 0x34) = param_1;
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
  *(uint *)(param_3 + 0x38) = uVar1;
  return;
}
