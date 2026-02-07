// Name: core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0
// Address: 00523fb0
// Address Range: [[00523fb0, 00524028]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_loadSet_FUN_00523fb0(CDemonMission *this_ptr,int set_index)

#include "nocturne.h"

void __cdecl
core_mission_cpp_CDemonMission_loadSet_FUN_00523fb0(CDemonMission *this_ptr,int set_index)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  if (set_index != this_ptr->current_set_index) {
    this_ptr->current_set_index = set_index;
    core_set_cpp_CDemonSet_load_FUN_00569410(g_CDemonSetPtr,this_ptr->set_names[set_index]);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
    if (this_ptr->actors_prepared == 0) {
      core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(this_ptr);
    }
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < (int)g_CDemonSetPtr->actor_list_ptr; iVar2 = iVar2 + 1) {
      pcVar1 = g_CDemonSetPtr->actor_list_data + iVar3;
      iVar3 = iVar3 + 4;
      (**(code **)(*(int *)(*(int *)pcVar1 + 0x154) + 0x48))();
    }
  }
  return;
}
