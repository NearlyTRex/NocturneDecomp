// Name: core_skeleton.cpp_CDeformableModel_dismember_FUN_0054a6a0
// Address: 0054a6a0
// Address Range: [[0054a6a0, 0054ac4a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_0054a6a0(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,CVector3i *skinned_vertices,int texture_set_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_0054a6a0(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,CVector3i *skinned_vertices,int texture_set_index)

{
  SInputFace *pSVar1;
  SLod *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  SMRGLPrimitiveTriangle *pSVar9;
  SInputFace *pSVar10;
  SInputFace *pSVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  byte bVar15;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar15 = 0;
  if (body_part_ptr != (CBodyPart *)0x0) {
    if (*(int *)(this_ptr->lod_info + lod_index * 8 + 4) != 0) {
      _DAT_01d71de0 = "..\\core\\skeleton.cpp";
      _DAT_01d71de4 = 0x64d;
      core_main_c_FUN_004e4330("CDeformableModel::dismember - can't dismember shadow LOD.");
    }
    iVar5 = lod_index * 4;
    local_30 = *(int *)(this_ptr->lod_info + iVar5 + -4 + 0x54);
    local_2c = 0;
    iVar7 = 0;
    pSVar2 = this_ptr->lod_info + iVar5 + -4;
    if (0 < part_index) {
      do {
        iVar7 = iVar7 + 1;
        local_2c = local_2c + *(int *)(pSVar2 + 0xc24);
        local_30 = local_30 + *(int *)(pSVar2 + 0xc38);
        pSVar2 = pSVar2 + 0x60;
      } while (iVar7 < part_index);
    }
    iVar7 = local_2c + *(int *)(&this_ptr->field_0xc24 + iVar5 + part_index * 0x60);
    iVar5 = local_30 + *(int *)(&this_ptr->field_0xc38 + iVar5 + part_index * 0x60);
    if (4000 < this_ptr->vertex_count[lod_index]) {
      _DAT_01d71de0 = "..\\core\\skeleton.cpp";
      _DAT_01d71de4 = 0x662;
      core_main_c_FUN_004e4330("CDeformableModel::dismember - too many vertices!");
    }
    memset((void *)0x270f9bc,0,this_ptr->vertex_count[lod_index] << 2);
    if (local_2c < iVar7) {
      iVar3 = local_2c * 0x12;
      do {
        pSVar10 = this_ptr->tri_data_ptr[lod_index];
        *(uint *)((uint)*(ushort *)(pSVar10 + iVar3) * 4 + 0x270f9bc) = 1;
        *(uint *)((uint)*(ushort *)(pSVar10 + iVar3 + 2) * 4 + 0x270f9bc) = 1;
        iVar6 = iVar3 + 4;
        iVar3 = iVar3 + 0x12;
        *(uint *)((uint)*(ushort *)(pSVar10 + iVar6) * 4 + 0x270f9bc) = 1;
      } while (iVar3 < iVar7 * 0x12);
    }
    if (local_30 < iVar5) {
      iVar3 = local_30 * 0x12;
      do {
        pSVar10 = this_ptr->tri_data_ptr[lod_index];
        *(uint *)((uint)*(ushort *)(pSVar10 + iVar3) * 4 + 0x270f9bc) = 1;
        *(uint *)((uint)*(ushort *)(pSVar10 + iVar3 + 2) * 4 + 0x270f9bc) = 1;
        iVar6 = iVar3 + 4;
        iVar3 = iVar3 + 0x12;
        *(uint *)((uint)*(ushort *)(pSVar10 + iVar6) * 4 + 0x270f9bc) = 1;
      } while (iVar3 < iVar5 * 0x12);
    }
    local_14 = body_part_ptr->tri_count;
    iVar3 = body_part_ptr->vertex_count;
    iVar8 = 0;
    iVar6 = iVar3;
    for (iVar4 = 0; iVar4 < this_ptr->vertex_count[lod_index]; iVar4 = iVar4 + 1) {
      if (*(int *)(iVar8 + 0x270f9bc) != 0) {
        iVar6 = iVar6 + 1;
      }
      iVar8 = iVar8 + 4;
    }
    iVar4 = lod_index * 4 + part_index * 0x60;
    core_bodypart_cpp_FUN_00414910
              (body_part_ptr,iVar6,
               body_part_ptr->tri_count + *(int *)(&this_ptr->field_0xc24 + iVar4) +
               *(int *)(&this_ptr->field_0xc38 + iVar4));
    local_18 = 0;
    iVar4 = 0;
    iVar6 = iVar3 * 0xc;
    if (0 < this_ptr->vertex_count[lod_index]) {
      do {
        if (*(int *)(iVar4 + 0x270f9bc) == 0) {
          *(uint *)(iVar4 + 0x270f9bc) = 0xffffffff;
        }
        else {
          *(int *)(iVar4 + 0x270f9bc) = iVar3;
          piVar13 = (int *)((int)&body_part_ptr->vertices->x + iVar6);
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 0xc;
          piVar14 = piVar13 + (uint)bVar15 * -2 + 1;
          piVar12 = (int *)((int)skinned_vertices + (uint)bVar15 * -8 + 4);
          *piVar13 = skinned_vertices->x;
          *piVar14 = *piVar12;
          piVar14[(uint)bVar15 * -2 + 1] = piVar12[(uint)bVar15 * -2 + 1];
        }
        local_18 = local_18 + 1;
        iVar4 = iVar4 + 4;
        skinned_vertices = skinned_vertices + 1;
      } while (local_18 < this_ptr->vertex_count[lod_index]);
    }
    if (iVar3 != body_part_ptr->vertex_count) {
      _DAT_01d71de0 = "..\\core\\skeleton.cpp";
      _DAT_01d71de4 = 0x698;
      core_main_c_FUN_004e4330("CDeformableModel::dismember - Hell froze 1!");
    }
    if (local_2c < iVar7) {
      local_20 = local_2c * 0x12;
      iVar3 = local_14 * 0x3c;
      local_28 = local_14 << 2;
      local_2c = local_2c * 4;
      do {
        pSVar9 = body_part_ptr->faces;
        pSVar10 = this_ptr->tri_data_ptr[lod_index] + local_20;
        *(uint *)(pSVar9 + iVar3 + 4) = 3;
        pSVar11 = pSVar10 + 6;
        pSVar9 = pSVar9 + iVar3;
        do {
          *(uint *)(pSVar9 + 0x18) = *(uint *)((uint)*(ushort *)pSVar10 * 4 + 0x270f9bc)
          ;
          *(uint *)(pSVar9 + 0x1c) = (uint)*(ushort *)(pSVar10 + 6) << 8;
          pSVar1 = pSVar10 + 0xc;
          pSVar10 = pSVar10 + 2;
          *(uint *)(pSVar9 + 0x20) = (uint)*(ushort *)pSVar1 << 8;
          pSVar9 = pSVar9 + 0xc;
        } while (pSVar10 != pSVar11);
        iVar3 = iVar3 + 0x3c;
        iVar6 = core_bodypart_cpp_CBodyPart_addTexture_FUN_00416890
                          (body_part_ptr,
                           (char *)(this_ptr->cap_index_ptr +
                                   texture_set_index * 0x90 +
                                   *(int *)(local_2c + (int)this_ptr->index_data_ptr[lod_index]) *
                                   0x12 + 9));
        local_20 = local_20 + 0x12;
        local_2c = local_2c + 4;
        *(int *)((int)body_part_ptr->face_texture_indices + local_28) = iVar6;
        local_28 = local_28 + 4;
        local_14 = local_14 + 1;
      } while (local_2c < iVar7 * 4);
    }
    if (local_30 < iVar5) {
      local_24 = local_30 * 0x12;
      local_1c = local_14 * 0x3c;
      local_30 = local_30 << 2;
      iVar7 = local_14 << 2;
      do {
        pSVar9 = body_part_ptr->faces;
        pSVar10 = this_ptr->tri_data_ptr[lod_index] + local_24;
        *(uint *)(pSVar9 + local_1c + 4) = 3;
        pSVar11 = pSVar10 + 6;
        pSVar9 = pSVar9 + local_1c;
        do {
          *(uint *)(pSVar9 + 0x18) = *(uint *)((uint)*(ushort *)pSVar10 * 4 + 0x270f9bc)
          ;
          *(uint *)(pSVar9 + 0x1c) = (uint)*(ushort *)(pSVar10 + 6) << 8;
          pSVar1 = pSVar10 + 0xc;
          pSVar10 = pSVar10 + 2;
          *(uint *)(pSVar9 + 0x20) = (uint)*(ushort *)pSVar1 << 8;
          pSVar9 = pSVar9 + 0xc;
        } while (pSVar10 != pSVar11);
        piVar12 = (int *)(local_30 + (int)this_ptr->index_data_ptr[lod_index]);
        local_30 = local_30 + 4;
        iVar3 = core_bodypart_cpp_CBodyPart_addTexture_FUN_00416890
                          (body_part_ptr,
                           (char *)(this_ptr->cap_index_ptr +
                                   texture_set_index * 0x90 + *piVar12 * 0x12 + 9));
        *(int *)((int)body_part_ptr->face_texture_indices + iVar7) = iVar3;
        local_1c = local_1c + 0x3c;
        local_14 = local_14 + 1;
        local_24 = local_24 + 0x12;
        iVar7 = iVar7 + 4;
      } while (local_30 < iVar5 * 4);
    }
    if (local_14 != body_part_ptr->tri_count) {
      _DAT_01d71de0 = "..\\core\\skeleton.cpp";
      _DAT_01d71de4 = 0x6cf;
      core_main_c_FUN_004e4330("CDeformableModel::dismember - Hell froze 2!");
      return;
    }
  }
  return;
}
