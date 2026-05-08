// Name: core_charactr.cpp_CCharacter_dropCarriedObject_FUN_0042cfe0
// Address: 0042cfe0
// MANUAL RECONSTRUCTION
// Address Range: [[0042cfe0, 0042d05c]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0(CCharacter *this_ptr,int hand_index,CVector3f *drop_direction)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0(CCharacter *this_ptr,int hand_index,CVector3f *drop_direction)

{
  CVector3f *pCVar1;
  CVector3f *drop_position;
  CVector3f local_1c;
  CVector3f local_10;
  CDemonActor *this_ptr_00;
  
  if (this_ptr->carry_hands[hand_index].carry_actor != (CDemonActor *)0x0) {
    drop_position = (CVector3f *)0x0;
    if (drop_direction != (CVector3f *)0x0) {
      pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (&this_ptr->base,&local_1c,drop_direction);
      if (&local_10 != pCVar1) {
        local_10 = *pCVar1;
      }
      drop_position = &local_10;
    }
    this_ptr_00 = this_ptr->carry_hands[hand_index].carry_actor;
    (*((this_ptr_00->vtable)._ub)->onDropped)(this_ptr_00,drop_position);
    this_ptr->carry_hands[hand_index].carry_actor = (CDemonActor *)0x0;
  }
  return;
}
