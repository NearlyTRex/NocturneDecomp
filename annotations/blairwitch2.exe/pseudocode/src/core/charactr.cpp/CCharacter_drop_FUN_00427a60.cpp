// Name: core_charactr.cpp_CCharacter_drop_FUN_00427a60
// Address: 00427a60
// Address Range: [[00427a60, 00427ab4]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_drop_FUN_00427a60(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_drop_FUN_00427a60(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

{
  SCarryHand *pSVar1;
  
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
