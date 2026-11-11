// Name: core_charactr.cpp_CCharacter_dropCarriedObject_FUN_00428d60
// Address: 00428d60
// Address Range: [[00428d60, 00428df0]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00428d60(CCharacter *this_ptr,int hand_index,CVector3f *drop_direction)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00428d60(CCharacter *this_ptr,int hand_index,CVector3f *drop_direction)

{
  CDemonActor *this_ptr_00;
  CVector3f *drop_position;
  byte bVar1;
  float afStackY_1014 [1015];
  float local_2c;
  CVector3f local_20;
  CVector3f local_14;
  
  bVar1 = 0;
  if (this_ptr->carry_hands[hand_index].carry_actor != (CDemonActor *)0x0) {
    drop_position = (CVector3f *)0x0;
    if (drop_direction != (CVector3f *)0x0) {
      core_actor_cpp_FUN_00408cf0(this_ptr,drop_direction);
      local_20.x = local_2c;
      *(uint *)((int)&local_20 + (uint)bVar1 * -8 + 4) =
           *(uint *)(&stack0xffffffd8 + (uint)bVar1 * -8);
      *(uint *)((int)&local_20 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
      if (&local_14 != &local_20) {
        local_14.x = local_20.x;
        local_14.y = local_20.y;
        local_14.z = local_20.z;
      }
      drop_position = &local_14;
    }
    this_ptr_00 = this_ptr->carry_hands[hand_index].carry_actor;
    (*((this_ptr_00->vtable)._ub)->onDropped)(this_ptr_00,drop_position);
    this_ptr->carry_hands[hand_index].carry_actor = (CDemonActor *)0x0;
  }
  return;
}
