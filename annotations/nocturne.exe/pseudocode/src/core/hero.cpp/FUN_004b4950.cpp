// Name: core_hero.cpp_FUN_004b4950
// Address: 004b4950
// Address Range: [[004b4950, 004b4990]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004b4950(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint core_hero_cpp_FUN_004b4950(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if ((*(int *)(0x01C775EC + 0x1d0) == 0) && ((*(uint *)(param_1 + 0xbc8c) & 0x7fffffff) == 0)) {
    uVar1 = core_actor_cpp_FUN_0040a420(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}
