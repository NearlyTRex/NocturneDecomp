// Name: core_stranger.cpp_CStranger_FUN_005c5e80
// Address: 005c5e80
// Address Range: [[005c5e80, 005c5ee0]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_FUN_005c5e80(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_FUN_005c5e80(CStranger *this_ptr)

{
  CDemonActor *this_ptr_00;
  float fVar1;
  uint uVar2;
  
  this_ptr_00 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if (((this_ptr_00 == (CDemonActor *)0x0) ||
      (uVar2 = (*((this_ptr_00->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr_00),
      (uVar2 & 4) == 0)) &&
     ((this_ptr->weapon == (CDemonActor *)0x0 || (this_ptr->weapon[2].orient.vec.x != 4.2039e-45))))
  {
    return 0;
  }
  fVar1 = 10.0f;
  this_ptr->action_pending = 3;
  this_ptr->aim_speed_factor = fVar1;
  return 1;
}
