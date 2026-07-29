// Name: core_charactr.cpp_FUN_00428100
// Address: 00428100
// Address Range: [[00428100, 00428154]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00428100(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00428100(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

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
