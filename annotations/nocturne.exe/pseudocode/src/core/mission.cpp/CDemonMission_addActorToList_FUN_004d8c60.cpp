// Name: core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60
// Address: 004d8c60
// Address Range: [[004d8c60, 004d8cc8]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(CDemonMission *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(CDemonMission *this_ptr,CDemonActor *actor)

{
  CDemonActor *pCVar1;
  
  if (actor != (CDemonActor *)0x0) {
    if (actor->actor_name[0] == '\0') {
      core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(this_ptr,actor);
    }
    pCVar1 = *(CDemonActor **)(this_ptr->set_names[3] + 0xd0);
    if (pCVar1 != (CDemonActor *)0x0) {
      actor->next_actor = (CDemonActor *)0x0;
      actor->prev_actor = pCVar1;
      *(CDemonActor **)(*(int *)(this_ptr->set_names[3] + 0xd0) + 0x144) = actor;
      *(CDemonActor **)(this_ptr->set_names[3] + 0xd0) = actor;
      return;
    }
    actor->next_actor = (CDemonActor *)0x0;
    actor->prev_actor = (CDemonActor *)0x0;
    *(CDemonActor **)(this_ptr->set_names[3] + 0xcc) = actor;
    *(CDemonActor **)(this_ptr->set_names[3] + 0xd0) = actor;
  }
  return;
}
