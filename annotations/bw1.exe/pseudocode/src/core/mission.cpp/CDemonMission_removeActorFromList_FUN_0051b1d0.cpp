// Name: core_mission.cpp_CDemonMission_removeActorFromList_FUN_0051b1d0
// Address: 0051b1d0
// Address Range: [[0051b1d0, 0051b270]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_removeActorFromList_FUN_0051b1d0(CDemonMission *this_ptr,CDemonActor *actor_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_removeActorFromList_FUN_0051b1d0(CDemonMission *this_ptr,CDemonActor *actor_ptr)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  
  if (actor_ptr != (CDemonActor *)0x0) {
    pCVar1 = this_ptr->first_actor;
    while( true ) {
      if (pCVar1 == (CDemonActor *)0x0) {
        return;
      }
      if (pCVar1 == actor_ptr) break;
      pCVar1 = pCVar1->next_actor;
    }
    pCVar1 = actor_ptr->prev_actor;
    if (pCVar1 == (CDemonActor *)0x0) {
      pCVar1 = actor_ptr->next_actor;
      if (pCVar1 == (CDemonActor *)0x0) {
        this_ptr->first_actor = (CDemonActor *)0x0;
        this_ptr->last_actor = (CDemonActor *)0x0;
      }
      else {
        this_ptr->first_actor = pCVar1;
        pCVar1->prev_actor = (CDemonActor *)0x0;
      }
    }
    else {
      pCVar2 = actor_ptr->next_actor;
      if (pCVar2 == (CDemonActor *)0x0) {
        this_ptr->last_actor = pCVar1;
        pCVar1->next_actor = (CDemonActor *)0x0;
      }
      else {
        pCVar1->next_actor = pCVar2;
        pCVar2->prev_actor = actor_ptr->prev_actor;
      }
    }
    actor_ptr->next_actor = (CDemonActor *)0x0;
    actor_ptr->prev_actor = (CDemonActor *)0x0;
  }
  return;
}
