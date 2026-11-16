// Name: core_prye.cpp_CPrye_tryThrowDynamite_FUN_005262f0
// Address: 005262f0
// Address Range: [[005262f0, 0052636b]]
// Convention: __cdecl
// Signature: int __cdecl core_prye_cpp_CPrye_tryThrowDynamite_FUN_005262f0(CPrye *this_ptr)

#include "nocturne.h"

int __cdecl core_prye_cpp_CPrye_tryThrowDynamite_FUN_005262f0(CPrye *this_ptr)

{
  CDemonActor *this_ptr_00;
  CCharacter *this_ptr_01;
  float fVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBX;
  CDemonActor *unaff_ESI;
  
  this_ptr_00 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if (((this_ptr_00 == (CDemonActor *)0x0) ||
      (uVar3 = (*((this_ptr_00->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr_00),
      (uVar3 & 4) == 0)) &&
     ((this_ptr_01 = (CCharacter *)this_ptr->weapon, this_ptr_01 == (CCharacter *)0x0 ||
      (((this_ptr_01->model).bone_origins[0x19].y != 4.2039e-45 ||
       (iVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).canBeGrabbed)
                          (this_ptr_01,unaff_ESI,unaff_EBX), iVar2 == 0)))))) {
    return 0;
  }
  fVar1 = 0x41200000;
  (this_ptr->base).action_pending = 3;
  this_ptr->aim_speed_factor = fVar1;
  return 1;
}
