// Name: core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
// Address: 0042dfc0
// Address Range: [[0042dfc0, 0042e046]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 (CCharacter *this_ptr,float delta_time,float param_3)

#include "nocturne.h"

void __cdecl
core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
          (CCharacter *this_ptr,float delta_time,float param_3)

{
  int iVar1;
  
  core_charactr_cpp_CCharacter_applyGesture_FUN_0042d3d0(this_ptr);
  core_charactr_cpp_CCharacter_applyLookAt_FUN_0042dcd0(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(&this_ptr->model);
  core_charactr_cpp_CCharacter_computeBoundingBox_FUN_0042d530(this_ptr);
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_0042d090(this_ptr,delta_time);
  if (this_ptr->field43_0x2620 == 0) {
    iVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
    if (iVar1 != 1) {
      return;
    }
  }
  core_cloth_cpp_CClothList_process_FUN_0043c2d0
            (&this_ptr->cloth_list,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec,
             param_3,this_ptr->closest_distance_threshold,&this_ptr->model);
  return;
}
