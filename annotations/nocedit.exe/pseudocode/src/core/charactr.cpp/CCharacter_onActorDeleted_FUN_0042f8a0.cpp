// Name: core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0
// Address: 0042f8a0
// Address Range: [[0042f8a0, 0042f8e1]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0 (CCharacter *this_ptr,CDemonActor *deleted_actor)

#include "nocturne.h"

void __cdecl
core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0
          (CCharacter *this_ptr,CDemonActor *deleted_actor)

{
  char *pcVar1;
  
  core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000(&this_ptr->base,deleted_actor);
  pcVar1 = (this_ptr->base).create_event + 0x10;
  do {
    while (deleted_actor == this_ptr->carry_hands[0].carry_actor) {
      this_ptr->carry_hands[0].carry_actor = (CDemonActor *)0x0;
      this_ptr = (CCharacter *)&(this_ptr->base).orient_matrix.m[0].z;
      if (this_ptr == (CCharacter *)pcVar1) {
        return;
      }
    }
    this_ptr = (CCharacter *)&(this_ptr->base).orient_matrix.m[0].z;
  } while (this_ptr != (CCharacter *)pcVar1);
  return;
}
