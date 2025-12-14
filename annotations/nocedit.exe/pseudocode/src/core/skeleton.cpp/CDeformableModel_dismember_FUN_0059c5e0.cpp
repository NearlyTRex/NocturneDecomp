// Name: core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0
// Address: 0059c5e0
// Address Range: [[0059c5e0, 0059cb9a]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0(CDeformableModel * this_ptr, int lod_index, CBodyPart * body_part_ptr, int part_index, int num_parts_to_dismember, int texture_set_index, CVector3i * skinned_vertices)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_dismember_FUN_0059c5e0
          (CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,
          int num_parts_to_dismember,int texture_set_index,CVector3i *skinned_vertices)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  ushort *puVar6;
  ushort *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  uint *in_stack_00000020;
  int in_stack_ffffffb8;
  int local_44;
  int local_40;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int iVar11;
  
  bVar10 = 0;
  if (body_part_ptr != (CBodyPart *)0x0) {
    if (this_ptr->lod_info[lod_index].shadow_only_flag != 0) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x63d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - can't dismember shadow LOD.");
    }
    iVar3 = (int)body_part_ptr * 4;
    local_2c = *(int *)(lod_index + iVar3 + 0x54);
    local_28 = 0;
    iVar4 = 0;
    iVar2 = lod_index + iVar3;
    if (0 < num_parts_to_dismember) {
      do {
        iVar4 = iVar4 + 1;
        local_28 = local_28 + *(int *)(iVar2 + 0x7164);
        local_2c = local_2c + *(int *)(iVar2 + 0x7178);
        iVar2 = iVar2 + 0x60;
      } while (iVar4 < num_parts_to_dismember);
    }
    iVar2 = num_parts_to_dismember * 0x60 + lod_index;
    local_2c = local_2c + *(int *)(iVar3 + 0x7178 + iVar2);
    if (4000 < *(int *)(iVar3 + lod_index + 0x2c)) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x652;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("CDeformableModel::dismember - too many vertices!",local_28 + *(int *)(iVar3 + 0x7164 + iVar2));
    }
    iVar2 = (int)body_part_ptr * 4 + lod_index;
    crt_memory_c_memset_FUN_005fde40(g_VertexRemapTable,0,*(int *)(iVar2 + 0x2c) << 2);
    if (local_24 < local_2c) {
      iVar3 = local_24 * 0x12;
      do {
        iVar4 = *(int *)(iVar2 + 0x7c);
        g_VertexRemapTable[*(ushort *)(iVar4 + iVar3)] = 1;
        g_VertexRemapTable[*(ushort *)(iVar4 + 2 + iVar3)] = 1;
        puVar6 = (ushort *)(iVar4 + 4 + iVar3);
        iVar3 = iVar3 + 0x12;
        g_VertexRemapTable[*puVar6] = 1;
      } while (iVar3 < local_2c * 0x12);
    }
    if (local_28 < in_stack_ffffffb8) {
      local_28 = local_28 * 0x12;
      do {
        iVar2 = *(int *)((body_part_ptr->base_actor).create_event + part_index * 4 + 4);
        g_VertexRemapTable[*(ushort *)(iVar2 + local_28)] = 1;
        g_VertexRemapTable[*(ushort *)(iVar2 + 2 + local_28)] = 1;
        puVar6 = (ushort *)(iVar2 + 4 + local_28);
        local_28 = local_28 + 0x12;
        g_VertexRemapTable[*puVar6] = 1;
      } while (local_28 < in_stack_ffffffb8 * 0x12);
    }
    iVar2 = *(int *)(body_part_ptr->field1_0x158 + 0x1c);
    for (iVar3 = 0;
        iVar3 < *(int *)((int)(body_part_ptr->base_actor).orient_matrix.m + part_index * 4 + -0x10);
        iVar3 = iVar3 + 1) {
    }
    core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(body_part_ptr);
    iVar5 = part_index + num_parts_to_dismember * 4;
    iVar11 = 0;
    iVar4 = 0;
    iVar3 = iVar2 * 0xc;
    if (0 < *(int *)(iVar5 + 0x2c)) {
      do {
        if (*(int *)((int)g_VertexRemapTable + iVar4) == 0) {
          *(uint *)((int)g_VertexRemapTable + iVar4) = 0xffffffff;
        }
        else {
          *(int *)((int)g_VertexRemapTable + iVar4) = iVar2;
          puVar8 = (uint *)(*(int *)(body_part_ptr->field1_0x158 + 0x20) + iVar3);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0xc;
          puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
          *puVar8 = *in_stack_00000020;
          *puVar9 = in_stack_00000020[(uint)bVar10 * -2 + 1];
          puVar9[(uint)bVar10 * -2 + 1] =
               (in_stack_00000020 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        }
        iVar11 = iVar11 + 1;
        iVar4 = iVar4 + 4;
        in_stack_00000020 = in_stack_00000020 + 3;
      } while (iVar11 < *(int *)(iVar5 + 0x2c));
    }
    if (iVar2 != *(int *)(body_part_ptr->field1_0x158 + 0x1c)) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x688;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - Hell froze 1!");
    }
    if (local_1c < local_44) {
      iVar3 = local_1c * 0x12;
      iVar4 = unaff_EBX * 0x3c;
      local_18 = unaff_EBX << 2;
      iVar2 = local_1c * 4;
      do {
        iVar5 = *(int *)(body_part_ptr->field1_0x158 + 0x2c) + iVar4;
        puVar6 = (ushort *)(*(int *)(num_parts_to_dismember + texture_set_index * 4 + 0x7c) + iVar3)
        ;
        *(uint *)(iVar5 + 4) = 3;
        puVar7 = puVar6 + 3;
        do {
          *(int *)(iVar5 + 0x18) = g_VertexRemapTable[*puVar6];
          *(uint *)(iVar5 + 0x1c) = (uint)puVar6[3] << 8;
          puVar1 = puVar6 + 6;
          puVar6 = puVar6 + 1;
          *(uint *)(iVar5 + 0x20) = (uint)*puVar1 << 8;
          iVar5 = iVar5 + 0xc;
        } while (puVar6 != puVar7);
        iVar4 = iVar4 + 0x3c;
        iVar5 = core_bodypart_cpp_CBodyPart_FUN_0041af90(body_part_ptr);
        iVar3 = iVar3 + 0x12;
        iVar2 = iVar2 + 4;
        *(int *)(*(int *)(body_part_ptr->field1_0x158 + 0x30) + local_18) = iVar5;
        local_18 = local_18 + 4;
        unaff_EBX = unaff_EBX + 1;
      } while (iVar2 < local_44 * 4);
    }
    if (local_20 < local_40) {
      local_14 = local_20 * 0x12;
      iVar2 = unaff_EBX * 0x3c;
      iVar4 = unaff_EBX << 2;
      iVar3 = local_20 << 2;
      do {
        iVar5 = *(int *)(body_part_ptr->field1_0x158 + 0x2c) + iVar2;
        puVar6 = (ushort *)
                 (*(int *)(num_parts_to_dismember + texture_set_index * 4 + 0x7c) + local_14);
        *(uint *)(iVar5 + 4) = 3;
        puVar7 = puVar6 + 3;
        do {
          *(int *)(iVar5 + 0x18) = g_VertexRemapTable[*puVar6];
          *(uint *)(iVar5 + 0x1c) = (uint)puVar6[3] << 8;
          puVar1 = puVar6 + 6;
          puVar6 = puVar6 + 1;
          *(uint *)(iVar5 + 0x20) = (uint)*puVar1 << 8;
          iVar5 = iVar5 + 0xc;
        } while (puVar6 != puVar7);
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 4;
        iVar5 = core_bodypart_cpp_CBodyPart_FUN_0041af90(body_part_ptr);
        *(int *)(*(int *)(body_part_ptr->field1_0x158 + 0x30) + -4 + iVar4) = iVar5;
        iVar2 = iVar2 + 0x3c;
        unaff_EBX = unaff_EBX + 1;
        local_14 = local_14 + 0x12;
      } while (iVar3 < local_40 << 2);
    }
    if (unaff_EBX != *(int *)(body_part_ptr->field1_0x158 + 0x28)) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x6bf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - Hell froze 2!");
      return;
    }
  }
  return;
}
