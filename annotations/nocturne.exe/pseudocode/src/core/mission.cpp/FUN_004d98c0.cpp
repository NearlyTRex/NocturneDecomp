// Name: core_mission.cpp_FUN_004d98c0
// Address: 004d98c0
// Address Range: [[004d98c0, 004d98f2]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004d98c0(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_mission_cpp_FUN_004d98c0(int param_1,uint param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x514); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x144)) {
    (**(code **)(*(int *)(iVar1 + 0x14c) + 0xc0))(iVar1,param_2);
  }
  return;
}
