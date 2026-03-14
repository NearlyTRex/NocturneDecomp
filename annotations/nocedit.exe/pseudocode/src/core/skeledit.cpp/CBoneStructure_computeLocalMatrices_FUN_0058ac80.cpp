// Name: core_skeledit.cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80
// Address: 0058ac80
// Address Range: [[0058ac80, 0058ad2e]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80(CBoneStructure *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80(CBoneStructure *this_ptr)

{
  int iVar1;
  int iVar2;
  SBoneData *pSVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar3;
  byte bVar6;
  byte bVar4;
  CMatrix3x4f local_a4;
  CMatrix3x4f local_74;
  CMatrix3x4f local_44;
  SBoneData *local_14;
  
  bVar4 = 0;
  iVar3 = 0;
  if (0 < this_ptr->bone_count) {
    pSVar2 = this_ptr->bones;
    do {
      if (pSVar2->parent_index < 0) {
        iVar1 = 0xc;
        pCVar4 = &pSVar2->world_matrix;
        pCVar3 = &pSVar2->local_matrix;
      }
      else {
        core_xform_cpp_inverse_FUN_005f6210
                  (&this_ptr->bones[pSVar2->parent_index].world_matrix,&local_44);
        pCVar5 = &local_44;
        pCVar3 = &local_74;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar5 = (CMatrix3x4f *)((int)pCVar5 + (uint)bVar4 * -8 + 4);
          pCVar3->m[0].w = pCVar5->m[0].w;
          pCVar5 = pCVar5;
          pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&pSVar2->world_matrix,&local_74,&local_a4);
        iVar1 = 0xc;
        pCVar3 = &pSVar2->local_matrix;
        pCVar4 = &local_a4;
      }
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + (uint)bVar4 * -8 + 4);
        pCVar3->m[0].w = pCVar4->m[0].w;
        pCVar4 = pCVar4;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + (uint)bVar4 * -8 + 4);
      }
      iVar3 = iVar3 + 1;
      pSVar2 = pSVar2 + 1;
    } while (iVar3 < this_ptr->bone_count);
  }
  return;
}
