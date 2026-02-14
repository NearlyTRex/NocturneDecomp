// Name: core_charactr.cpp_CCharacter_drop_FUN_0042bf90
// Address: 0042bf90
// Address Range: [[0042bf90, 0042c00a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_drop_FUN_0042bf90(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_drop_FUN_0042bf90(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

{
  SCarryHand *pSVar1;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (carrier,"..\\core\\charactr.cpp",0x954);
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (&this_ptr->base,"..\\core\\charactr.cpp",0x955);
  pSVar1 = this_ptr->carry_hands;
  do {
    while (carrier == pSVar1->carry_actor) {
      (*((pSVar1->carry_actor->vtable)._ub)->onDropped)(carrier,drop_position);
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
