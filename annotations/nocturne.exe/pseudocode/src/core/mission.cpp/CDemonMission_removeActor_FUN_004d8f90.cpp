// Name: core_mission.cpp_CDemonMission_removeActor_FUN_004d8f90
// Address: 004d8f90
// Address Range: [[004d8f90, 004d8fba]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90(CDemonMission *this_ptr,CDemonActor *actor,int should_delete)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90(CDemonMission *this_ptr,CDemonActor *actor,int should_delete)

{
  if (actor != (CDemonActor *)0x0) {
    core_mission_cpp_CDemonMission_FUN_004d8cd0(this_ptr,actor);
    if (should_delete != 0) {
      core_actor_cpp_destroyActor_FUN_00409cd0(actor);
      return;
    }
  }
  return;
}
