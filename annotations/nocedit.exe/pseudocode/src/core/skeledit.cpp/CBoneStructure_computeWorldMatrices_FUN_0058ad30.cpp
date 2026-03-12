// Name: core_skeledit.cpp_CBoneStructure_computeWorldMatrices_FUN_0058ad30
// Address: 0058ad30
// Address Range: [[0058ad30, 0058adac]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_computeWorldMatrices_FUN_0058ad30(CBoneStructure *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_computeWorldMatrices_FUN_0058ad30(CBoneStructure *this_ptr)

{
  int iVar1;
  SBoneData *pSVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  CMatrix3x4f local_44;
  SBoneData *local_14;
  
  bVar6 = 0;
  __STK();
  iVar3 = 0;
  if (0 < this_ptr->bone_count) {
    pSVar2 = this_ptr->bones;
    do {
      if (pSVar2->parent_index < 0) {
        iVar1 = 0xc;
        pCVar4 = &pSVar2->local_matrix;
        pCVar5 = &pSVar2->world_matrix;
      }
      else {
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&pSVar2->local_matrix,&this_ptr->bones[pSVar2->parent_index].world_matrix,
                   &local_44);
        iVar1 = 0xc;
        pCVar5 = &pSVar2->world_matrix;
        pCVar4 = &local_44;
      }
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + (uint)bVar6 * -8 + 4);
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + (uint)bVar6 * -8 + 4);
        pCVar5->m[0].w = pCVar4->m[0].w;
        pCVar4 = pCVar4;
        pCVar5 = pCVar5;
      }
      iVar3 = iVar3 + 1;
      pSVar2 = pSVar2 + 1;
    } while (iVar3 < this_ptr->bone_count);
  }
  return;
}
