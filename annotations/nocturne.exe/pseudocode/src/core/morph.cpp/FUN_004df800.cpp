// Name: FUN_004df800
// Address: 004df800
// Address Range: [[004df800, 004df9d7]]
// Convention: unknown
// Signature: void FUN_004df800(int *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,int param_7,int param_8)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004df800(int *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  int *local_24;
  int local_20;
  int local_18;
  
  bVar11 = 0;
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01cc4800 = "..\\core\\morph.cpp";
    _DAT_01cc4804 = 0x152;
    FUN_004c8440("CMorphModel::setFaceList - invalid part index");
  }
  local_18 = param_7 + param_1[param_2 * 4 + 4];
  if (param_1[param_2 * 4 + 4] + param_1[param_2 * 4 + 2] < param_8 + local_18) {
    _DAT_01cc4800 = "..\\core\\morph.cpp";
    _DAT_01cc4804 = 0x159;
    FUN_004c8440("CMorphModel::setFaceList - invalid vertex range");
  }
  local_20 = 0;
  if (0 < param_8) {
    local_24 = param_6;
    do {
      uVar4 = FUN_004dfba0(param_1,*local_24 * 0x48 + param_5 + 8);
      iVar6 = 2;
      if (2 < *(int *)(param_3 + 4)) {
        iVar7 = param_3 + 0x18;
        iVar5 = local_18 * 0x3c;
        do {
          iVar2 = _DAT_01cd4314;
          *(uint *)(param_1[0x18] + 4 + iVar5) = 3;
          if (iVar2 == 0) {
            puVar9 = (uint *)(param_1[0x18] + 0x18 + iVar5);
            puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar8 = (uint *)(param_3 + 0x1c + (uint)bVar11 * -8);
            *puVar9 = *(uint *)(param_3 + 0x18);
            *puVar10 = *puVar8;
            puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
            puVar9 = (uint *)(param_1[0x18] + 0x24 + iVar5);
            puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar8 = (uint *)(iVar7 + 0x10 + (uint)bVar11 * -8);
            *puVar9 = *(uint *)(iVar7 + 0xc);
            *puVar10 = *puVar8;
            puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
            iVar2 = param_1[0x18];
            iVar3 = iVar7;
          }
          else {
            puVar9 = (uint *)(param_1[0x18] + 0x18 + iVar5);
            puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar8 = (uint *)(iVar7 + 0x1c + (uint)bVar11 * -8);
            *puVar9 = *(uint *)(iVar7 + 0x18);
            *puVar10 = *puVar8;
            puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
            puVar9 = (uint *)(param_1[0x18] + 0x24 + iVar5);
            puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar8 = (uint *)(iVar7 + 0x10 + (uint)bVar11 * -8);
            *puVar9 = *(uint *)(iVar7 + 0xc);
            *puVar10 = *puVar8;
            puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
            iVar2 = param_1[0x18];
            iVar3 = param_3;
          }
          puVar8 = (uint *)(iVar2 + 0x30 + iVar5);
          puVar10 = puVar8 + (uint)bVar11 * -2 + 1;
          puVar9 = (uint *)(iVar3 + 0x1c + (uint)bVar11 * -8);
          *puVar8 = *(uint *)(iVar3 + 0x18);
          *puVar10 = *puVar9;
          puVar10[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
          *(uint *)(param_1[0x18] + iVar5) = uVar4;
          piVar1 = (int *)(param_1[0x18] + iVar5 + 0x18);
          *piVar1 = *piVar1 + param_1[param_2 * 4 + 3];
          piVar1 = (int *)(param_1[0x18] + iVar5 + 0x24);
          *piVar1 = *piVar1 + param_1[param_2 * 4 + 3];
          iVar7 = iVar7 + 0xc;
          iVar6 = iVar6 + 1;
          piVar1 = (int *)(param_1[0x18] + iVar5 + 0x30);
          *piVar1 = *piVar1 + param_1[param_2 * 4 + 3];
          iVar5 = iVar5 + 0x3c;
          local_18 = local_18 + 1;
        } while (iVar6 < *(int *)(param_3 + 4));
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      param_3 = param_3 + param_4;
    } while (local_20 < param_8);
  }
  return;
}
