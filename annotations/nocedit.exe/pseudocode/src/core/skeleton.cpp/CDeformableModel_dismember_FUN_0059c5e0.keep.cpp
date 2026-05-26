// Name: core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0
// Address: 0059c5e0
// MANUAL RECONSTRUCTION
// Address Range: [[0059c5e0, 0059cb9a] [0060c43a, 0060c457]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_0059c5e0(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,CVector3i *skinned_vertices,int texture_set_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_0059c5e0(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,CVector3i *skinned_vertices,int texture_set_index)

{
  ushort *puVar2;
  SInputFace *pSVar4;
  int iVar3;
  int iVar5;
  int iVar4;
  int iVar10;
  ushort *puVar11;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar12;
  ushort *puVar10;
  int iVar13;
  int local_30;
  int local_2c;
  int local_1c;
  int local_18;
  int local_14;
  SInputFace *pSVar2;
  ushort *puVar1;
  
  if (body_part_ptr != (CBodyPart *)0x0) {
    if (this_ptr->lod_info[lod_index].shadow_only_flag != 0) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x63d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - can't dismember shadow LOD.");
    }
    local_30 = this_ptr->tri_count[lod_index];
    local_2c = 0;
    iVar7 = 0;
    if (0 < part_index) {
      do {
        iVar7 = iVar7 + 1;
        local_2c = local_2c + this_ptr->parts[iVar7 - 1].tri_counts[lod_index];
        local_30 = local_30 + this_ptr->parts[iVar7 - 1].cap_tri_counts[lod_index];
      } while (iVar7 < part_index);
    }
    iVar8 = local_2c + this_ptr->parts[part_index].tri_counts[lod_index];
    iVar12 = local_30 + this_ptr->parts[part_index].cap_tri_counts[lod_index];
    if (4000 < this_ptr->vertex_count[lod_index]) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x652;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - too many vertices!");
    }
    memset(g_VertexRemapTable,0,this_ptr->vertex_count[lod_index] << 2);
    if (local_2c < iVar8) {
      iVar3 = local_2c;
      do {
        pSVar2 = this_ptr->tri_data_ptr[lod_index];
        g_VertexRemapTable[pSVar2[iVar3].vertex_indices.vertex_index_0] = 1;
        g_VertexRemapTable[pSVar2[iVar3].vertex_indices.vertex_index_1] = 1;
        g_VertexRemapTable[pSVar2[iVar3].vertex_indices.vertex_index_2] = 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar8);
    }
    if (local_30 < iVar12) {
      iVar5 = local_30;
      do {
        pSVar4 = this_ptr->tri_data_ptr[lod_index];
        g_VertexRemapTable[pSVar4[iVar5].vertex_indices.vertex_index_0] = 1;
        g_VertexRemapTable[pSVar4[iVar5].vertex_indices.vertex_index_1] = 1;
        g_VertexRemapTable[pSVar4[iVar5].vertex_indices.vertex_index_2] = 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar12);
    }
    local_14 = body_part_ptr->tri_count;
    iVar5 = body_part_ptr->vertex_count;
    iVar6 = iVar5;
    for (iVar4 = 0; iVar4 < this_ptr->vertex_count[lod_index]; iVar4 = iVar4 + 1) {
      if (g_VertexRemapTable[iVar4] != 0) {
        iVar6 = iVar6 + 1;
      }
    }
    core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0
              (body_part_ptr,iVar6,
               body_part_ptr->tri_count + this_ptr->parts[part_index].tri_counts[lod_index] +
               this_ptr->parts[part_index].cap_tri_counts[lod_index]);
    local_18 = 0;
    if (0 < this_ptr->vertex_count[lod_index]) {
      do {
        if (g_VertexRemapTable[local_18] == 0) {
          g_VertexRemapTable[local_18] = 0xffffffff;
        }
        else {
          g_VertexRemapTable[local_18] = iVar5;
          body_part_ptr->vertices[iVar5] = *skinned_vertices;
          iVar5 = iVar5 + 1;
        }
        local_18 = local_18 + 1;
        skinned_vertices = skinned_vertices + 1;
      } while (local_18 < this_ptr->vertex_count[lod_index]);
    }
    if (iVar5 != body_part_ptr->vertex_count) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x688;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - Hell froze 1!");
    }
    if (local_2c < iVar8) {
      iVar13 = local_14 * 0x3c;
      iVar5 = local_2c;
      do {
        iVar10 = (int)&(((SMRGLPrimitiveTriangle *)(body_part_ptr->faces->vertices + -2))->base).
                       base.type + iVar13;
        puVar11 = &this_ptr->tri_data_ptr[lod_index][iVar5].vertex_indices.vertex_index_0;
        *(uint *)(iVar10 + 4) = 3;
        puVar10 = puVar11 + 3;
        do {
          *(int *)(iVar10 + 0x18) = g_VertexRemapTable[*puVar11];
          *(uint *)(iVar10 + 0x1c) = (uint)puVar11[3] << 8;
          puVar1 = puVar11 + 6;
          puVar11 = puVar11 + 1;
          *(uint *)(iVar10 + 0x20) = (uint)*puVar1 << 8;
          iVar10 = iVar10 + 0xc;
        } while (puVar11 != puVar10);
        iVar13 = iVar13 + 0x3c;
        iVar10 = core_bodypart_cpp_CBodyPart_addTexture_FUN_0041af90
                           (body_part_ptr,
                            this_ptr->texture_sets[texture_set_index].textures
                            [this_ptr->index_data_ptr[lod_index][iVar5]].textures[0]
                            .texture_name);
        body_part_ptr->face_texture_indices[local_14] = iVar10;
        iVar5 = iVar5 + 1;
        local_14 = local_14 + 1;
      } while (iVar5 < iVar8);
    }
    if (local_30 < iVar12) {
      local_1c = local_14 * 0x3c;
      iVar13 = local_30;
      do {
        iVar10 = (int)&(((SMRGLPrimitiveTriangle *)(body_part_ptr->faces->vertices + -2))->base).
                       base.type + local_1c;
        puVar5 = &this_ptr->tri_data_ptr[lod_index][iVar13].vertex_indices.vertex_index_0;
        *(uint *)(iVar10 + 4) = 3;
        puVar11 = puVar5 + 3;
        do {
          *(int *)(iVar10 + 0x18) = g_VertexRemapTable[*puVar5];
          *(uint *)(iVar10 + 0x1c) = (uint)puVar5[3] << 8;
          puVar2 = puVar5 + 6;
          puVar5 = puVar5 + 1;
          *(uint *)(iVar10 + 0x20) = (uint)*puVar2 << 8;
          iVar10 = iVar10 + 0xc;
        } while (puVar5 != puVar11);
        iVar10 = core_bodypart_cpp_CBodyPart_addTexture_FUN_0041af90
                           (body_part_ptr,
                            this_ptr->texture_sets[texture_set_index].textures
                            [this_ptr->index_data_ptr[lod_index][iVar13]].textures[0].
                            texture_name);
        body_part_ptr->face_texture_indices[local_14] = iVar10;
        local_1c = local_1c + 0x3c;
        iVar13 = iVar13 + 1;
        local_14 = local_14 + 1;
      } while (iVar13 < iVar12);
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
