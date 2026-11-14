// Name: core_mission.cpp_CDemonMission_loadSet_FUN_004f6de0
// Address: 004f6de0
// Address Range: [[004f6de0, 004f6e8b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_loadSet_FUN_004f6de0(CDemonMission *this_ptr,int set_index)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_loadSet_FUN_004f6de0(CDemonMission *this_ptr,int set_index)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (set_index == this_ptr->current_set_index) {
    return;
  }
  this_ptr->current_set_index = set_index;
  core_set_cpp_CDemonSet_load_FUN_00532b80(g_CDemonSetPtr,this_ptr->set_names[set_index]);
  if (this_ptr->is_in_editor == 0) {
    core_mission_cpp_FUN_004f6f80(this_ptr);
  }
  else {
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_004f6bf0(this_ptr);
  }
  if (this_ptr->current_set_index != this_ptr->prepared_set_index) {
    core_mission_cpp_CDemonMission_prepareAllActors_FUN_004f6a80(this_ptr);
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
