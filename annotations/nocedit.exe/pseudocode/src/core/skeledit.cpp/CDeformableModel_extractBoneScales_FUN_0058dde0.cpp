// Name: core_skeledit.cpp_CDeformableModel_extractBoneScales_FUN_0058dde0
// Address: 0058dde0
// Address Range: [[0058dde0, 0058de67]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_extractBoneScales_FUN_0058dde0(CDeformableModel *this_ptr,CBoneStructure *bone_structure)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_extractBoneScales_FUN_0058dde0(CDeformableModel *this_ptr,CBoneStructure *bone_structure)

{
  CMatrix3x4f *pCVar4;
  CVector3f *pCVar5;
  int iVar6;
  CVector3f local_24 [2];
  float fVar2;
  float fVar1;
  SBoneData *pSVar3;
  
  iVar6 = 0;
  if (0 < bone_structure->bone_count) {
    pSVar3 = (SBoneData *)&bone_structure->bones[0].local_matrix;
    pCVar5 = this_ptr->vertex_pool;
    do {
      fVar1 = *(float *)(pSVar3->name + 0x1c);
      fVar2 = (pSVar3->local_matrix).m[0].y;
      if (pCVar5 != local_24) {
        pCVar5->x = *(float *)(pSVar3->name + 0xc);
        pCVar5->y = fVar1;
        pCVar5->z = fVar2;
      }
      pCVar5 = pCVar5 + 1;
      iVar6 = iVar6 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar6 < bone_structure->bone_count);
  }
  return;
}
