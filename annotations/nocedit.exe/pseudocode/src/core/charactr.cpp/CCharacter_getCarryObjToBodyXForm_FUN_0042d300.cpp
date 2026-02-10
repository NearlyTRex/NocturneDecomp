// Name: core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300
// Address: 0042d300
// Address Range: [[0042d300, 0042d35e]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300 (CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

void __stack2_esi
core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300
          (CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  byte bVar3;
  CMatrix3x4f local_38;
  
  bVar3 = 0;
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&this_ptr->carry_hands[hand_index].initial_carry_transform,
             (this_ptr->model).bone_transform.bone_world_matrices +
             this_ptr->carry_hands[hand_index].bone_index,&local_38);
  pCVar2 = &local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    out_matrix->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar3 * -2 + 1) * 4);
    out_matrix = (CMatrix3x4f *)((int)out_matrix + ((uint)bVar3 * -2 + 1) * 4);
  }
  return;
}
