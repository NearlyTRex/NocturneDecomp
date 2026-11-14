// Name: core_mission.cpp_CDemonMission_loadSet_FUN_004fc6b0
// Address: 004fc6b0
// Address Range: [[004fc6b0, 004fc73b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_loadSet_FUN_004fc6b0(CDemonMission *this_ptr,int set_index)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_loadSet_FUN_004fc6b0(CDemonMission *this_ptr,int set_index)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (set_index == this_ptr->current_set_index) {
    return;
  }
  this_ptr->current_set_index = set_index;
  core_set_cpp_CDemonSet_load_FUN_0052c0e0(g_CDemonSetPtr,this_ptr->set_names[set_index]);
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_004fc4c0(this_ptr);
  if (this_ptr->prepared_set_index != this_ptr->current_set_index) {
    core_mission_cpp_CDemonMission_prepareAllActors_FUN_004fc350(this_ptr);
  }
  iVar3 = 0;
  for (iVar2 = 0; iVar2 < g_CDemonSetPtr->actor_count; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)((int)g_CDemonSetPtr->actors + iVar3);
    iVar3 = iVar3 + 4;
    (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x58))(iVar1);
  }
  core_game_cpp_FUN_004bfa70(g_CGamePtr);
  return;
}
