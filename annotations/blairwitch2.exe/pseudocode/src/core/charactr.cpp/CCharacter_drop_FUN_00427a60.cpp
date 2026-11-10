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
    while (carrier == *(CDemonActor **)(pSVar1 + 8)) {
      (*(((*(CDemonActor **)(pSVar1 + 8))->vtable)._ub)->onDropped)(carrier,drop_position);
      *(uint *)(pSVar1 + 8) = 0;
      pSVar1 = pSVar1 + 0x78;
      if (pSVar1 == (SCarryHand *)&this_ptr->field_0x2708) {
        return;
      }
    }
    pSVar1 = pSVar1 + 0x78;
  } while (pSVar1 != (SCarryHand *)&this_ptr->field_0x2708);
  return;
}
