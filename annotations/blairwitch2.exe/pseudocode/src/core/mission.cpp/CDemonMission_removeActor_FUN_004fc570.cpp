// Name: core_mission.cpp_CDemonMission_removeActor_FUN_004fc570
// Address: 004fc570
// Address Range: [[004fc570, 004fc59a]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_004fc570(CDemonMission *this_ptr,CDemonActor *actor,int should_delete)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_004fc570(CDemonMission *this_ptr,CDemonActor *actor,int should_delete)

{
  if (actor != (CDemonActor *)0x0) {
    core_mission_cpp_CDemonMission_removeActorFromList_FUN_004fc270(this_ptr,actor);
    if (should_delete != 0) {
      core_actor_cpp_FUN_00408730(actor);
      return;
    }
  }
  return;
}
