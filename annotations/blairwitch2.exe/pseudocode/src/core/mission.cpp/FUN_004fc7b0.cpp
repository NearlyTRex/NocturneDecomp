// Name: core_mission.cpp_FUN_004fc7b0
// Address: 004fc7b0
// Address Range: [[004fc7b0, 004fc810]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004fc7b0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mission_cpp_FUN_004fc7b0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x1130 + *(int *)(param_1 + 0x112c) * 4) = param_2;
  *(uint *)(param_1 + 0x12c0 + *(int *)(param_1 + 0x112c) * 4) = param_3;
  iVar1 = *(int *)(param_1 + 0x112c) + 1;
  *(int *)(param_1 + 0x112c) = iVar1;
  if (iVar1 < 100) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\mission.cpp";
  _DAT_01d046a4 = 0x446;
  core_main_c_FUN_004e4500("CDemonMission::markActorToDelete - Too many of them!");
  return;
}
