// Name: core_mission.cpp_FUN_0051b610
// Address: 0051b610
// Address Range: [[0051b610, 0051b6bb]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_0051b610(CDemonMission *param_1,int param_2)

#include "nocturne.h"

void core_mission_cpp_FUN_0051b610(CDemonMission *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == *(int *)param_1) {
    return;
  }
  *(int *)param_1 = param_2;
  core_set_cpp_FUN_0054d3c0(g_CDemonSetPtr,param_1 + param_2 * 0x100 + 8);
  if (*(int *)(param_1 + 0x1008) == 0) {
    core_mission_cpp_FUN_0051b7b0(param_1);
  }
  else {
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_0051b420(param_1);
  }
  if (*(int *)param_1 != *(int *)(param_1 + 0x1454)) {
    core_mission_cpp_FUN_0051b2b0(param_1);
  }
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar3 = iVar3 + 1) {
    piVar1 = (int *)(&g_CDemonSetPtr->field_0x14d168 + iVar2);
    iVar2 = iVar2 + 4;
    (**(code **)(*(int *)(*piVar1 + 0x154) + 0x50))(*piVar1);
  }
  sound_sndmain_cpp_FUN_00573b00();
  core_game_cpp_FUN_004dc000(g_CGamePtr);
  *(uint *)&g_CGamePtr->field_0x288 = 1;
  return;
}
