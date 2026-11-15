// Name: core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10
// Address: 004f6f10
// Address Range: [[004f6f10, 004f6f70]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_004f6f10(CDemonMission *this_ptr,CDemonActor *actor,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_004f6f10(CDemonMission *this_ptr,CDemonActor *actor,uint flags)

{
  int iVar1;
  
  this_ptr->delete_queue_actors[this_ptr->delete_queue_count] = actor;
  this_ptr->delete_queue_flags[this_ptr->delete_queue_count] = flags;
  iVar1 = this_ptr->delete_queue_count + 1;
  this_ptr->delete_queue_count = iVar1;
  if (iVar1 < 100) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\mission.cpp";
  _DAT_01d71de4 = 0x453;
  core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonMission::markActorToDelete - Too many of them!");
  return;
}
