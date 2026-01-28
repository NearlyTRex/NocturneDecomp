// Name: core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0
// Address: 0059c5e0
// Address Range: [[0059c5e0, 0059cb9a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_0059c5e0 (CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index, int num_parts_to_dismember,int texture_set_index,CVector3i *skinned_vertices)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_dismember_FUN_0059c5e0
          (CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,
          int num_parts_to_dismember,int texture_set_index,CVector3i *skinned_vertices)

{
  ushort *puVar1;
  SInputFace *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar12 = 0;
  if (body_part_ptr != (CBodyPart *)0x0) {
    if (this_ptr->lod_info[lod_index].shadow_only_flag != 0) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x63d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - can't dismember shadow LOD.");
    }
    iVar8 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_30 = *(int *)(iVar8 + 0x54);
    local_2c = 0;
    iVar7 = 0;
    if (0 < part_index) {
      do {
        iVar7 = iVar7 + 1;
        local_2c = local_2c + *(int *)(iVar8 + 0x7164);
        local_30 = local_30 + *(int *)(iVar8 + 0x7178);
        iVar8 = iVar8 + 0x60;
      } while (iVar7 < part_index);
    }
    iVar8 = local_2c + this_ptr->parts[part_index].tri_counts[lod_index];
    iVar7 = local_30 + this_ptr->parts[part_index].cap_tri_counts[lod_index];
    if (4000 < this_ptr->vertex_count[lod_index]) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x652;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - too many vertices!");
    }
    crt_memory_c_memset_FUN_005fde40(g_VertexRemapTable,0,this_ptr->vertex_count[lod_index] << 2);
    if (local_2c < iVar8) {
      iVar3 = local_2c * 0x12;
      do {
        pSVar2 = this_ptr->tri_data_ptr[lod_index];
        g_VertexRemapTable[*(ushort *)((int)&(pSVar2->vertex_indices).vertex_index_0 + iVar3)] = 1;
        g_VertexRemapTable[*(ushort *)((int)&(pSVar2->vertex_indices).vertex_index_1 + iVar3)] = 1;
        puVar6 = (ushort *)((int)&(pSVar2->vertex_indices).vertex_index_2 + iVar3);
        iVar3 = iVar3 + 0x12;
        g_VertexRemapTable[*puVar6] = 1;
      } while (iVar3 < iVar8 * 0x12);
    }
    if (local_30 < iVar7) {
      iVar3 = local_30 * 0x12;
      do {
        pSVar2 = this_ptr->tri_data_ptr[lod_index];
        g_VertexRemapTable[*(ushort *)((int)&(pSVar2->vertex_indices).vertex_index_0 + iVar3)] = 1;
        g_VertexRemapTable[*(ushort *)((int)&(pSVar2->vertex_indices).vertex_index_1 + iVar3)] = 1;
        puVar6 = (ushort *)((int)&(pSVar2->vertex_indices).vertex_index_2 + iVar3);
        iVar3 = iVar3 + 0x12;
        g_VertexRemapTable[*puVar6] = 1;
      } while (iVar3 < iVar7 * 0x12);
    }
    local_14 = *(int *)(body_part_ptr->unk + 0x28);
    iVar3 = *(int *)(body_part_ptr->unk + 0x1c);
    for (iVar4 = 0; iVar4 < this_ptr->vertex_count[lod_index]; iVar4 = iVar4 + 1) {
    }
    core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(body_part_ptr);
    local_18 = 0;
    iVar5 = 0;
    iVar4 = iVar3 * 0xc;
    if (0 < this_ptr->vertex_count[lod_index]) {
      do {
        if (*(int *)((int)g_VertexRemapTable + iVar5) == 0) {
          *(uint *)((int)g_VertexRemapTable + iVar5) = 0xffffffff;
        }
        else {
          *(int *)((int)g_VertexRemapTable + iVar5) = iVar3;
          puVar10 = (uint *)(*(int *)(body_part_ptr->unk + 0x20) + iVar4);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0xc;
          puVar11 = puVar10 + (uint)bVar12 * -2 + 1;
          *puVar10 = *(uint *)num_parts_to_dismember;
          *puVar11 = *(uint *)(num_parts_to_dismember + ((uint)bVar12 * -2 + 1) * 4);
          puVar11[(uint)bVar12 * -2 + 1] =
               ((uint *)(num_parts_to_dismember + ((uint)bVar12 * -2 + 1) * 4))
               [(uint)bVar12 * -2 + 1];
        }
        local_18 = local_18 + 1;
        iVar5 = iVar5 + 4;
        num_parts_to_dismember = num_parts_to_dismember + 0xc;
      } while (local_18 < this_ptr->vertex_count[lod_index]);
    }
    if (iVar3 != *(int *)(body_part_ptr->unk + 0x1c)) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x688;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - Hell froze 1!");
    }
    if (local_2c < iVar8) {
      local_20 = local_2c * 0x12;
      iVar3 = local_14 * 0x3c;
      local_28 = local_14 << 2;
      local_2c = local_2c * 4;
      do {
        iVar4 = *(int *)(body_part_ptr->unk + 0x2c) + iVar3;
        puVar6 = (ushort *)
                 ((int)&(this_ptr->tri_data_ptr[lod_index]->vertex_indices).vertex_index_0 +
                 local_20);
        *(uint *)(iVar4 + 4) = 3;
        puVar9 = puVar6 + 3;
        do {
          *(int *)(iVar4 + 0x18) = g_VertexRemapTable[*puVar6];
          *(uint *)(iVar4 + 0x1c) = (uint)puVar6[3] << 8;
          puVar1 = puVar6 + 6;
          puVar6 = puVar6 + 1;
          *(uint *)(iVar4 + 0x20) = (uint)*puVar1 << 8;
          iVar4 = iVar4 + 0xc;
        } while (puVar6 != puVar9);
        iVar3 = iVar3 + 0x3c;
        iVar4 = core_bodypart_cpp_CBodyPart_FUN_0041af90(body_part_ptr);
        local_20 = local_20 + 0x12;
        local_2c = local_2c + 4;
        *(int *)(*(int *)(body_part_ptr->unk + 0x30) + local_28) = iVar4;
        local_28 = local_28 + 4;
        local_14 = local_14 + 1;
      } while (local_2c < iVar8 * 4);
    }
    if (local_30 < iVar7) {
      local_24 = local_30 * 0x12;
      local_1c = local_14 * 0x3c;
      iVar8 = local_14 << 2;
      local_30 = local_30 << 2;
      do {
        iVar3 = *(int *)(body_part_ptr->unk + 0x2c) + local_1c;
        puVar6 = (ushort *)
                 ((int)&(this_ptr->tri_data_ptr[lod_index]->vertex_indices).vertex_index_0 +
                 local_24);
        *(uint *)(iVar3 + 4) = 3;
        puVar9 = puVar6 + 3;
        do {
          *(int *)(iVar3 + 0x18) = g_VertexRemapTable[*puVar6];
          *(uint *)(iVar3 + 0x1c) = (uint)puVar6[3] << 8;
          puVar1 = puVar6 + 6;
          puVar6 = puVar6 + 1;
          *(uint *)(iVar3 + 0x20) = (uint)*puVar1 << 8;
          iVar3 = iVar3 + 0xc;
        } while (puVar6 != puVar9);
        iVar8 = iVar8 + 4;
        local_30 = local_30 + 4;
        iVar3 = core_bodypart_cpp_CBodyPart_FUN_0041af90(body_part_ptr);
        *(int *)(*(int *)(body_part_ptr->unk + 0x30) + -4 + iVar8) = iVar3;
        local_1c = local_1c + 0x3c;
        local_14 = local_14 + 1;
        local_24 = local_24 + 0x12;
      } while (local_30 < iVar7 * 4);
    }
    if (local_14 != *(int *)(body_part_ptr->unk + 0x28)) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x6bf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - Hell froze 2!");
      return;
    }
  }
  return;
}
