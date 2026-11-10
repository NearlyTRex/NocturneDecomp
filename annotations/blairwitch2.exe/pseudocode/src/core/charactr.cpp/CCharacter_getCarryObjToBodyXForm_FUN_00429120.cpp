// Name: core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120
// Address: 00429120
// Address Range: [[00429120, 0042917e]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120(CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120(CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  float local_38 [12];
  
  bVar4 = 0;
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
            (this_ptr->carry_hands + hand_index * 0x78 + 0xc,
             &(this_ptr->model).field_0xe80 +
             *(int *)(this_ptr->carry_hands + hand_index * 0x78) * 0x30);
  pfVar2 = local_38;
  pCVar3 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
