// Name: core_mission.cpp_CDemonMission_markActorToDelete_FUN_004fc7b0
// Address: 004fc7b0
// Address Range: [[004fc7b0, 004fc810]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0(CDemonMission *this_ptr,CDemonActor *param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0(CDemonMission *this_ptr,CDemonActor *param_2,uint param_3)

{
  int iVar1;
  
  this_ptr->delete_queue_actors[this_ptr->delete_queue_count] = param_2;
  this_ptr->delete_queue_flags[this_ptr->delete_queue_count] = param_3;
  iVar1 = this_ptr->delete_queue_count + 1;
  this_ptr->delete_queue_count = iVar1;
  if (iVar1 < 100) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\mission.cpp";
  _DAT_01d046a4 = 0x446;
  core_main_c_FUN_004e4500("CDemonMission::markActorToDelete - Too many of them!");
  return;
}
