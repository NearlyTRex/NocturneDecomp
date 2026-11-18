// Name: core_prye.cpp_CPrye_dropRightHandObject_FUN_00520da0
// Address: 00520da0
// Address Range: [[00520da0, 00520de5]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_dropRightHandObject_FUN_00520da0(CPrye *this_ptr)

#include "nocturne.h"

void __cdecl core_prye_cpp_CPrye_dropRightHandObject_FUN_00520da0(CPrye *this_ptr)

{
  if (this_ptr->weapon == (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor) {
    this_ptr->weapon = (CWeapon *)0x0;
  }
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
            ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            (&(this_ptr->base).base.model.base,0,1);
  return;
}
