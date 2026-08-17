// Name: core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110
// Address: 004d9110
// Address Range: [[004d9110, 004d9170]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_004d9110(CDemonMission *this_ptr,CDemonActor *actor,uint flags)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_004d9110(CDemonMission *this_ptr,CDemonActor *actor,uint flags)

{
  int iVar1;
  
  this_ptr->delete_queue_actors[this_ptr->delete_queue_count] = actor;
  this_ptr->delete_queue_flags[this_ptr->delete_queue_count] = flags;
  iVar1 = this_ptr->delete_queue_count + 1;
  this_ptr->delete_queue_count = iVar1;
  if (iVar1 < 100) {
    return;
  }
  g_CurrentFilename = "..\\core\\mission.cpp";
  g_CurrentLineNumber = 1032;
  core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonMission::markActorToDelete - Too many of them!");
  return;
}
