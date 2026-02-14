// Name: core_mission.cpp_CDemonMission_removeActorFromList_FUN_00523be0
// Address: 00523be0
// Address Range: [[00523be0, 00523cb0]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_removeActorFromList_FUN_00523be0(CDemonMission *this_ptr,CDemonActor *actor_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_removeActorFromList_FUN_00523be0(CDemonMission *this_ptr,CDemonActor *actor_ptr)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  
  if (actor_ptr == (CDemonActor *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (actor_ptr,"..\\core\\mission.cpp",0x2c8);
  pCVar1 = this_ptr->first_actor;
  while( true ) {
    if (pCVar1 == (CDemonActor *)0x0) {
      return;
    }
    core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
              (pCVar1,"..\\core\\mission.cpp",0x2ce);
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
  return;
}
