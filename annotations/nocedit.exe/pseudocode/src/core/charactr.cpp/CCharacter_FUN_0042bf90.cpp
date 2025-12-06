// Name: core_charactr.cpp_CCharacter_FUN_0042bf90
// Address: 0042bf90
// Address Range: [[0042bf90, 0042c00a]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042bf90(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042bf90(CCharacter *this_ptr)

{
  SCarryHand *pSVar1;
  CDemonActor *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (in_stack_00000008,"..\\core\\charactr.cpp",0x954);
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (&this_ptr->base_actor,"..\\core\\charactr.cpp",0x955);
  pSVar1 = this_ptr->carry_hands;
  do {
    while (in_stack_00000008 == pSVar1->carry_actor) {
      (*pSVar1->carry_actor->vtable->onDropped)(in_stack_00000008,in_stack_0000000c);
      pSVar1->carry_actor = (CDemonActor *)0x0;
      pSVar1 = pSVar1 + 1;
      if (pSVar1 == (SCarryHand *)this_ptr->talk_to_me_event) {
        return;
      }
    }
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 != (SCarryHand *)this_ptr->talk_to_me_event);
  return;
}
