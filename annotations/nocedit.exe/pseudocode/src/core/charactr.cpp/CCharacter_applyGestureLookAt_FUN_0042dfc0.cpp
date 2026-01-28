// Name: core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
// Address: 0042dfc0
// Address Range: [[0042dfc0, 0042e046]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter *this_ptr)

{
  int iVar1;
  
  core_charactr_cpp_CCharacter_applyGesture_FUN_0042d3d0(this_ptr);
  core_charactr_cpp_CCharacter_applyLookAt_FUN_0042dcd0(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(&this_ptr->model);
  core_charactr_cpp_CCharacter_FUN_0042d530(this_ptr);
  core_charactr_cpp_CCharacter_FUN_0042d090(this_ptr);
  if (*(int *)this_ptr->unk3 == 0) {
    iVar1 = (*(((this_ptr->base).vtable._uc)->_uc).isDamageable)(this_ptr);
    if (iVar1 != 1) {
      return;
    }
  }
  core_cloth_cpp_FUN_0043c2d0();
  return;
}
