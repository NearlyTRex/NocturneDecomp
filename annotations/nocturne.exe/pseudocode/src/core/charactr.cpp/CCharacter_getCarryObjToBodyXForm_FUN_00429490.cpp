// Name: core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429490
// Address: 00429490
// Address Range: [[00429490, 004294ee]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429490(CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429490(CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_38;
  
  bVar4 = 0;
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
            (&this_ptr->carry_hands[hand_index].initial_carry_transform,
             (this_ptr->model).bone_transform.bone_model_matrices +
             this_ptr->carry_hands[hand_index].bone_index,&local_38);
  pCVar2 = &local_38;
  pCVar3 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
