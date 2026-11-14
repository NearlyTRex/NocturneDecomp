// Name: core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_00544930
// Address: 00544930
// Address Range: [[00544930, 00544ad4]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_00544930(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_00544930(CDeformableModel *this_ptr)

{
  uchar *puVar1;
  int iVar2;
  CSkeleton *pCVar3;
  int iVar4;
  uchar *puVar5;
  CDeformableModel *pCVar6;
  int iVar7;
  uchar *puVar8;
  CSkeleton *pCVar9;
  int iVar10;
  CDeformableModel *pCVar11;
  CBoundingBox3D *this_ptr_00;
  CVector3f *point;
  CSkeleton *local_2c;
  int local_28;
  int local_24;
  
  pCVar3 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0(this_ptr);
  iVar2 = pCVar3->bone_count;
  iVar7 = 0;
  if (0 < iVar2) {
    this_ptr_00 = this_ptr->bone_bounds;
    pCVar6 = this_ptr;
    do {
      core_box_cpp_CBoundingBox3D_reset_FUN_0041b600(this_ptr_00);
      iVar7 = iVar7 + 1;
      this_ptr_00 = this_ptr_00 + 1;
      pCVar6->bone_flags[0] = 0;
      pCVar6 = (CDeformableModel *)pCVar6->lod_info;
    } while (iVar7 < iVar2);
  }
  local_24 = 0;
  if (0 < this_ptr->vertex_count[0]) {
    local_28 = 0;
    do {
      puVar5 = this_ptr->vertex_data_ptr[0]->bone_indices + local_28 + -1;
      point = (CVector3f *)(puVar5 + 0x10);
      puVar8 = puVar5;
      for (iVar7 = 0; iVar7 < (int)(uint)*puVar5; iVar7 = iVar7 + 1) {
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + 1;
        core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(this_ptr->bone_bounds + *puVar1,point);
        point = point + 1;
        this_ptr->bone_flags[*puVar8] = 1;
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
      if (pCVar6->bone_flags[0] == 1) {
        if (-1 < local_2c->bone_list[0].parent_index) {
          iVar4 = 0;
          pCVar9 = pCVar3;
          pCVar11 = this_ptr;
          if (0 < iVar2) {
            do {
              if ((iVar7 == pCVar9->bone_list[0].parent_index) && (pCVar11->bone_flags[0] != 0))
              break;
              iVar4 = iVar4 + 1;
              pCVar9 = (CSkeleton *)((pCVar9->motion_list).state_names[1] + 2);
              pCVar11 = (CDeformableModel *)pCVar11->lod_info;
            } while (iVar4 < iVar2);
          }
          if (iVar4 < iVar2) {
            iVar10 = 0;
            iVar4 = iVar7;
            do {
              iVar4 = pCVar3->bone_list[iVar4].parent_index;
              if ((iVar4 < 0) || (this_ptr->bone_flags[iVar4] == 2)) break;
              iVar10 = iVar10 + 1;
            } while (iVar10 < 2);
            if (iVar10 < 2) goto LAB_00544a02;
          }
        }
        pCVar6->bone_flags[0] = 2;
      }
LAB_00544a02:
      iVar7 = iVar7 + 1;
      pCVar6 = (CDeformableModel *)pCVar6->lod_info;
      local_2c = (CSkeleton *)((local_2c->motion_list).state_names[1] + 2);
    } while (iVar7 < iVar2);
  }
  return;
}
