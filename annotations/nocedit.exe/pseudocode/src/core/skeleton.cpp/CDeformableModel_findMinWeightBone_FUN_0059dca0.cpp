// Name: core_skeleton.cpp_CDeformableModel_findMinWeightBone_FUN_0059dca0
// Address: 0059dca0
// Address Range: [[0059dca0, 0059dd5e]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_findMinWeightBone_FUN_0059dca0 (CDeformableModel *this_ptr,int lod_level,int triangle_index)

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CDeformableModel_findMinWeightBone_FUN_0059dca0
          (CDeformableModel *this_ptr,int lod_level,int triangle_index)

{
  float *pfVar1;
  uchar *puVar2;
  int iVar3;
  SVert *pSVar4;
  int iVar5;
  SVert *pSVar6;
  int iVar7;
  SVert *pSVar8;
  SInputFace *pSVar9;
  float local_1a4 [100];
  ushort *local_14;
  
  iVar5 = 0;
  do {
    iVar3 = iVar5 + 4;
    *(uint *)((int)local_1a4 + iVar5) = 0;
    iVar5 = iVar3;
  } while (iVar3 != 400);
  pSVar9 = this_ptr->tri_data_ptr[lod_level] + triangle_index;
  local_14 = &pSVar9->u_coord_0;
  do {
    pSVar8 = this_ptr->vertex_data_ptr[lod_level] + (pSVar9->vertex_indices).vertex_index_0;
    pSVar4 = pSVar8;
    pSVar6 = pSVar8;
    for (iVar5 = 0; iVar5 < (int)(uint)pSVar8->num_bone_influences; iVar5 = iVar5 + 1) {
      pfVar1 = pSVar6->bone_weights;
      puVar2 = pSVar4->bone_indices;
      pSVar6 = (SVert *)pSVar6->bone_weights;
      pSVar4 = (SVert *)pSVar4->bone_indices;
      local_1a4[*puVar2] = *pfVar1 + local_1a4[*puVar2];
    }
    pSVar9 = (SInputFace *)&(pSVar9->vertex_indices).vertex_index_1;
  } while (pSVar9 != (SInputFace *)local_14);
  iVar7 = 1;
  iVar3 = 4;
  iVar5 = 0;
  do {
    if (local_1a4[iVar5] < *(float *)((int)local_1a4 + iVar3)) {
      iVar5 = iVar7;
    }
    iVar7 = iVar7 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar7 < 100);
  return iVar5;
}
