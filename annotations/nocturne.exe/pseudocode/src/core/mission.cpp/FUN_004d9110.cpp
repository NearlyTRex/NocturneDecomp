// Name: core_mission.cpp_FUN_004d9110
// Address: 004d9110
// Address Range: [[004d9110, 004d9170]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004d9110(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void core_mission_cpp_FUN_004d9110(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x530 + *(int *)(param_1 + 0x52c) * 4) = param_2;
  *(uint *)(param_1 + 0x6c0 + *(int *)(param_1 + 0x52c) * 4) = param_3;
  iVar1 = *(int *)(param_1 + 0x52c) + 1;
  *(int *)(param_1 + 0x52c) = iVar1;
  if (iVar1 < 100) {
    return;
  }
  g_CHAR_PTR_01cc4800 = "..\\core\\mission.cpp";
  g_INT_01cc4804 = 0x408;
  core_main_c_FUN_004c8440("CDemonMission::markActorToDelete - Too many of them!");
  return;
}
