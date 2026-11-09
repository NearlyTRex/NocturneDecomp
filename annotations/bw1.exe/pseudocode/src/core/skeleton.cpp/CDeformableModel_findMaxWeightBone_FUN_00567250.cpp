// Name: core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_00567250
// Address: 00567250
// Address Range: [[00567250, 0056730e]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_00567250(CDeformableModel *this_ptr,int lod_level,int triangle_index)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_00567250(CDeformableModel *this_ptr,int lod_level,int triangle_index)

{
  float *pfVar1;
  byte *pbVar2;
  int iVar3;
  ushort *puVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  float local_1a4 [100];
  ushort *local_14;
  
  iVar6 = 0;
  do {
    iVar3 = iVar6 + 4;
    *(uint *)((int)local_1a4 + iVar6) = 0;
    iVar6 = iVar3;
  } while (iVar3 != 400);
  puVar4 = (ushort *)(*(int *)(&this_ptr->field_0x7c + lod_level * 4) + triangle_index * 0x12);
  local_14 = puVar4 + 3;
  do {
    pbVar9 = (byte *)(*(int *)(&this_ptr->field_0x40 + lod_level * 4) + (uint)*puVar4 * 0x34);
    pbVar5 = pbVar9;
    pbVar7 = pbVar9;
    for (iVar6 = 0; iVar6 < (int)(uint)*pbVar9; iVar6 = iVar6 + 1) {
      pfVar1 = (float *)(pbVar7 + 4);
      pbVar2 = pbVar5 + 1;
      pbVar7 = pbVar7 + 4;
      pbVar5 = pbVar5 + 1;
      local_1a4[*pbVar2] = *pfVar1 + local_1a4[*pbVar2];
    }
    puVar4 = puVar4 + 1;
  } while (puVar4 != local_14);
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
