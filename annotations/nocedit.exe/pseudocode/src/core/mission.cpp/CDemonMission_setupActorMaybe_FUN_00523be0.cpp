// Name: core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0
// Address: 00523be0
// Address Range: [[00523be0, 00523cb0]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_setupActorMaybe_FUN_00523be0 (CDemonMission *this_ptr,CDemonActor *actor_ptr)

#include "nocturne.h"

void __cdecl
core_mission_cpp_CDemonMission_setupActorMaybe_FUN_00523be0
          (CDemonMission *this_ptr,CDemonActor *actor_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  
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
  iVar2 = actor_ptr->unk15;
  if (iVar2 == 0) {
    pCVar1 = actor_ptr->next_actor;
    if (pCVar1 == (CDemonActor *)0x0) {
      this_ptr->first_actor = (CDemonActor *)0x0;
      this_ptr->unk4[0] = '\0';
      this_ptr->unk4[1] = '\0';
      this_ptr->unk4[2] = '\0';
      this_ptr->unk4[3] = '\0';
    }
    else {
      this_ptr->first_actor = pCVar1;
      pCVar1->unk15 = 0;
    }
  }
  else {
    pCVar1 = actor_ptr->next_actor;
    if (pCVar1 == (CDemonActor *)0x0) {
      *(int *)this_ptr->unk4 = iVar2;
      *(uint *)(iVar2 + 0x14c) = 0;
    }
    else {
      *(CDemonActor **)(iVar2 + 0x14c) = pCVar1;
      pCVar1->unk15 = actor_ptr->unk15;
    }
  }
  actor_ptr->next_actor = (CDemonActor *)0x0;
  actor_ptr->unk15 = 0;
  return;
}
