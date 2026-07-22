// Name: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_00417f10
// Address: 00417f10
// Address Range: [[00417f10, 00417f5a]]
// Convention: unknown
// Signature: void core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_00417f10(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_00417f10(uint param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  core_actor_cpp_FUN_0040bca0(param_1,param_2,param_3,param_4);
  uVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40a00000,0x41700000);
  *(uint *)(param_3 + 0x2c) = 0x3ca3d70a;
  *(uint *)(param_3 + 4) = uVar1;
  return;
}
