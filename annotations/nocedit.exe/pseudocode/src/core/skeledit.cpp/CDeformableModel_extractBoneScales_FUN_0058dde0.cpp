// Name: core_skeledit.cpp_CDeformableModel_extractBoneScales_FUN_0058dde0
// Address: 0058dde0
// Address Range: [[0058dde0, 0058de67]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_extractBoneScales_FUN_0058dde0(CDeformableModel *this_ptr,CBoneStructure *bone_structure)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_extractBoneScales_FUN_0058dde0(CDeformableModel *this_ptr,CBoneStructure *bone_structure)

{
  float fVar1;
  float fVar2;
  SBoneData *pSVar3;
  CMatrix3x4f *pCVar4;
  CVector3f *pCVar5;
  int iVar6;
  uint local_24 [6];
  
  __STK();
  iVar6 = 0;
  if (0 < bone_structure->bone_count) {
    pSVar3 = bone_structure->bones;
    pCVar5 = this_ptr->vertex_pool;
    do {
      pCVar4 = &pSVar3->local_matrix;
      fVar1 = pCVar4->m[1].z;
      fVar2 = pCVar4->m[2].z;
      if (pCVar5 != (CVector3f *)local_24) {
        pCVar5->x = pCVar4->m[0].z;
        pCVar5->y = fVar1;
        pCVar5->z = fVar2;
      }
      pCVar5 = pCVar5 + 1;
      iVar6 = iVar6 + 1;
      pSVar3 = (SBoneData *)(pCVar4 + 2);
    } while (iVar6 < bone_structure->bone_count);
  }
  return;
}
