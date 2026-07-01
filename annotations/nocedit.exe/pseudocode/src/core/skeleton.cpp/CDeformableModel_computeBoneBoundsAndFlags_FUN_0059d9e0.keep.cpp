// Name: core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0
// Address: 0059d9e0
// MANUAL RECONSTRUCTION
// Address Range: [[0059d9e0, 0059dbd0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0(CDeformableModel *this_ptr)

{
  CSkeleton *pCVar3;
  SVert *pSVar4;
  int iVar7;
  CVector3f *point;
  int iVar9;
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  int local_2c;
  int local_18;
  int iVar2;
  uchar bone_idx;
  
  pCVar3 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  iVar2 = pCVar3->bone_count;
  iVar7 = 0;
  if (0 < iVar2) {
    this_ptr_00 = (CBoundingBox3D *)&this_ptr->bbox_pool[0].max;
    do {
      core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
      this_ptr->bone_flags[iVar7] = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  local_2c = 0;
  if (0 < this_ptr->vertex_count[0]) {
    do {
      pSVar4 = this_ptr->vertex_data_ptr[0] + local_2c;
      point = &pSVar4->position;
      for (iVar1 = 0; iVar1 < (int)(uint)pSVar4->num_bone_influences; iVar1 = iVar1 + 1) {
        bone_idx = pSVar4->bone_indices[iVar1];
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                  ((CBoundingBox3D *)&this_ptr->bbox_pool[bone_idx].max,point);
        point = point + 1;
        this_ptr->bone_flags[bone_idx] = 1;
      }
      local_2c = local_2c + 1;
    } while (local_2c < this_ptr->vertex_count[0]);
  }
  local_18 = 0;
  if (0 < iVar2) {
    do {
      if (this_ptr->bone_flags[local_18] == 1) {
        if (-1 < pCVar3->bone_list[local_18].parent_index) {
          iVar1 = 0;
          do {
            if ((local_18 == pCVar3->bone_list[iVar1].parent_index) &&
                (this_ptr->bone_flags[iVar1] != 0)) break;
            iVar1 = iVar1 + 1;
          } while (iVar1 < iVar2);
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
        this_ptr->bone_flags[local_18] = 2;
      }
LAB_0059dac0:
      local_18 = local_18 + 1;
    } while (local_18 < iVar2);
  }
  return;
}
