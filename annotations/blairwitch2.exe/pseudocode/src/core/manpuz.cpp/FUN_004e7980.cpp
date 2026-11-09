// Name: core_manpuz.cpp_FUN_004e7980
// Address: 004e7980
// Address Range: [[004e7980, 004e79c3]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_004e7980(int param_1,undefined4 *param_2)

#include "nocturne.h"

void core_manpuz_cpp_FUN_004e7980(int param_1,uint *param_2)

{
  uint uVar1;
  
  core_actor_cpp_FUN_00409ed0(param_1,param_2);
  *param_2 = 1;
  uVar1 = *(uint *)(param_1 + 0x430);
  param_2[4] = 0x40c90fdb;
  param_2[5] = 0xc0c90fdb;
  param_2[2] = 0xbf800000;
  param_2[3] = 0;
  param_2[1] = uVar1;
  return;
}
