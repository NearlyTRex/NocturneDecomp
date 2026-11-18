// Name: core_charactr.cpp_CCharacter_dropCarriedObject_FUN_00431c40
// Address: 00431c40
// Address Range: [[00431c40, 00431cd0]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00431c40(CCharacter *this_ptr,int hand_index,CVector3f *drop_direction)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00431c40(CCharacter *this_ptr,int hand_index,CVector3f *drop_direction)

{
  CDemonActor *this_ptr_00;
  CVector3f *drop_position;
  byte bVar1;
  float afStackY_1014 [1015];
  CVector3f local_2c;
  float local_20;
  float local_1c [2];
  CVector3f local_14;
  
  bVar1 = 0;
  if (this_ptr->carry_hands[hand_index].carry_actor != (CDemonActor *)0x0) {
    drop_position = (CVector3f *)0x0;
    if (drop_direction != (CVector3f *)0x0) {
      core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                (&this_ptr->base,drop_direction,&local_2c);
      local_20 = local_2c.x;
      local_1c[(uint)bVar1 * -2] = *(float *)((int)&local_2c + (uint)bVar1 * -8 + 4);
      local_1c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
           *(float *)((int)&local_2c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
      if (local_1c + 2 != &local_20) {
        local_14.x = local_20;
        local_14.y = local_1c[0];
        local_14.z = local_1c[1];
      }
      drop_position = (CVector3f *)(local_1c + 2);
    }
    this_ptr_00 = this_ptr->carry_hands[hand_index].carry_actor;
    (*((this_ptr_00->vtable)._ub)->onDropped)(this_ptr_00,drop_position);
    this_ptr->carry_hands[hand_index].carry_actor = (CDemonActor *)0x0;
  }
  return;
}
