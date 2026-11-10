// Name: core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_00544bb0
// Address: 00544bb0
// Address Range: [[00544bb0, 00544c6e]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_00544bb0(CDeformableModel *this_ptr,int lod_level,int triangle_index)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_00544bb0(CDeformableModel *this_ptr,int lod_level,int triangle_index)

{
  byte *puVar1;
  byte *puVar2;
  int iVar3;
  SInputFace *pSVar4;
  SVert *pSVar5;
  int iVar6;
  SVert *pSVar7;
  int iVar8;
  SVert *pSVar9;
  float local_1a4 [100];
  SInputFace *local_14;
  
  iVar6 = 0;
  do {
    iVar3 = iVar6 + 4;
    *(uint *)((int)local_1a4 + iVar6) = 0;
    iVar6 = iVar3;
  } while (iVar3 != 400);
  pSVar4 = this_ptr->tri_data_ptr[lod_level] + triangle_index * 0x12;
  local_14 = pSVar4 + 6;
  do {
    pSVar9 = this_ptr->vertex_data_ptr[lod_level] + *(ushort *)pSVar4;
    pSVar5 = pSVar9;
    pSVar7 = pSVar9;
    for (iVar6 = 0; iVar6 < (int)(uint)*(byte *)pSVar9; iVar6 = iVar6 + 1) {
      puVar1 = &pSVar7->field_0x4;
      puVar2 = &pSVar5->field_0x1;
      pSVar7 = (SVert *)&pSVar7->field_0x4;
      pSVar5 = (SVert *)&pSVar5->field_0x1;
      local_1a4[(byte)*puVar2] = *(float *)puVar1 + local_1a4[(byte)*puVar2];
    }
    pSVar4 = pSVar4 + 2;
  } while (pSVar4 != local_14);
  iVar8 = 1;
  iVar3 = 4;
  iVar6 = 0;
  do {
    if (local_1a4[iVar6] < *(float *)((int)local_1a4 + iVar3)) {
      iVar6 = iVar8;
    }
    iVar8 = iVar8 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar8 < 100);
  return iVar6;
}
