// Name: core_mission.cpp_CDemonMission_removeActor_FUN_0051b4d0
// Address: 0051b4d0
// Address Range: [[0051b4d0, 0051b4fa]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_0051b4d0(CDemonMission *this_ptr,CDemonActor *actor,int should_delete)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_0051b4d0(CDemonMission *this_ptr,CDemonActor *actor,int should_delete)

{
  if (actor != (CDemonActor *)0x0) {
    core_mission_cpp_CDemonMission_removeActorFromList_FUN_0051b1d0(this_ptr,actor);
    if (should_delete != 0) {
      core_actor_cpp_FUN_00408560(actor);
      return;
    }
  }
  return;
}
