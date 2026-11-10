// Name: core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
// Address: 00433350
// Address Range: [[00433350, 004333d6]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter *this_ptr,float delta_time)

{
  EDeathState EVar1;
  
  core_charactr_cpp_FUN_004320d0(this_ptr);
  core_charactr_cpp_CCharacter_applyLookAt_FUN_00433000(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(&this_ptr->model);
  core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004322a0(this_ptr);
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00431d10(this_ptr,delta_time);
  if (this_ptr->was_rendered_opaque == 0) {
    EVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
    if (EVar1 != DEATH_STATE_DYING) {
      return;
    }
  }
  core_cloth_cpp_CClothList_process_FUN_0043fc00
            (&this_ptr->cloth_list,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec,
             delta_time,this_ptr->closest_distance_threshold,&this_ptr->model);
  return;
}
