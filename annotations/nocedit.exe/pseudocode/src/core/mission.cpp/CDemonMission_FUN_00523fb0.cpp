// Name: core_mission.cpp_CDemonMission_FUN_00523fb0
// Address: 00523fb0
// Address Range: [[00523fb0, 00524028]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00523fb0(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00523fb0(CDemonMission *this_ptr)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000008;
  
  if (in_stack_00000008 != *(int *)this_ptr->field0_0x0) {
    *(int *)this_ptr->field0_0x0 = in_stack_00000008;
    core_set_cpp_CDemonSet_load_FUN_00569410
              (g_CDemonSetPtr,this_ptr->field4_0x148 + in_stack_00000008 * 0x100);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
    if (*(int *)(this_ptr->field6_0x54c + 0x338) == 0) {
      core_mission_cpp_CDemonMission_FUN_00523cf0(this_ptr);
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
