// Name: core_doc.cpp_CDoc_getCarryObjToBodyXForm_FUN_00474250
// Address: 00474250
// Address Range: [[00474250, 00474293]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_doc_cpp_CDoc_getCarryObjToBodyXForm_FUN_00474250(CDoc *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_doc_cpp_CDoc_getCarryObjToBodyXForm_FUN_00474250(CDoc *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  float afStack_38 [12];
  
  bVar4 = 0;
  core_doc_cpp_FUN_0046f740
            (this_ptr,*(uint *)(&this_ptr->field_0x25b0 + hand_index * 0x78),hand_index);
  pfVar2 = afStack_38;
  pCVar3 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
