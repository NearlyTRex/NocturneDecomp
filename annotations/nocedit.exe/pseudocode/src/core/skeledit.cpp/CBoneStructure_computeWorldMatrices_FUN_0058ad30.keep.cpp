// Name: core_skeledit.cpp_CBoneStructure_computeWorldMatrices_FUN_0058ad30
// Address: 0058ad30
// MANUAL RECONSTRUCTION
// Address Range: [[0058ad30, 0058adac]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_computeWorldMatrices_FUN_0058ad30(CBoneStructure *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_computeWorldMatrices_FUN_0058ad30(CBoneStructure *this_ptr)

{
  SBoneData *pSVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f local_44;

  iVar3 = 0;
  if (0 < this_ptr->bone_count) {
    pSVar2 = this_ptr->bones;
    do {
      if (pSVar2->parent_index < 0) {
        pCVar4 = &pSVar2->local_matrix;
        pCVar5 = &pSVar2->world_matrix;
      }
      else {
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&pSVar2->local_matrix,&this_ptr->bones[pSVar2->parent_index].world_matrix,
                   &local_44);
        pCVar5 = &pSVar2->world_matrix;
        pCVar4 = &local_44;
      }
      *pCVar5 = *pCVar4;
      iVar3 = iVar3 + 1;
      pSVar2 = pSVar2 + 1;
    } while (iVar3 < this_ptr->bone_count);
  }
  return;
}
