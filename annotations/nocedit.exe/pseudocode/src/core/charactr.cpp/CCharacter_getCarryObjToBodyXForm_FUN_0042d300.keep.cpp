// Name: core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300
// Address: 0042d300
// MANUAL RECONSTRUCTION
// Address Range: [[0042d300, 0042d35e] [03fc46c7, 03fc4725]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300(CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

void __stack2_esi core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300(CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CMatrix3x4f local_38;

  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&this_ptr->carry_hands[hand_index].initial_carry_transform,
             (this_ptr->model).bone_transform.bone_world_matrices +
             this_ptr->carry_hands[hand_index].bone_index,&local_38);
  *out_matrix = local_38;
  return;
}
