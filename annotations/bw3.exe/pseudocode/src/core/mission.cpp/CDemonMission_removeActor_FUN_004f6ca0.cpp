// Name: core_mission.cpp_CDemonMission_removeActor_FUN_004f6ca0
// Address: 004f6ca0
// Address Range: [[004f6ca0, 004f6cca]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_004f6ca0(CDemonMission *this_ptr,CDemonActor *actor,int should_delete)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_004f6ca0(CDemonMission *this_ptr,CDemonActor *actor,int should_delete)

{
  if (actor != (CDemonActor *)0x0) {
    core_mission_cpp_FUN_004f69a0(this_ptr,actor);
    if (should_delete != 0) {
      core_actor_cpp_FUN_004085a0(actor);
      return;
    }
  }
  return;
}
