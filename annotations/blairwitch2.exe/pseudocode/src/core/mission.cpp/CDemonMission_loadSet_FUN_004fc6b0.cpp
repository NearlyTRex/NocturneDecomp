// Name: core_mission.cpp_CDemonMission_loadSet_FUN_004fc6b0
// Address: 004fc6b0
// Address Range: [[004fc6b0, 004fc73b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_loadSet_FUN_004fc6b0(CDemonMission *this_ptr,int set_index)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_loadSet_FUN_004fc6b0(CDemonMission *this_ptr,int set_index)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (set_index == *(int *)this_ptr) {
    return;
  }
  *(int *)this_ptr = set_index;
  core_set_cpp_CDemonSet_load_FUN_0052c0e0
            (g_CDemonSetPtr,(char *)(this_ptr + set_index * 0x100 + 8));
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_004fc4c0(this_ptr);
  if (*(int *)(this_ptr + 0x1450) != *(int *)this_ptr) {
    core_mission_cpp_FUN_004fc350(this_ptr);
  }
  iVar3 = 0;
  for (iVar2 = 0; iVar2 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar2 = iVar2 + 1) {
    piVar1 = (int *)(&g_CDemonSetPtr->field_0x14d168 + iVar3);
    iVar3 = iVar3 + 4;
    (**(code **)(*(int *)(*piVar1 + 0x2b0) + 0x58))(*piVar1);
  }
  core_game_cpp_FUN_004bfa70(g_CGamePtr);
  return;
}
