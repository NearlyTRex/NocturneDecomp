// Name: core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_0059dca0
// Address: 0059dca0
// MANUAL RECONSTRUCTION
// Address Range: [[0059dca0, 0059dd5e]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_0059dca0(CDeformableModel *this_ptr,int lod_level,int triangle_index)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_0059dca0(CDeformableModel *this_ptr,int lod_level,int triangle_index)

{
  int iVar3;
  ushort *puVar1;
  int iVar5;
  int iVar2;
  int iVar4;
  int iVar7;
  SVert *pSVar8;
  SInputFace *pSVar9;
  float local_1a4 [100];
  
  for (iVar3 = 0; iVar3 < 100; iVar3 = iVar3 + 1) {
    local_1a4[iVar3] = 0.0f;
  }
  pSVar9 = this_ptr->tri_data_ptr[lod_level] + triangle_index;
  puVar1 = (ushort *)&pSVar9->vertex_indices;
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    pSVar8 = this_ptr->vertex_data_ptr[lod_level] + puVar1[iVar4];
    for (iVar5 = 0; iVar5 < (int)(uint)pSVar8->num_bone_influences; iVar5 = iVar5 + 1) {
      local_1a4[pSVar8->bone_indices[iVar5]] =
           pSVar8->bone_weights[iVar5] + local_1a4[pSVar8->bone_indices[iVar5]];
    }
  }
  iVar7 = 1;
  iVar2 = 0;
  do {
    if (local_1a4[iVar2] < local_1a4[iVar7]) {
      iVar2 = iVar7;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 100);
  return iVar2;
}
