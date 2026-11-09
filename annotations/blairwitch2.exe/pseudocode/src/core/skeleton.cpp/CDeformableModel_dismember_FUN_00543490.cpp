// Name: core_skeleton.cpp_CDeformableModel_dismember_FUN_00543490
// Address: 00543490
// Address Range: [[00543490, 00543a3a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_00543490(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,CVector3i *skinned_vertices,int texture_set_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_00543490(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,CVector3i *skinned_vertices,int texture_set_index)

{
  ushort *puVar1;
  int *piVar2;
  byte *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
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
    if (*(int *)(&this_ptr->field_0x8 + lod_index * 8) != 0) {
      _DAT_01d046a0 = "..\\core\\skeleton.cpp";
      _DAT_01d046a4 = 0x64c;
      core_main_c_FUN_004e4500("CDeformableModel::dismember - can't dismember shadow LOD.");
    }
    iVar5 = lod_index * 4;
    local_30 = *(int *)(&this_ptr->field_0x0 + iVar5 + 0x54);
    local_2c = 0;
    iVar7 = 0;
    puVar3 = &this_ptr->field_0x0 + iVar5;
    if (0 < part_index) {
      do {
        iVar7 = iVar7 + 1;
        local_2c = local_2c + *(int *)(puVar3 + 0xc24);
        local_30 = local_30 + *(int *)(puVar3 + 0xc38);
        puVar3 = puVar3 + 0x60;
      } while (iVar7 < part_index);
    }
    iVar7 = local_2c + *(int *)(&this_ptr->field_0xc24 + iVar5 + part_index * 0x60);
    iVar8 = local_30 + *(int *)(&this_ptr->field_0xc38 + iVar5 + part_index * 0x60);
    if (4000 < *(int *)(&this_ptr->field_0x2c + iVar5)) {
      _DAT_01d046a0 = "..\\core\\skeleton.cpp";
      _DAT_01d046a4 = 0x661;
      core_main_c_FUN_004e4500("CDeformableModel::dismember - too many vertices!");
    }
    memset
              ((void *)0x20b1a54,0,*(int *)(&this_ptr->field_0x2c + lod_index * 4) << 2);
    if (local_2c < iVar7) {
      iVar5 = local_2c * 0x12;
      do {
        iVar6 = *(int *)(&this_ptr->field_0x7c + lod_index * 4);
        *(uint *)((uint)*(ushort *)(iVar6 + iVar5) * 4 + 0x20b1a54) = 1;
        *(uint *)((uint)*(ushort *)(iVar6 + 2 + iVar5) * 4 + 0x20b1a54) = 1;
        puVar10 = (ushort *)(iVar6 + 4 + iVar5);
        iVar5 = iVar5 + 0x12;
        *(uint *)((uint)*puVar10 * 4 + 0x20b1a54) = 1;
      } while (iVar5 < iVar7 * 0x12);
    }
    if (local_30 < iVar8) {
      iVar5 = local_30 * 0x12;
      do {
        iVar6 = *(int *)(&this_ptr->field_0x7c + lod_index * 4);
        *(uint *)((uint)*(ushort *)(iVar6 + iVar5) * 4 + 0x20b1a54) = 1;
        *(uint *)((uint)*(ushort *)(iVar6 + 2 + iVar5) * 4 + 0x20b1a54) = 1;
        puVar10 = (ushort *)(iVar6 + 4 + iVar5);
        iVar5 = iVar5 + 0x12;
        *(uint *)((uint)*puVar10 * 4 + 0x20b1a54) = 1;
      } while (iVar5 < iVar8 * 0x12);
    }
    local_14 = *(int *)&body_part_ptr->field_0x2dc;
    iVar5 = *(int *)&body_part_ptr->field_0x2d0;
    iVar9 = 0;
    iVar6 = iVar5;
    for (iVar4 = 0; iVar4 < *(int *)(&this_ptr->field_0x2c + lod_index * 4); iVar4 = iVar4 + 1) {
      if (*(int *)(iVar9 + 0x20b1a54) != 0) {
        iVar6 = iVar6 + 1;
      }
      iVar9 = iVar9 + 4;
    }
    iVar4 = lod_index * 4 + part_index * 0x60;
    core_bodypart_cpp_FUN_00415890
              (body_part_ptr,iVar6,
               *(int *)&body_part_ptr->field_0x2dc + *(int *)(&this_ptr->field_0xc24 + iVar4) +
               *(int *)(&this_ptr->field_0xc38 + iVar4));
    local_18 = 0;
    iVar4 = 0;
    iVar6 = iVar5 * 0xc;
    if (0 < *(int *)(&this_ptr->field_0x2c + lod_index * 4)) {
      do {
        if (*(int *)(iVar4 + 0x20b1a54) == 0) {
          *(uint *)(iVar4 + 0x20b1a54) = 0xffffffff;
        }
        else {
          *(int *)(iVar4 + 0x20b1a54) = iVar5;
          puVar12 = (uint *)(*(int *)&body_part_ptr->field_0x2d4 + iVar6);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 0xc;
          puVar13 = puVar12 + (uint)bVar14 * -2 + 1;
          *puVar12 = *(uint *)skinned_vertices;
          *puVar13 = *(uint *)(skinned_vertices + (uint)bVar14 * -8 + 4);
          puVar13[(uint)bVar14 * -2 + 1] =
               *(uint *)(skinned_vertices + (uint)bVar14 * -8 + 4 + (uint)bVar14 * -8 + 4);
        }
        local_18 = local_18 + 1;
        iVar4 = iVar4 + 4;
        skinned_vertices = skinned_vertices + 0xc;
      } while (local_18 < *(int *)(&this_ptr->field_0x2c + lod_index * 4));
    }
    if (iVar5 != *(int *)&body_part_ptr->field_0x2d0) {
      _DAT_01d046a0 = "..\\core\\skeleton.cpp";
      _DAT_01d046a4 = 0x697;
      core_main_c_FUN_004e4500("CDeformableModel::dismember - Hell froze 1!");
    }
    if (local_2c < iVar7) {
      local_20 = local_2c * 0x12;
      iVar5 = local_14 * 0x3c;
      local_28 = local_14 << 2;
      local_2c = local_2c * 4;
      do {
        iVar6 = *(int *)&body_part_ptr->field_0x2e0 + iVar5;
        puVar10 = (ushort *)(*(int *)(&this_ptr->field_0x7c + lod_index * 4) + local_20);
        *(uint *)(iVar6 + 4) = 3;
        puVar11 = puVar10 + 3;
        do {
          *(uint *)(iVar6 + 0x18) = *(uint *)((uint)*puVar10 * 4 + 0x20b1a54);
          *(uint *)(iVar6 + 0x1c) = (uint)puVar10[3] << 8;
          puVar1 = puVar10 + 6;
          puVar10 = puVar10 + 1;
          *(uint *)(iVar6 + 0x20) = (uint)*puVar1 << 8;
          iVar6 = iVar6 + 0xc;
        } while (puVar10 != puVar11);
        iVar5 = iVar5 + 0x3c;
        iVar6 = core_bodypart_cpp_CBodyPart_addTexture_FUN_004177e0
                          (body_part_ptr,
                           &this_ptr->field_0xc8 +
                           *(int *)(local_2c + *(int *)(&this_ptr->field_0x90 + lod_index * 4)) *
                           0x48 + texture_set_index * 0x240);
        local_20 = local_20 + 0x12;
        local_2c = local_2c + 4;
        *(int *)(*(int *)&body_part_ptr->field_0x2e4 + local_28) = iVar6;
        local_28 = local_28 + 4;
        local_14 = local_14 + 1;
      } while (local_2c < iVar7 * 4);
    }
    if (local_30 < iVar8) {
      local_24 = local_30 * 0x12;
      local_1c = local_14 * 0x3c;
      iVar5 = local_14 << 2;
      local_30 = local_30 << 2;
      do {
        iVar7 = *(int *)&body_part_ptr->field_0x2e0 + local_1c;
        puVar10 = (ushort *)(*(int *)(&this_ptr->field_0x7c + lod_index * 4) + local_24);
        *(uint *)(iVar7 + 4) = 3;
        puVar11 = puVar10 + 3;
        do {
          *(uint *)(iVar7 + 0x18) = *(uint *)((uint)*puVar10 * 4 + 0x20b1a54);
          *(uint *)(iVar7 + 0x1c) = (uint)puVar10[3] << 8;
          puVar1 = puVar10 + 6;
          puVar10 = puVar10 + 1;
          *(uint *)(iVar7 + 0x20) = (uint)*puVar1 << 8;
          iVar7 = iVar7 + 0xc;
        } while (puVar10 != puVar11);
        piVar2 = (int *)(local_30 + *(int *)(&this_ptr->field_0x90 + lod_index * 4));
        iVar5 = iVar5 + 4;
        local_30 = local_30 + 4;
        iVar7 = core_bodypart_cpp_CBodyPart_addTexture_FUN_004177e0
                          (body_part_ptr,
                           &this_ptr->field_0xc8 + *piVar2 * 0x48 + texture_set_index * 0x240);
        *(int *)(*(int *)&body_part_ptr->field_0x2e4 + -4 + iVar5) = iVar7;
        local_1c = local_1c + 0x3c;
        local_14 = local_14 + 1;
        local_24 = local_24 + 0x12;
      } while (local_30 < iVar8 * 4);
    }
    if (local_14 != *(int *)&body_part_ptr->field_0x2dc) {
      _DAT_01d046a0 = "..\\core\\skeleton.cpp";
      _DAT_01d046a4 = 0x6ce;
      core_main_c_FUN_004e4500("CDeformableModel::dismember - Hell froze 2!");
      return;
    }
  }
  return;
}
