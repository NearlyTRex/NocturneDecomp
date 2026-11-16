// Name: core_doc.cpp_CDoc_tryThrowDynamite_FUN_0045d1f0
// Address: 0045d1f0
// Address Range: [[0045d1f0, 0045d253]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_tryThrowDynamite_FUN_0045d1f0(CDoc *this_ptr)

#include "nocturne.h"

int __cdecl core_doc_cpp_CDoc_tryThrowDynamite_FUN_0045d1f0(CDoc *this_ptr)

{
  CDemonActor *this_ptr_00;
  float fVar1;
  uint uVar2;
  
  this_ptr_00 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((this_ptr_00 != (CDemonActor *)0x0) &&
     (uVar2 = (*((this_ptr_00->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr_00),
     (uVar2 & 4) != 0)) {
    return 0;
  }
  fVar1 = 0x41200000;
  if ((this_ptr->weapon != (CWeapon *)0x0) &&
     (this_ptr->weapon->weapon_type == WEAPON_TYPE_DYNAMITE)) {
    this_ptr->action_pending = 3;
    this_ptr->aim_speed_factor = fVar1;
    return 1;
  }
  return 0;
}
