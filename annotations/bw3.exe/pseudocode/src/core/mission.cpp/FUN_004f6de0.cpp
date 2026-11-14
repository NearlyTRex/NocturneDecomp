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
  
  if (param_2 == param_1->current_set_index) {
    return;
  }
  param_1->current_set_index = param_2;
  core_set_cpp_FUN_00532b80(g_CDemonSetPtr,param_1->set_names + param_2);
  if (param_1->is_in_editor == 0) {
    core_mission_cpp_FUN_004f6f80(param_1);
  }
  else {
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_004f6bf0(param_1);
  }
  if (param_1->current_set_index != param_1->prepared_set_index) {
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
  g_CGamePtr->new_set_event_pending = 1;
  return;
}
