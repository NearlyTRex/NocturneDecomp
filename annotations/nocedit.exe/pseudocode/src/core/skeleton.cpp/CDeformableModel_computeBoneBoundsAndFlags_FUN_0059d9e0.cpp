// Name: core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0
// Address: 0059d9e0
// Address Range: [[0059d9e0, 0059dbd0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0(CDeformableModel *this_ptr)

{
  CSkeleton *pCVar3;
  uchar *puVar4;
  CDeformableModel *pCVar5;
  uchar *puVar6;
  int iVar7;
  CVector3f *point;
  CSkeleton *pCVar8;
  int iVar9;
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CDeformableModel *pCVar2;
  CSkeleton *local_34;
  int local_30;
  int local_2c;
  CDeformableModel *local_28;
  int local_18;
  int iVar2;
  uchar *puVar1;
  
  pCVar3 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  iVar2 = pCVar3->bone_count;
  iVar7 = 0;
  if (0 < iVar2) {
    this_ptr_00 = (CBoundingBox3D *)&this_ptr->bbox_pool[0].max;
    pCVar5 = this_ptr;
    do {
      core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0(this_ptr_00);
      iVar7 = iVar7 + 1;
      this_ptr_00 = this_ptr_00 + 1;
      pCVar5->bone_flags[0] = 0;
      pCVar5 = (CDeformableModel *)pCVar5->lod_info;
    } while (iVar7 < iVar2);
  }
  local_2c = 0;
  if (0 < this_ptr->vertex_count[0]) {
    local_30 = 0;
    do {
      puVar4 = this_ptr->vertex_data_ptr[0]->bone_indices + local_30 + -1;
      point = (CVector3f *)(puVar4 + 0x10);
      puVar6 = puVar4;
      for (iVar1 = 0; iVar1 < (int)(uint)*puVar4; iVar1 = iVar1 + 1) {
        puVar1 = puVar6 + 1;
        puVar6 = puVar6 + 1;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                  ((CBoundingBox3D *)&this_ptr->bbox_pool[*puVar1].max,point);
        point = point + 1;
        this_ptr->bone_flags[*puVar6] = 1;
      }
      local_30 = local_30 + 0x34;
      local_2c = local_2c + 1;
    } while (local_2c < this_ptr->vertex_count[0]);
  }
  local_18 = 0;
  if (0 < iVar2) {
    local_28 = this_ptr;
    local_34 = pCVar3;
    do {
      if (local_28->bone_flags[0] == 1) {
        if (-1 < local_34->bone_list[0].parent_index) {
          iVar1 = 0;
          pCVar8 = pCVar3;
          pCVar2 = this_ptr;
          if (0 < iVar2) {
            do {
              if ((local_18 == pCVar8->bone_list[0].parent_index) && (pCVar2->bone_flags[0] != 0))
              break;
              pCVar8 = (CSkeleton *)((pCVar8->motion_list).state_names[1] + 2);
              iVar1 = iVar1 + 1;
              pCVar2 = (CDeformableModel *)pCVar2->lod_info;
            } while (iVar1 < iVar2);
          }
          if (iVar1 < iVar2) {
            iVar9 = 0;
            iVar1 = local_18;
            do {
              iVar1 = pCVar3->bone_list[iVar1].parent_index;
              if (iVar1 < 0) {
                g_CurrentFilename = "..\\core\\skeleton.cpp";
                g_CurrentLineNumber = 2155;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
              }
            } while ((this_ptr->bone_flags[iVar1] != 2) && (iVar9 = iVar9 + 1, iVar9 < 2));
            if (iVar9 < 2) goto LAB_0059dac0;
          }
        }
        local_28->bone_flags[0] = 2;
      }
LAB_0059dac0:
      local_34 = (CSkeleton *)((local_34->motion_list).state_names[1] + 2);
      local_28 = (CDeformableModel *)local_28->lod_info;
      local_18 = local_18 + 1;
    } while (local_18 < iVar2);
  }
  return;
}
