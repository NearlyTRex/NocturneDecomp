// Name: core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
// Address: 0042dfc0
// Address Range: [[0042dfc0, 0042e046]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter *this_ptr)

{
  int iVar1;
  float in_stack_0000000c;
  
  core_charactr_cpp_CCharacter_applyGesture_FUN_0042d3d0(this_ptr);
  core_charactr_cpp_CCharacter_applyLookAt_FUN_0042dcd0(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(&this_ptr->model);
  core_charactr_cpp_CCharacter_FUN_0042d530(this_ptr);
  core_charactr_cpp_CCharacter_FUN_0042d090(this_ptr);
  if (this_ptr->field43_0x2620 == 0) {
    iVar1 = (*(((this_ptr->base).vtable._uc)->_uc).isDamageable)(this_ptr);
    if (iVar1 != 1) {
      return;
    }
  }
  core_cloth_cpp_CClothList_process_FUN_0043c2d0
            (&this_ptr->cloth_list,&(this_ptr->base).location.position,
             (CVector3f *)&(this_ptr->base).orient,in_stack_0000000c,
             this_ptr->closest_distance_threshold,&this_ptr->model);
  return;
}
