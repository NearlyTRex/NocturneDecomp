// Name: core_mission.cpp_CDemonMission_markActorToDelete_FUN_004fc7b0
// Address: 004fc7b0
// Address Range: [[004fc7b0, 004fc810]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0(CDemonMission *this_ptr,CDemonActor *actor,uint flags)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0(CDemonMission *this_ptr,CDemonActor *actor,uint flags)

{
  int iVar1;
  
  this_ptr->delete_queue_actors[this_ptr->delete_queue_count] = actor;
  this_ptr->delete_queue_flags[this_ptr->delete_queue_count] = flags;
  iVar1 = this_ptr->delete_queue_count + 1;
  this_ptr->delete_queue_count = iVar1;
  if (iVar1 < 100) {
    return;
  }
  g_CHAR_PTR_01d046a0 = "..\\core\\mission.cpp";
  g_INT_01d046a4 = 0x446;
  core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonMission::markActorToDelete - Too many of them!");
  return;
}
