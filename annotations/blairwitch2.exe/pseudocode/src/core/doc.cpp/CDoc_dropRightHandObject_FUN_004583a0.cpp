// Name: core_doc.cpp_CDoc_dropRightHandObject_FUN_004583a0
// Address: 004583a0
// Address Range: [[004583a0, 004583e5]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_dropRightHandObject_FUN_004583a0(CDoc *this_ptr)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_dropRightHandObject_FUN_004583a0(CDoc *this_ptr)

{
  if (this_ptr->weapon == (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor) {
    this_ptr->weapon = (CWeapon *)0x0;
  }
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
            ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.model.base,0,1);
  return;
}
