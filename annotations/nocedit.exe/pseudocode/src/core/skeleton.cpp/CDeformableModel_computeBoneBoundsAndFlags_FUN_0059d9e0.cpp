// Name: core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0
// Address: 0059d9e0
// Address Range: [[0059d9e0, 0059dbd0]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0(CDeformableModel * this_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0
          (CDeformableModel *this_ptr)

{
  uchar *puVar1;
  int iVar2;
  CSkeleton *pCVar3;
  uchar *puVar4;
  CDeformableModel *pCVar5;
  uchar *puVar6;
  int iVar7;
  CVector3f *point;
  CSkeleton *pCVar8;
  int iVar9;
  CBoundingBox3D *this_ptr_00;
  CSkeleton *local_30;
  int local_2c;
  int local_28;
  CDeformableModel *local_24;
  int local_14;
  
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
  local_28 = 0;
  if (0 < this_ptr->vertex_count[0]) {
    local_2c = 0;
    do {
      puVar4 = this_ptr->vertex_data_ptr[0]->bone_indices + local_2c + -1;
      point = (CVector3f *)(puVar4 + 0x10);
      puVar6 = puVar4;
      for (iVar7 = 0; iVar7 < (int)(uint)*puVar4; iVar7 = iVar7 + 1) {
        puVar1 = puVar6 + 1;
        puVar6 = puVar6 + 1;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                  ((CBoundingBox3D *)&this_ptr->bbox_pool[*puVar1].max,point);
        point = point + 1;
        this_ptr->bone_flags[*puVar6] = 1;
      }
      local_2c = local_2c + 0x34;
      local_28 = local_28 + 1;
    } while (local_28 < this_ptr->vertex_count[0]);
  }
  local_14 = 0;
  if (0 < iVar2) {
    local_24 = this_ptr;
    local_30 = pCVar3;
    do {
      if (local_24->bone_flags[0] == 1) {
        if (-1 < local_30->bone_list[0].parent_index) {
          iVar7 = 0;
          pCVar8 = pCVar3;
          pCVar5 = this_ptr;
          if (0 < iVar2) {
            do {
              if ((local_14 == pCVar8->bone_list[0].parent_index) && (pCVar5->bone_flags[0] != 0))
              break;
              iVar7 = iVar7 + 1;
              pCVar8 = (CSkeleton *)((pCVar8->motion_list).state_names[1] + 2);
              pCVar5 = (CDeformableModel *)pCVar5->lod_info;
            } while (iVar7 < iVar2);
          }
          if (iVar7 < iVar2) {
            iVar9 = 0;
            iVar7 = local_14;
            do {
              iVar7 = pCVar3->bone_list[iVar7].parent_index;
              if (iVar7 < 0) {
                g_CurrentFilename = "..\\core\\skeleton.cpp";
                g_CurrentLineNumber = 0x86b;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
              }
            } while ((this_ptr->bone_flags[iVar7] != 2) && (iVar9 = iVar9 + 1, iVar9 < 2));
            if (iVar9 < 2) goto LAB_0059dac0;
          }
        }
        local_24->bone_flags[0] = 2;
      }
LAB_0059dac0:
      local_30 = (CSkeleton *)((local_30->motion_list).state_names[1] + 2);
      local_24 = (CDeformableModel *)local_24->lod_info;
      local_14 = local_14 + 1;
    } while (local_14 < iVar2);
  }
  return;
}
