// Name: core_werewolf.cpp_FUN_0058d020
// Address: 0058d020
// Address Range: [[0058d020, 0058d055]]
// Convention: unknown
// Signature: void core_werewolf_cpp_FUN_0058d020(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void core_werewolf_cpp_FUN_0058d020(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
  if (*(int *)(iVar1 + 0x24) == 0x13) {
    return;
  }
  core_charactr_cpp_FUN_004285f0(param_1,param_2,param_3,param_4);
  return;
}
