// Name: core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0
// Address: 0042f8a0
// MANUAL RECONSTRUCTION
// Address Range: [[0042f8a0, 0042f8e1]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0(CCharacter *this_ptr,CDemonActor *deleted_actor)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0(CCharacter *this_ptr,CDemonActor *deleted_actor)

{
  int i;

  core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000(&this_ptr->base,deleted_actor);
  for (i = 0; i < 2; i = i + 1) {
    if (this_ptr->carry_hands[i].carry_actor == deleted_actor) {
      this_ptr->carry_hands[i].carry_actor = (CDemonActor *)0x0;
    }
  }
  return;
}
