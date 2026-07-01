// Name: core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
// Address: 005240a0
// Address Range: [[005240a0, 0052411b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission *this_ptr,CDemonActor *actor,uint flags)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission *this_ptr,CDemonActor *actor,uint flags)

{
  int iVar1;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (actor,"..\\core\\mission.cpp",1027);
  this_ptr->delete_queue_actors[this_ptr->delete_queue_count] = actor;
  this_ptr->delete_queue_flags[this_ptr->delete_queue_count] = flags;
  iVar1 = this_ptr->delete_queue_count + 1;
  this_ptr->delete_queue_count = iVar1;
  if (iVar1 < 100) {
    return;
  }
  g_CurrentFilename = "..\\core\\mission.cpp";
  g_CurrentLineNumber = 1032;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::markActorToDelete - Too many of them!");
  return;
}
