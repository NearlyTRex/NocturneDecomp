// Name: core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160
// Address: 0051b160
// Address Range: [[0051b160, 0051b1c8]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(CDemonMission *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(CDemonMission *this_ptr,CDemonActor *actor)

{
  CDemonActor *pCVar1;
  
  if (actor != (CDemonActor *)0x0) {
    if (actor->actor_name[0] == '\0') {
      core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(this_ptr,actor);
    }
    pCVar1 = *(CDemonActor **)(this_ptr + 0x111c);
    if (pCVar1 != (CDemonActor *)0x0) {
      actor->next_actor = (CDemonActor *)0x0;
      actor->prev_actor = pCVar1;
      *(CDemonActor **)(*(int *)(this_ptr + 0x111c) + 0x14c) = actor;
      *(CDemonActor **)(this_ptr + 0x111c) = actor;
      return;
    }
    actor->next_actor = (CDemonActor *)0x0;
    actor->prev_actor = (CDemonActor *)0x0;
    *(CDemonActor **)(this_ptr + 0x1118) = actor;
    *(CDemonActor **)(this_ptr + 0x111c) = actor;
  }
  return;
}
