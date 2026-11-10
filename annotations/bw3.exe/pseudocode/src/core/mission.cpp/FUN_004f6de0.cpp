// Name: core_mission.cpp_FUN_004f6de0
// Address: 004f6de0
// Address Range: [[004f6de0, 004f6e8b]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004f6de0(CDemonMission *param_1,int param_2)

#include "nocturne.h"

void core_mission_cpp_FUN_004f6de0(CDemonMission *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == *(int *)param_1) {
    return;
  }
  *(int *)param_1 = param_2;
  core_set_cpp_FUN_00532b80(g_CDemonSetPtr,param_1 + param_2 * 0x100 + 8);
  if (*(int *)(param_1 + 0x1008) == 0) {
    core_mission_cpp_FUN_004f6f80(param_1);
  }
  else {
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_004f6bf0(param_1);
  }
  if (*(int *)param_1 != *(int *)(param_1 + 0x1454)) {
    core_mission_cpp_CDemonMission_prepareAllActors_FUN_004f6a80(param_1);
  }
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < g_CDemonSetPtr->actor_count; iVar3 = iVar3 + 1) {
    iVar1 = *(int *)((int)g_CDemonSetPtr->actors + iVar2);
    iVar2 = iVar2 + 4;
    (**(code **)(*(int *)(iVar1 + 0x154) + 0x50))(iVar1);
  }
  sound_sndmain_cpp_killAllSfx_FUN_00556c60();
  core_game_cpp_FUN_004c4870(g_CGamePtr);
  *(uint *)&g_CGamePtr->field_0x290 = 1;
  return;
}
