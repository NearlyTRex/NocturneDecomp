// Name: core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
// Address: 00433e80
// Address Range: [[00433e80, 00433f06]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter *this_ptr,float delta_time)

{
  EDeathState EVar1;
  
  core_charactr_cpp_FUN_00432cb0(this_ptr);
  core_charactr_cpp_CCharacter_applyLookAt_FUN_00433b30(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(&this_ptr->model);
  core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00432e80(this_ptr);
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_004328f0(this_ptr,delta_time);
  if (this_ptr->was_rendered_opaque == 0) {
    EVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
    if (EVar1 != DEATH_STATE_DYING) {
      return;
    }
  }
  core_cloth_cpp_CClothList_process_FUN_00441fa0
            (&this_ptr->cloth_list,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec,
             delta_time,this_ptr->closest_distance_threshold,&this_ptr->model);
  return;
}
