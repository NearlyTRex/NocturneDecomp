// Name: core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930
// Address: 004f6930
// Address Range: [[004f6930, 004f6998]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission *this_ptr,CDemonActor *actor)

{
  CDemonActor *pCVar1;
  
  if (actor != (CDemonActor *)0x0) {
    if (actor->actor_name[0] == '\0') {
      core_mission_cpp_CDemonMission_generateActorName_FUN_004f7530(this_ptr,actor);
    }
    pCVar1 = this_ptr->last_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      actor->next_actor = (CDemonActor *)0x0;
      actor->prev_actor = pCVar1;
      this_ptr->last_actor->next_actor = actor;
      this_ptr->last_actor = actor;
      return;
    }
    actor->next_actor = (CDemonActor *)0x0;
    actor->prev_actor = (CDemonActor *)0x0;
    this_ptr->first_actor = actor;
    this_ptr->last_actor = actor;
  }
  return;
}
