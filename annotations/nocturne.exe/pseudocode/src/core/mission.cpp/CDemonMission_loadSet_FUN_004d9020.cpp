// Name: core_mission.cpp_CDemonMission_loadSet_FUN_004d9020
// Address: 004d9020
// Address Range: [[004d9020, 004d9098]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_loadSet_FUN_004d9020(CDemonMission *this_ptr,int set_index)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_loadSet_FUN_004d9020(CDemonMission *this_ptr,int set_index)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (set_index != this_ptr->current_set_index) {
    this_ptr->current_set_index = set_index;
    core_set_cpp_CDemonSet_load_FUN_00506f10
              (g_CDemonSet_PTR_005be368,this_ptr->set_names[set_index]);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_004d8ee0(this_ptr);
    if (this_ptr->actors_prepared == 0) {
      core_mission_cpp_CDemonMission_prepareAllActors_FUN_004d8db0(this_ptr);
    }
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < g_CDemonSet_PTR_005be368->actor_count; iVar2 = iVar2 + 1) {
      iVar1 = *(int *)((int)g_CDemonSet_PTR_005be368->actors + iVar3);
      iVar3 = iVar3 + 4;
      (**(code **)(*(int *)(iVar1 + 0x14c) + 0x48))(iVar1);
    }
  }
  return;
}
