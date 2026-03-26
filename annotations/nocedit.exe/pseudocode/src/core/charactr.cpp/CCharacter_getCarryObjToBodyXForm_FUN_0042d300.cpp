// Name: core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300
// Address: 0042d300
// Address Range: [[0042d300, 0042d35e] [03fc46c7, 03fc4725]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300(CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

void __stack2_esi core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300(CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  byte bVar3;
  CMatrix3x4f local_38;
  
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&this_ptr->carry_hands[hand_index].initial_carry_transform,
             (this_ptr->model).bone_transform.bone_world_matrices +
             this_ptr->carry_hands[hand_index].bone_index,&local_38);
  out_matrix->m[0].w = local_38.m[0].w;
  out_matrix->m[0].x = local_38.m[0].x;
  out_matrix->m[0].y = local_38.m[0].y;
  out_matrix->m[0].z = local_38.m[0].z;
  out_matrix->m[1].w = local_38.m[1].w;
  out_matrix->m[1].x = local_38.m[1].x;
  out_matrix->m[1].y = local_38.m[1].y;
  out_matrix->m[1].z = local_38.m[1].z;
  out_matrix->m[2].w = local_38.m[2].w;
  out_matrix->m[2].x = local_38.m[2].x;
  out_matrix->m[2].y = local_38.m[2].y;
  out_matrix->m[2].z = local_38.m[2].z;
  return;
}
