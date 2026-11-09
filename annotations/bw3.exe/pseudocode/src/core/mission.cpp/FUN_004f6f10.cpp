// Name: core_mission.cpp_FUN_004f6f10
// Address: 004f6f10
// Address Range: [[004f6f10, 004f6f70]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004f6f10(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mission_cpp_FUN_004f6f10(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x101c + *(int *)(param_1 + 0x1018) * 4) = param_2;
  *(uint *)(param_1 + 0x11ac + *(int *)(param_1 + 0x1018) * 4) = param_3;
  iVar1 = *(int *)(param_1 + 0x1018) + 1;
  *(int *)(param_1 + 0x1018) = iVar1;
  if (iVar1 < 100) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\mission.cpp";
  _DAT_01d71de4 = 0x453;
  core_main_c_FUN_004e4330("CDemonMission::markActorToDelete - Too many of them!");
  return;
}
