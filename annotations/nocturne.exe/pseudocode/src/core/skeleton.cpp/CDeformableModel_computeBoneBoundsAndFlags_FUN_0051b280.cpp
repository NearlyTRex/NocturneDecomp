// Name: core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280
// Address: 0051b280
// Address Range: [[0051b280, 0051b470]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280(CDeformableModel *this_ptr)

{
  uchar *puVar1;
  char *pcVar2;
  int iVar3;
  CSkeleton *pCVar4;
  uchar *puVar5;
  CDeformableModel *pCVar6;
  uchar *puVar7;
  int iVar8;
  CVector3f *point;
  CSkeleton *pCVar9;
  int iVar10;
  CBoundingBox3D *this_ptr_00;
  CSkeleton *local_34;
  int local_30;
  int local_2c;
  CDeformableModel *local_28;
  int local_18;
  
  pCVar4 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(this_ptr);
  iVar3 = pCVar4->bone_count;
  iVar8 = 0;
  if (0 < iVar3) {
    this_ptr_00 = (CBoundingBox3D *)&this_ptr->texture_sets[1].textures[0x11].textures[0].base.count
    ;
    pCVar6 = this_ptr;
    do {
      core_box_cpp_CBoundingBox3D_reset_FUN_0041dbc0(this_ptr_00);
      iVar8 = iVar8 + 1;
      this_ptr_00 = this_ptr_00 + 1;
      pCVar6->texture_sets[1].textures[0x32].textures[1].base.count = 0;
      pCVar6 = (CDeformableModel *)pCVar6->lod_info;
    } while (iVar8 < iVar3);
  }
  local_2c = 0;
  if (0 < this_ptr->vertex_count[0]) {
    local_30 = 0;
    do {
      puVar5 = this_ptr->vertex_data_ptr[0]->bone_indices + local_30 + -1;
      point = (CVector3f *)(puVar5 + 0x10);
      puVar7 = puVar5;
      for (iVar8 = 0; iVar8 < (int)(uint)*puVar5; iVar8 = iVar8 + 1) {
        puVar1 = puVar7 + 1;
        puVar7 = puVar7 + 1;
        core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00
                  ((CBoundingBox3D *)
                   &this_ptr->texture_sets[1].textures[0x11].textures[*puVar1].base.count,point);
        point = point + 1;
        pcVar2 = this_ptr->texture_sets[1].textures[0x32].textures[1].texture_name +
                 (uint)*puVar7 * 4 + -4;
        pcVar2[0] = '\x01';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
      }
      local_30 = local_30 + 0x34;
      local_2c = local_2c + 1;
    } while (local_2c < this_ptr->vertex_count[0]);
  }
  local_18 = 0;
  if (0 < iVar3) {
    local_28 = this_ptr;
    local_34 = pCVar4;
    do {
      if (local_28->texture_sets[1].textures[0x32].textures[1].base.count == 1) {
        if (-1 < local_34->bone_list[0].parent_index) {
          iVar8 = 0;
          pCVar9 = pCVar4;
          pCVar6 = this_ptr;
          if (0 < iVar3) {
            do {
              if ((local_18 == pCVar9->bone_list[0].parent_index) &&
                 (pCVar6->texture_sets[1].textures[0x32].textures[1].base.count != 0)) break;
              iVar8 = iVar8 + 1;
              pCVar9 = (CSkeleton *)((pCVar9->motion_list).state_names[1] + 2);
              pCVar6 = (CDeformableModel *)pCVar6->lod_info;
            } while (iVar8 < iVar3);
          }
          if (iVar8 < iVar3) {
            iVar10 = 0;
            iVar8 = local_18;
            do {
              iVar8 = pCVar4->bone_list[iVar8].parent_index;
              if (iVar8 < 0) {
                PTR_01cc4800 = "..\\core\\skeleton.cpp";
                INT_01cc4804 = 0x86b;
                core_main_c_FUN_004c8440("Bug!");
              }
            } while ((*(int *)(this_ptr->texture_sets[1].textures[0x32].textures[1].texture_name +
                              iVar8 * 4 + -4) != 2) && (iVar10 = iVar10 + 1, iVar10 < 2));
            if (iVar10 < 2) goto LAB_0051b360;
          }
        }
        local_28->texture_sets[1].textures[0x32].textures[1].base.count = 2;
      }
LAB_0051b360:
      local_34 = (CSkeleton *)((local_34->motion_list).state_names[1] + 2);
      local_28 = (CDeformableModel *)local_28->lod_info;
      local_18 = local_18 + 1;
    } while (local_18 < iVar3);
  }
  return;
}
