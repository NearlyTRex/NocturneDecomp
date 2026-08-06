// Name: core_mission.cpp_CDemonMission_FUN_004d8cd0
// Address: 004d8cd0
// Address Range: [[004d8cd0, 004d8d70]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_FUN_004d8cd0(CDemonMission *this_ptr,CDemonActor *param_2)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_004d8cd0(CDemonMission *this_ptr,CDemonActor *param_2)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  
  if (param_2 != (CDemonActor *)0x0) {
    pCVar1 = this_ptr->first_actor;
    while( true ) {
      if (pCVar1 == (CDemonActor *)0x0) {
        return;
      }
      if (pCVar1 == param_2) break;
      pCVar1 = pCVar1->next_actor;
    }
    pCVar1 = param_2->prev_actor;
    if (pCVar1 == (CDemonActor *)0x0) {
      pCVar1 = param_2->next_actor;
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
      pCVar2 = param_2->next_actor;
      if (pCVar2 == (CDemonActor *)0x0) {
        this_ptr->last_actor = pCVar1;
        pCVar1->next_actor = (CDemonActor *)0x0;
      }
      else {
        pCVar1->next_actor = pCVar2;
        pCVar2->prev_actor = param_2->prev_actor;
      }
    }
    param_2->next_actor = (CDemonActor *)0x0;
    param_2->prev_actor = (CDemonActor *)0x0;
  }
  return;
}
