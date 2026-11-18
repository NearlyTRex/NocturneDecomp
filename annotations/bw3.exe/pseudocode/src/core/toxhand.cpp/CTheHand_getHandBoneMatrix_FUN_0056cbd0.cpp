// Name: core_toxhand.cpp_CTheHand_getHandBoneMatrix_FUN_0056cbd0
// Address: 0056cbd0
// Address Range: [[0056cbd0, 0056cc0e]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_toxhand_cpp_CTheHand_getHandBoneMatrix_FUN_0056cbd0(CTheHand *this_ptr,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack_esi core_toxhand_cpp_CTheHand_getHandBoneMatrix_FUN_0056cbd0(CTheHand *this_ptr,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  float *pfVar3;
  float *pfVar4;
  float afStack_34 [12];
  
  pCVar2 = (this_ptr->base).base.model.bone_transform.bone_model_matrices + g_INT_02cfd798;
  pfVar3 = afStack_34;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = (float)pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2->m + 4);
    pfVar3 = pfVar3 + 1;
  }
  pfVar3 = afStack_34;
  pfVar4 = (float *)out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  }
  return out_matrix;
}
