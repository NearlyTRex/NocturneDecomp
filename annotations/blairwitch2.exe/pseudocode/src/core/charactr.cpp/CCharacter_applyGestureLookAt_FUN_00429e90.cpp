// Name: core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
// Address: 00429e90
// Address Range: [[00429e90, 00429f16]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter *this_ptr,float delta_time)

{
  EDeathState EVar1;
  
  core_charactr_cpp_CCharacter_applyGesture_FUN_004291f0(this_ptr);
  core_charactr_cpp_CCharacter_applyLookAt_FUN_00429b40(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(&this_ptr->model);
  core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00429390(this_ptr);
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00428e30(this_ptr,delta_time);
  if (this_ptr->was_rendered_opaque == 0) {
    EVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
    if (EVar1 != DEATH_STATE_DYING) {
      return;
    }
  }
  core_cloth_cpp_CClothList_process_FUN_005b1780
            (&this_ptr->cloth_list,(CVector3f *)&(this_ptr->base).field_0x20,
             &(this_ptr->base).orient.vec,delta_time,this_ptr->closest_distance_threshold,
             &this_ptr->model);
  return;
}
