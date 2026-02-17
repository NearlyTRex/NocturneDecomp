// Name: core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0
// Address: 0059c5e0
// Address Range: [[0059c5e0, 0059cb9a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_0059c5e0(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,int num_parts_to_dismember,int texture_set_index,CVector3i *skinned_vertices)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_0059c5e0(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,int num_parts_to_dismember,int texture_set_index,CVector3i *skinned_vertices)

{
  ushort *puVar1;
  int *piVar2;
  SInputFace *pSVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  uint *puVar12;
  uint *puVar13;
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
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x63d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - can't dismember shadow LOD.");
    }
    iVar9 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_30 = *(int *)(iVar9 + 0x54);
    local_2c = 0;
    iVar8 = 0;
    if (0 < part_index) {
      do {
        iVar8 = iVar8 + 1;
        local_2c = local_2c + *(int *)(iVar9 + 0x7164);
        local_30 = local_30 + *(int *)(iVar9 + 0x7178);
        iVar9 = iVar9 + 0x60;
      } while (iVar8 < part_index);
    }
    iVar9 = local_2c + this_ptr->parts[part_index].tri_counts[lod_index];
    iVar8 = local_30 + this_ptr->parts[part_index].cap_tri_counts[lod_index];
    if (4000 < this_ptr->vertex_count[lod_index]) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x652;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - too many vertices!");
    }
    memset(g_VertexRemapTable,0,this_ptr->vertex_count[lod_index] << 2);
    if (local_2c < iVar9) {
      iVar4 = local_2c * 0x12;
      do {
        pSVar3 = this_ptr->tri_data_ptr[lod_index];
        g_VertexRemapTable[*(ushort *)((int)&(pSVar3->vertex_indices).vertex_index_0 + iVar4)] = 1;
        g_VertexRemapTable[*(ushort *)((int)&(pSVar3->vertex_indices).vertex_index_1 + iVar4)] = 1;
        puVar6 = (ushort *)((int)&(pSVar3->vertex_indices).vertex_index_2 + iVar4);
        iVar4 = iVar4 + 0x12;
        g_VertexRemapTable[*puVar6] = 1;
      } while (iVar4 < iVar9 * 0x12);
    }
    if (local_30 < iVar8) {
      iVar4 = local_30 * 0x12;
      do {
        pSVar3 = this_ptr->tri_data_ptr[lod_index];
        g_VertexRemapTable[*(ushort *)((int)&(pSVar3->vertex_indices).vertex_index_0 + iVar4)] = 1;
        g_VertexRemapTable[*(ushort *)((int)&(pSVar3->vertex_indices).vertex_index_1 + iVar4)] = 1;
        puVar6 = (ushort *)((int)&(pSVar3->vertex_indices).vertex_index_2 + iVar4);
        iVar4 = iVar4 + 0x12;
        g_VertexRemapTable[*puVar6] = 1;
      } while (iVar4 < iVar8 * 0x12);
    }
    local_14 = body_part_ptr->tri_count;
    iVar4 = body_part_ptr->vertex_count;
    iVar10 = 0;
    iVar7 = iVar4;
    for (iVar5 = 0; iVar5 < this_ptr->vertex_count[lod_index]; iVar5 = iVar5 + 1) {
      if (*(int *)((int)g_VertexRemapTable + iVar10) != 0) {
        iVar7 = iVar7 + 1;
      }
      iVar10 = iVar10 + 4;
    }
    core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0
              (body_part_ptr,iVar7,
               body_part_ptr->tri_count + this_ptr->parts[part_index].tri_counts[lod_index] +
               this_ptr->parts[part_index].cap_tri_counts[lod_index]);
    local_18 = 0;
    iVar5 = 0;
    iVar7 = iVar4 * 0xc;
    if (0 < this_ptr->vertex_count[lod_index]) {
      do {
        if (*(int *)((int)g_VertexRemapTable + iVar5) == 0) {
          *(uint *)((int)g_VertexRemapTable + iVar5) = 0xffffffff;
        }
        else {
          *(int *)((int)g_VertexRemapTable + iVar5) = iVar4;
          puVar12 = (uint *)((int)&body_part_ptr->vertices->x + iVar7);
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 0xc;
          puVar13 = puVar12 + (uint)bVar14 * -2 + 1;
          *puVar12 = *(uint *)num_parts_to_dismember;
          *puVar13 = *(uint *)(num_parts_to_dismember + ((uint)bVar14 * -2 + 1) * 4);
          puVar13[(uint)bVar14 * -2 + 1] =
               ((uint *)(num_parts_to_dismember + ((uint)bVar14 * -2 + 1) * 4))
               [(uint)bVar14 * -2 + 1];
        }
        local_18 = local_18 + 1;
        iVar5 = iVar5 + 4;
        num_parts_to_dismember = num_parts_to_dismember + 0xc;
      } while (local_18 < this_ptr->vertex_count[lod_index]);
    }
    if (iVar4 != body_part_ptr->vertex_count) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x688;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - Hell froze 1!");
    }
    if (local_2c < iVar9) {
      local_20 = local_2c * 0x12;
      iVar4 = local_14 * 0x3c;
      local_28 = local_14 << 2;
      local_2c = local_2c * 4;
      do {
        iVar7 = (int)&(body_part_ptr->faces->vertex_indices).vertex_index_0 + iVar4;
        puVar6 = (ushort *)
                 ((int)&(this_ptr->tri_data_ptr[lod_index]->vertex_indices).vertex_index_0 +
                 local_20);
        *(uint *)(iVar7 + 4) = 3;
        puVar11 = puVar6 + 3;
        do {
          *(int *)(iVar7 + 0x18) = g_VertexRemapTable[*puVar6];
          *(uint *)(iVar7 + 0x1c) = (uint)puVar6[3] << 8;
          puVar1 = puVar6 + 6;
          puVar6 = puVar6 + 1;
          *(uint *)(iVar7 + 0x20) = (uint)*puVar1 << 8;
          iVar7 = iVar7 + 0xc;
        } while (puVar6 != puVar11);
        iVar4 = iVar4 + 0x3c;
        iVar7 = core_bodypart_cpp_CBodyPart_addTexture_FUN_0041af90
                          (body_part_ptr,
                           this_ptr->texture_sets[texture_set_index].textures
                           [*(int *)(local_2c + (int)this_ptr->index_data_ptr[lod_index])].
                           texture_variants[0].texture_name);
        local_20 = local_20 + 0x12;
        local_2c = local_2c + 4;
        *(int *)((int)body_part_ptr->face_texture_indices + local_28) = iVar7;
        local_28 = local_28 + 4;
        local_14 = local_14 + 1;
      } while (local_2c < iVar9 * 4);
    }
    if (local_30 < iVar8) {
      local_24 = local_30 * 0x12;
      local_1c = local_14 * 0x3c;
      local_30 = local_30 << 2;
      iVar9 = local_14 << 2;
      do {
        iVar4 = (int)&(body_part_ptr->faces->vertex_indices).vertex_index_0 + local_1c;
        puVar6 = (ushort *)
                 ((int)&(this_ptr->tri_data_ptr[lod_index]->vertex_indices).vertex_index_0 +
                 local_24);
        *(uint *)(iVar4 + 4) = 3;
        puVar11 = puVar6 + 3;
        do {
          *(int *)(iVar4 + 0x18) = g_VertexRemapTable[*puVar6];
          *(uint *)(iVar4 + 0x1c) = (uint)puVar6[3] << 8;
          puVar1 = puVar6 + 6;
          puVar6 = puVar6 + 1;
          *(uint *)(iVar4 + 0x20) = (uint)*puVar1 << 8;
          iVar4 = iVar4 + 0xc;
        } while (puVar6 != puVar11);
        piVar2 = (int *)(local_30 + (int)this_ptr->index_data_ptr[lod_index]);
        local_30 = local_30 + 4;
        iVar4 = core_bodypart_cpp_CBodyPart_addTexture_FUN_0041af90
                          (body_part_ptr,
                           this_ptr->texture_sets[texture_set_index].textures[*piVar2].
                           texture_variants[0].texture_name);
        *(int *)((int)body_part_ptr->face_texture_indices + iVar9) = iVar4;
        local_1c = local_1c + 0x3c;
        local_14 = local_14 + 1;
        local_24 = local_24 + 0x12;
        iVar9 = iVar9 + 4;
      } while (local_30 < iVar8 * 4);
    }
    if (local_14 != body_part_ptr->tri_count) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x6bf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - Hell froze 2!");
      return;
    }
  }
  return;
}
