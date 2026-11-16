// Name: core_doc.cpp_CDoc_tryThrowDynamite_FUN_00475890
// Address: 00475890
// Address Range: [[00475890, 004758f0]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_tryThrowDynamite_FUN_00475890(CDoc *this_ptr)

#include "nocturne.h"

int __cdecl core_doc_cpp_CDoc_tryThrowDynamite_FUN_00475890(CDoc *this_ptr)

{
  CDemonActor *this_ptr_00;
  float fVar1;
  uint uVar2;
  
  this_ptr_00 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if (((this_ptr_00 == (CDemonActor *)0x0) ||
      (uVar2 = (*((this_ptr_00->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr_00),
      (uVar2 & 4) == 0)) &&
     ((this_ptr->weapon == (CWeapon *)0x0 || (this_ptr->weapon->weapon_type != WEAPON_TYPE_DYNAMITE)
      ))) {
    return 0;
  }
  fVar1 = 0x41200000;
  (this_ptr->base).action_pending = 3;
  this_ptr->aim_speed_factor = fVar1;
  return 1;
}
