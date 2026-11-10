// Name: core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0054bb60
// Address: 0054bb60
// Address Range: [[0054bb60, 0054bd04]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0054bb60(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0054bb60(CDeformableModel *this_ptr)

{
  byte *pbVar1;
  int iVar2;
  CSkeleton *pCVar3;
  int iVar4;
  byte *pbVar5;
  CDeformableModel *pCVar6;
  int iVar7;
  byte *pbVar8;
  CSkeleton *pCVar9;
  int iVar10;
  CDeformableModel *pCVar11;
  CBoundingBox3D *this_ptr_00;
  CVector3f *point;
  CSkeleton *local_2c;
  int local_28;
  int local_24;
  
  pCVar3 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0(this_ptr);
  iVar2 = pCVar3->bone_count;
  iVar7 = 0;
  if (0 < iVar2) {
    this_ptr_00 = (CBoundingBox3D *)&this_ptr->field_0x274c;
    pCVar6 = this_ptr;
    do {
      core_box_cpp_CBoundingBox3D_reset_FUN_0041e8b0(this_ptr_00);
      iVar7 = iVar7 + 1;
      this_ptr_00 = this_ptr_00 + 1;
      *(uint *)&pCVar6->field_0x30ac = 0;
      pCVar6 = (CDeformableModel *)pCVar6->lod_info;
    } while (iVar7 < iVar2);
  }
  local_24 = 0;
  if (0 < this_ptr->vertex_count[0]) {
    local_28 = 0;
    do {
      pbVar5 = &this_ptr->vertex_data_ptr[0]->field_0x0 + local_28;
      point = (CVector3f *)(pbVar5 + 0x10);
      pbVar8 = pbVar5;
      for (iVar7 = 0; iVar7 < (int)(uint)*pbVar5; iVar7 = iVar7 + 1) {
        pbVar1 = pbVar8 + 1;
        pbVar8 = pbVar8 + 1;
        core_box_cpp_CBoundingBox3D_expand_FUN_0041d840
                  ((CBoundingBox3D *)(&this_ptr->field_0x274c + (uint)*pbVar1 * 0x18),point);
        point = point + 1;
        *(uint *)(&this_ptr->field_0x30ac + (uint)*pbVar8 * 4) = 1;
      }
      local_28 = local_28 + 0x34;
      local_24 = local_24 + 1;
    } while (local_24 < this_ptr->vertex_count[0]);
  }
  iVar7 = 0;
  pCVar6 = this_ptr;
  local_2c = pCVar3;
  if (0 < iVar2) {
    do {
      if (*(int *)&pCVar6->field_0x30ac == 1) {
        if (-1 < *(int *)(local_2c->bone_list + 0x20)) {
          iVar4 = 0;
          pCVar9 = pCVar3;
          pCVar11 = this_ptr;
          if (0 < iVar2) {
            do {
              if ((iVar7 == *(int *)(pCVar9->bone_list + 0x20)) &&
                 (*(int *)&pCVar11->field_0x30ac != 0)) break;
              iVar4 = iVar4 + 1;
              pCVar9 = (CSkeleton *)&pCVar9->field_0x24;
              pCVar11 = (CDeformableModel *)pCVar11->lod_info;
            } while (iVar4 < iVar2);
          }
          if (iVar4 < iVar2) {
            iVar10 = 0;
            iVar4 = iVar7;
            do {
              iVar4 = *(int *)(pCVar3->bone_list + iVar4 * 0x24 + 0x20);
              if ((iVar4 < 0) || (*(int *)(&this_ptr->field_0x30ac + iVar4 * 4) == 2)) break;
              iVar10 = iVar10 + 1;
            } while (iVar10 < 2);
            if (iVar10 < 2) goto LAB_0054bc32;
          }
        }
        *(uint *)&pCVar6->field_0x30ac = 2;
      }
LAB_0054bc32:
      iVar7 = iVar7 + 1;
      pCVar6 = (CDeformableModel *)pCVar6->lod_info;
      local_2c = (CSkeleton *)&local_2c->field_0x24;
    } while (iVar7 < iVar2);
  }
  return;
}
