// Name: core_charactr.cpp_FUN_0042a150
// Address: 0042a150
// Address Range: [[0042a150, 0042a1d6]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042a150(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_0042a150(CCharacter *this_ptr,float delta_time)

{
  EDeathState EVar1;
  
  core_charactr_cpp_CCharacter_applyGesture_FUN_00429560(this_ptr);
  core_charactr_cpp_CCharacter_applyLookAt_FUN_00429e60(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(&this_ptr->model);
  core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004296c0(this_ptr);
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00429220(this_ptr,delta_time);
  if (this_ptr->was_rendered_opaque == 0) {
    EVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
    if (EVar1 != DEATH_STATE_DYING) {
      return;
    }
  }
  core_cloth_cpp_CClothList_process_FUN_00438550
            (&this_ptr->cloth_list,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec,
             delta_time,this_ptr->closest_distance_threshold,&this_ptr->model);
  return;
}
