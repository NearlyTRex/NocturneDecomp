// Name: core_skeleton.cpp_CDeformableModel_dismember_FUN_00519ec0
// Address: 00519ec0
// Address Range: [[00519ec0, 0051a46a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_00519ec0(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,CVector3i *skinned_vertices,int texture_set_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_00519ec0(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,CVector3i *skinned_vertices,int texture_set_index)

{
  ushort *puVar1;
  SInputFace *pSVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  byte bVar14;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar14 = 0;
  if (body_part_ptr != (CBodyPart *)0x0) {
    if (this_ptr->lod_info[lod_index].shadow_only_flag != 0) {
      PTR_01cc4800 = "..\\core\\skeleton.cpp";
      INT_01cc4804 = 0x63d;
      core_main_c_FUN_004c8440("CDeformableModel::dismember - can't dismember shadow LOD.");
    }
    iVar5 = lod_index * 4;
    iVar8 = (int)this_ptr->lod_info + iVar5 + -4;
    local_30 = *(int *)(iVar8 + 0x54);
    local_2c = 0;
    iVar7 = 0;
    if (0 < part_index) {
      do {
        iVar7 = iVar7 + 1;
        local_2c = local_2c + *(int *)(iVar8 + 0xc24);
        local_30 = local_30 + *(int *)(iVar8 + 0xc38);
        iVar8 = iVar8 + 0x60;
      } while (iVar7 < part_index);
    }
    iVar8 = local_2c +
            *(int *)((int)this_ptr->texture_sets[0].textures + iVar5 + part_index * 0x60 + 0xb64);
    iVar5 = local_30 +
            *(int *)((int)this_ptr->texture_sets[0].textures + iVar5 + part_index * 0x60 + 0xb78);
    if (4000 < this_ptr->vertex_count[lod_index]) {
      PTR_01cc4800 = "..\\core\\skeleton.cpp";
      INT_01cc4804 = 0x652;
      core_main_c_FUN_004c8440("CDeformableModel::dismember - too many vertices!");
    }
    memset((void *)0x2671950,0,this_ptr->vertex_count[lod_index] << 2);
    if (local_2c < iVar8) {
      iVar7 = local_2c * 0x12;
      do {
        pSVar2 = this_ptr->tri_data_ptr[lod_index];
        *(uint *)
         ((uint)*(ushort *)((int)&(pSVar2->vertex_indices).vertex_index_0 + iVar7) * 4 + 0x2671950)
             = 1;
        *(uint *)
         ((uint)*(ushort *)((int)&(pSVar2->vertex_indices).vertex_index_1 + iVar7) * 4 + 0x2671950)
             = 1;
        puVar4 = (ushort *)((int)&(pSVar2->vertex_indices).vertex_index_2 + iVar7);
        iVar7 = iVar7 + 0x12;
        *(uint *)((uint)*puVar4 * 4 + 0x2671950) = 1;
      } while (iVar7 < iVar8 * 0x12);
    }
    if (local_30 < iVar5) {
      iVar7 = local_30 * 0x12;
      do {
        pSVar2 = this_ptr->tri_data_ptr[lod_index];
        *(uint *)
         ((uint)*(ushort *)((int)&(pSVar2->vertex_indices).vertex_index_0 + iVar7) * 4 + 0x2671950)
             = 1;
        *(uint *)
         ((uint)*(ushort *)((int)&(pSVar2->vertex_indices).vertex_index_1 + iVar7) * 4 + 0x2671950)
             = 1;
        puVar4 = (ushort *)((int)&(pSVar2->vertex_indices).vertex_index_2 + iVar7);
        iVar7 = iVar7 + 0x12;
        *(uint *)((uint)*puVar4 * 4 + 0x2671950) = 1;
      } while (iVar7 < iVar5 * 0x12);
    }
    local_14 = body_part_ptr->tri_count;
    iVar7 = body_part_ptr->vertex_count;
    iVar9 = 0;
    iVar6 = iVar7;
    for (iVar3 = 0; iVar3 < this_ptr->vertex_count[lod_index]; iVar3 = iVar3 + 1) {
      if (*(int *)(iVar9 + 0x2671950) != 0) {
        iVar6 = iVar6 + 1;
      }
      iVar9 = iVar9 + 4;
    }
    iVar3 = lod_index * 4 + part_index * 0x60;
    core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0
              (body_part_ptr,iVar6,
               body_part_ptr->tri_count +
               *(int *)((int)this_ptr->texture_sets[0].textures + iVar3 + 0xb64) +
               *(int *)((int)this_ptr->texture_sets[0].textures + iVar3 + 0xb78));
    local_18 = 0;
    iVar3 = 0;
    iVar6 = iVar7 * 0xc;
    if (0 < this_ptr->vertex_count[lod_index]) {
      do {
        if (*(int *)(iVar3 + 0x2671950) == 0) {
          *(uint *)(iVar3 + 0x2671950) = 0xffffffff;
        }
        else {
          *(int *)(iVar3 + 0x2671950) = iVar7;
          piVar12 = (int *)((int)&body_part_ptr->vertices->x + iVar6);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0xc;
          piVar13 = piVar12 + (uint)bVar14 * -2 + 1;
          piVar11 = (int *)((int)skinned_vertices + (uint)bVar14 * -8 + 4);
          *piVar12 = skinned_vertices->x;
          *piVar13 = *piVar11;
          piVar13[(uint)bVar14 * -2 + 1] = piVar11[(uint)bVar14 * -2 + 1];
        }
        local_18 = local_18 + 1;
        iVar3 = iVar3 + 4;
        skinned_vertices = skinned_vertices + 1;
      } while (local_18 < this_ptr->vertex_count[lod_index]);
    }
    if (iVar7 != body_part_ptr->vertex_count) {
      PTR_01cc4800 = "..\\core\\skeleton.cpp";
      INT_01cc4804 = 0x688;
      core_main_c_FUN_004c8440("CDeformableModel::dismember - Hell froze 1!");
    }
    if (local_2c < iVar8) {
      local_20 = local_2c * 0x12;
      iVar7 = local_14 * 0x3c;
      local_28 = local_14 << 2;
      local_2c = local_2c * 4;
      do {
        iVar6 = (int)&(((SMRGLPrimitiveTriangle *)(body_part_ptr->faces->vertices + -2))->base).base
                      .type + iVar7;
        puVar4 = (ushort *)
                 ((int)&(this_ptr->tri_data_ptr[lod_index]->vertex_indices).vertex_index_0 +
                 local_20);
        *(uint *)(iVar6 + 4) = 3;
        puVar10 = puVar4 + 3;
        do {
          *(uint *)(iVar6 + 0x18) = *(uint *)((uint)*puVar4 * 4 + 0x2671950);
          *(uint *)(iVar6 + 0x1c) = (uint)puVar4[3] << 8;
          puVar1 = puVar4 + 6;
          puVar4 = puVar4 + 1;
          *(uint *)(iVar6 + 0x20) = (uint)*puVar1 << 8;
          iVar6 = iVar6 + 0xc;
        } while (puVar4 != puVar10);
        iVar7 = iVar7 + 0x3c;
        iVar6 = core_bodypart_cpp_CBodyPart_addTexture_FUN_00417c90
                          (body_part_ptr,
                           this_ptr->texture_sets[0].textures
                           [texture_set_index * 8 +
                            *(int *)(local_2c + (int)this_ptr->index_data_ptr[lod_index])].textures
                           [0].texture_name);
        local_20 = local_20 + 0x12;
        local_2c = local_2c + 4;
        *(int *)((int)body_part_ptr->face_texture_indices + local_28) = iVar6;
        local_28 = local_28 + 4;
        local_14 = local_14 + 1;
      } while (local_2c < iVar8 * 4);
    }
    if (local_30 < iVar5) {
      local_24 = local_30 * 0x12;
      local_1c = local_14 * 0x3c;
      local_30 = local_30 << 2;
      iVar8 = local_14 << 2;
      do {
        iVar7 = (int)&(((SMRGLPrimitiveTriangle *)(body_part_ptr->faces->vertices + -2))->base).base
                      .type + local_1c;
        puVar4 = (ushort *)
                 ((int)&(this_ptr->tri_data_ptr[lod_index]->vertex_indices).vertex_index_0 +
                 local_24);
        *(uint *)(iVar7 + 4) = 3;
        puVar10 = puVar4 + 3;
        do {
          *(uint *)(iVar7 + 0x18) = *(uint *)((uint)*puVar4 * 4 + 0x2671950);
          *(uint *)(iVar7 + 0x1c) = (uint)puVar4[3] << 8;
          puVar1 = puVar4 + 6;
          puVar4 = puVar4 + 1;
          *(uint *)(iVar7 + 0x20) = (uint)*puVar1 << 8;
          iVar7 = iVar7 + 0xc;
        } while (puVar4 != puVar10);
        piVar11 = (int *)(local_30 + (int)this_ptr->index_data_ptr[lod_index]);
        local_30 = local_30 + 4;
        iVar7 = core_bodypart_cpp_CBodyPart_addTexture_FUN_00417c90
                          (body_part_ptr,
                           this_ptr->texture_sets[0].textures[texture_set_index * 8 + *piVar11].
                           textures[0].texture_name);
        *(int *)((int)body_part_ptr->face_texture_indices + iVar8) = iVar7;
        local_1c = local_1c + 0x3c;
        local_14 = local_14 + 1;
        local_24 = local_24 + 0x12;
        iVar8 = iVar8 + 4;
      } while (local_30 < iVar5 * 4);
    }
    if (local_14 != body_part_ptr->tri_count) {
      PTR_01cc4800 = "..\\core\\skeleton.cpp";
      INT_01cc4804 = 0x6bf;
      core_main_c_FUN_004c8440("CDeformableModel::dismember - Hell froze 2!");
      return;
    }
  }
  return;
}
