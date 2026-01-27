// Name: core_charactr.cpp_CCharacter_FUN_0042f8a0
// Address: 0042f8a0
// Address Range: [[0042f8a0, 0042f8e1]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042f8a0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042f8a0(CCharacter *this_ptr)

{
  char *pcVar1;
  CDemonActor *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000(&this_ptr->base,in_stack_00000008);
  pcVar1 = (this_ptr->base).create_event + 0x10;
  do {
    while (in_stack_00000008 == this_ptr->carry_hands[0].carry_actor) {
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
