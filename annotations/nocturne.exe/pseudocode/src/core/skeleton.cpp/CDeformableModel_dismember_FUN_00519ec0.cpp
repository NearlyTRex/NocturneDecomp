// Name: core_skeleton.cpp_CDeformableModel_dismember_FUN_00519ec0
// Address: 00519ec0
// Address Range: [[00519ec0, 0051a46a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_00519ec0(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_00519ec0(int param_1,int param_2,int param_3,int param_4,uint *param_5,int param_6)

{
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
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
  if (param_3 != 0) {
    if (*(int *)(param_2 * 8 + param_1 + 8) != 0) {
      _DAT_01cc4800 = "..\\core\\skeleton.cpp";
      _DAT_01cc4804 = 0x63d;
      FUN_004c8440("CDeformableModel::dismember - can't dismember shadow LOD.");
    }
    iVar7 = param_2 * 4;
    local_30 = *(int *)(param_1 + iVar7 + 0x54);
    local_2c = 0;
    iVar8 = 0;
    iVar3 = param_1 + iVar7;
    if (0 < param_4) {
      do {
        iVar8 = iVar8 + 1;
        local_2c = local_2c + *(int *)(iVar3 + 0xc24);
        local_30 = local_30 + *(int *)(iVar3 + 0xc38);
        iVar3 = iVar3 + 0x60;
      } while (iVar8 < param_4);
    }
    iVar3 = param_4 * 0x60 + param_1;
    iVar8 = local_2c + *(int *)(iVar7 + 0xc24 + iVar3);
    iVar3 = local_30 + *(int *)(iVar7 + 0xc38 + iVar3);
    if (4000 < *(int *)(iVar7 + param_1 + 0x2c)) {
      _DAT_01cc4800 = "..\\core\\skeleton.cpp";
      _DAT_01cc4804 = 0x652;
      FUN_004c8440("CDeformableModel::dismember - too many vertices!");
    }
    iVar7 = param_2 * 4 + param_1;
    memset(0x2671950,0,*(int *)(iVar7 + 0x2c) << 2);
    if (local_2c < iVar8) {
      iVar4 = local_2c * 0x12;
      do {
        iVar5 = *(int *)(iVar7 + 0x7c);
        *(uint *)((uint)*(ushort *)(iVar5 + iVar4) * 4 + 0x2671950) = 1;
        *(uint *)((uint)*(ushort *)(iVar5 + 2 + iVar4) * 4 + 0x2671950) = 1;
        puVar10 = (ushort *)(iVar5 + 4 + iVar4);
        iVar4 = iVar4 + 0x12;
        *(uint *)((uint)*puVar10 * 4 + 0x2671950) = 1;
      } while (iVar4 < iVar8 * 0x12);
    }
    if (local_30 < iVar3) {
      iVar7 = local_30 * 0x12;
      do {
        iVar4 = *(int *)(param_2 * 4 + param_1 + 0x7c);
        *(uint *)((uint)*(ushort *)(iVar4 + iVar7) * 4 + 0x2671950) = 1;
        *(uint *)((uint)*(ushort *)(iVar4 + 2 + iVar7) * 4 + 0x2671950) = 1;
        puVar10 = (ushort *)(iVar4 + 4 + iVar7);
        iVar7 = iVar7 + 0x12;
        *(uint *)((uint)*puVar10 * 4 + 0x2671950) = 1;
      } while (iVar7 < iVar3 * 0x12);
    }
    local_14 = *(int *)(param_3 + 0x178);
    iVar7 = *(int *)(param_3 + 0x16c);
    iVar9 = 0;
    iVar4 = iVar7;
    for (iVar5 = 0; iVar5 < *(int *)(param_2 * 4 + 0x2c + param_1); iVar5 = iVar5 + 1) {
      if (*(int *)(iVar9 + 0x2671950) != 0) {
        iVar4 = iVar4 + 1;
      }
      iVar9 = iVar9 + 4;
    }
    iVar5 = param_2 * 4 + param_4 * 0x60 + param_1;
    core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0
              (param_3,iVar4,
               *(int *)(param_3 + 0x178) + *(int *)(iVar5 + 0xc24) + *(int *)(iVar5 + 0xc38));
    iVar9 = param_1 + param_2 * 4;
    local_18 = 0;
    iVar5 = 0;
    iVar4 = iVar7 * 0xc;
    if (0 < *(int *)(iVar9 + 0x2c)) {
      do {
        if (*(int *)(iVar5 + 0x2671950) == 0) {
          *(uint *)(iVar5 + 0x2671950) = 0xffffffff;
        }
        else {
          *(int *)(iVar5 + 0x2671950) = iVar7;
          puVar12 = (uint *)(*(int *)(param_3 + 0x170) + iVar4);
          iVar7 = iVar7 + 1;
          iVar4 = iVar4 + 0xc;
          puVar13 = puVar12 + (uint)bVar14 * -2 + 1;
          *puVar12 = *param_5;
          *puVar13 = param_5[(uint)bVar14 * -2 + 1];
          puVar13[(uint)bVar14 * -2 + 1] = (param_5 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
        }
        local_18 = local_18 + 1;
        iVar5 = iVar5 + 4;
        param_5 = param_5 + 3;
      } while (local_18 < *(int *)(iVar9 + 0x2c));
    }
    if (iVar7 != *(int *)(param_3 + 0x16c)) {
      _DAT_01cc4800 = "..\\core\\skeleton.cpp";
      _DAT_01cc4804 = 0x688;
      FUN_004c8440("CDeformableModel::dismember - Hell froze 1!");
    }
    if (local_2c < iVar8) {
      iVar4 = param_1 + param_2 * 4;
      local_20 = local_2c * 0x12;
      iVar7 = local_14 * 0x3c;
      local_28 = local_14 << 2;
      local_2c = local_2c * 4;
      do {
        iVar5 = *(int *)(param_3 + 0x17c) + iVar7;
        puVar10 = (ushort *)(*(int *)(iVar4 + 0x7c) + local_20);
        *(uint *)(iVar5 + 4) = 3;
        puVar11 = puVar10 + 3;
        do {
          *(uint *)(iVar5 + 0x18) = *(uint *)((uint)*puVar10 * 4 + 0x2671950);
          *(uint *)(iVar5 + 0x1c) = (uint)puVar10[3] << 8;
          puVar1 = puVar10 + 6;
          puVar10 = puVar10 + 1;
          *(uint *)(iVar5 + 0x20) = (uint)*puVar1 << 8;
          iVar5 = iVar5 + 0xc;
        } while (puVar10 != puVar11);
        iVar7 = iVar7 + 0x3c;
        uVar6 = core_bodypart_cpp_CBodyPart_addTexture_FUN_00417c90
                          (param_3,*(int *)(local_2c + *(int *)(iVar4 + 0x90)) * 0x48 +
                                   param_1 + param_6 * 0x240 + 200);
        local_20 = local_20 + 0x12;
        local_2c = local_2c + 4;
        *(uint *)(*(int *)(param_3 + 0x180) + local_28) = uVar6;
        local_28 = local_28 + 4;
        local_14 = local_14 + 1;
      } while (local_2c < iVar8 * 4);
    }
    if (local_30 < iVar3) {
      iVar7 = param_1 + param_2 * 4;
      local_24 = local_30 * 0x12;
      local_1c = local_14 * 0x3c;
      iVar8 = local_14 << 2;
      local_30 = local_30 << 2;
      do {
        iVar4 = *(int *)(param_3 + 0x17c) + local_1c;
        puVar10 = (ushort *)(*(int *)(iVar7 + 0x7c) + local_24);
        *(uint *)(iVar4 + 4) = 3;
        puVar11 = puVar10 + 3;
        do {
          *(uint *)(iVar4 + 0x18) = *(uint *)((uint)*puVar10 * 4 + 0x2671950);
          *(uint *)(iVar4 + 0x1c) = (uint)puVar10[3] << 8;
          puVar1 = puVar10 + 6;
          puVar10 = puVar10 + 1;
          *(uint *)(iVar4 + 0x20) = (uint)*puVar1 << 8;
          iVar4 = iVar4 + 0xc;
        } while (puVar10 != puVar11);
        piVar2 = (int *)(local_30 + *(int *)(iVar7 + 0x90));
        iVar8 = iVar8 + 4;
        local_30 = local_30 + 4;
        uVar6 = core_bodypart_cpp_CBodyPart_addTexture_FUN_00417c90
                          (param_3,*piVar2 * 0x48 + param_1 + param_6 * 0x240 + 200);
        *(uint *)(*(int *)(param_3 + 0x180) + -4 + iVar8) = uVar6;
        local_1c = local_1c + 0x3c;
        local_14 = local_14 + 1;
        local_24 = local_24 + 0x12;
      } while (local_30 < iVar3 * 4);
    }
    if (local_14 != *(int *)(param_3 + 0x178)) {
      _DAT_01cc4800 = "..\\core\\skeleton.cpp";
      _DAT_01cc4804 = 0x6bf;
      FUN_004c8440("CDeformableModel::dismember - Hell froze 2!");
      return;
    }
  }
  return;
}
