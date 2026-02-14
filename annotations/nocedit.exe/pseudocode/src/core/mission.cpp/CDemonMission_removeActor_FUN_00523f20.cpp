// Name: core_mission.cpp_CDemonMission_removeActor_FUN_00523f20
// Address: 00523f20
// Address Range: [[00523f20, 00523f4a]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_00523f20(CDemonMission *this_ptr,CDemonActor *actor,int should_delete)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_00523f20(CDemonMission *this_ptr,CDemonActor *actor,int should_delete)

{
  if (actor != (CDemonActor *)0x0) {
    core_mission_cpp_CDemonMission_removeActorFromList_FUN_00523be0(this_ptr,actor);
    if (should_delete != 0) {
      core_actor_cpp_deleteActor_FUN_00408820(actor);
      return;
    }
  }
  return;
}
