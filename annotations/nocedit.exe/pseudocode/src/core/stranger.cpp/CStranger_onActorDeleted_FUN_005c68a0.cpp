// Name: core_stranger.cpp_CStranger_onActorDeleted_FUN_005c68a0
// Address: 005c68a0
// Address Range: [[005c68a0, 005c68ea]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_onActorDeleted_FUN_005c68a0 (CStranger *this_ptr,CDemonActor *deleted_actor)

#include "nocturne.h"

void __cdecl
core_stranger_cpp_CStranger_onActorDeleted_FUN_005c68a0
          (CStranger *this_ptr,CDemonActor *deleted_actor)

{
  core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0((CCharacter *)this_ptr,deleted_actor);
  if (deleted_actor == this_ptr->unk2) {
    this_ptr->unk2 = (CDemonActor *)0x0;
    if (deleted_actor != this_ptr->unk4) {
      return;
    }
  }
  else if (deleted_actor != this_ptr->unk4) {
    return;
  }
  this_ptr->unk4 = (CDemonActor *)0x0;
  return;
}
