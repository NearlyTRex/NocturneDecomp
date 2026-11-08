// Name: FUN_00441800
// Address: 00441800
// Address Range: [[00441800, 00441c53]]
// Convention: unknown
// Signature: void FUN_00441800(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441800(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_1c;
  int local_18;
  byte *local_14;
  
  bVar8 = 0;
  FUN_00553140(0x01E82168,*(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x10c));
  FUN_00483d80(DAT_00612560,1);
  FUN_00483de0(DAT_00612560,0xffff);
  FUN_00483e60(DAT_00612560);
  fVar9 = (float10)*(float *)(param_1 + 0x37b48) * (float10)_DAT_005d6968;
  FUN_005c03a0();
  iVar1 = (int)ROUND(fVar9);
  if (iVar1 < 1000) {
    return;
  }
  if (iVar1 < 63000) {
    FUN_00483de0(DAT_00612560,iVar1);
  }
  FUN_00597a20(param_1 + 0x124);
  if (*(int *)(param_1 + 0x37b44) == 0) {
    FUN_00553440(0x01E82168,*(uint *)(param_1 + 0x104),*(int *)(param_1 + 0x110) / 2,
                 *(uint *)(param_1 + 0x114),*(uint *)(param_1 + 0x10c),4,0);
    if ((param_2 != 0) && (iVar6 = 0, iVar3 = param_1, 0 < *(int *)(param_1 + 0x39ce8))) {
      do {
        piVar2 = DAT_00612560;
        iVar5 = *(int *)(iVar3 + 0x39cec) * 0x30;
        *(uint *)(*DAT_00612560 + iVar5 + 0x20) = *(uint *)(iVar3 + 0x3a64c);
        *(uint *)(iVar5 + 0x24 + *piVar2) = *(uint *)(iVar3 + 0x3a7dc);
        *(uint *)(iVar5 + *piVar2 + 0x28) = *(uint *)(iVar3 + 0x3a96c);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x39ce8));
    }
    if (iVar1 < 63000) {
      iVar3 = *(int *)(param_1 + 0x110);
      uVar10 = 0x267;
      uVar11 = *(uint *)(param_1 + 0x114);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x110);
      uVar10 = 0xffffffff;
      uVar11 = *(uint *)(param_1 + 0x114);
    }
    FUN_005551f0(0x01E82168,uVar11,iVar3 / 2,uVar10);
    iVar3 = *(int *)(param_1 + 0x110) / 2;
    FUN_00553440(0x01E82168,*(uint *)(param_1 + 0x104),iVar3,
                 *(int *)(param_1 + 0x114) + iVar3 * 0x48,*(uint *)(param_1 + 0x10c),4,0);
    if (62999 < iVar1) {
      local_1c = *(int *)(param_1 + 0x110) / 2;
      uVar11 = 0xffffffff;
      puVar4 = (byte *)(local_1c * 0x48 + *(int *)(param_1 + 0x114));
      goto LAB_004419fa;
    }
    local_1c = *(int *)(param_1 + 0x110) / 2;
    puVar4 = (byte *)(*(int *)(param_1 + 0x114) + local_1c * 0x48);
  }
  else {
    FUN_00553440(0x01E82168,*(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x110),
                 *(uint *)(param_1 + 0x114),*(uint *)(param_1 + 0x10c),4,0);
    if ((param_2 != 0) && (iVar6 = 0, iVar3 = param_1, 0 < *(int *)(param_1 + 0x39ce8))) {
      do {
        piVar2 = DAT_00612560;
        iVar5 = *(int *)(iVar3 + 0x39cec) * 0x30;
        *(uint *)(iVar5 + 0x20 + *DAT_00612560) = *(uint *)(iVar3 + 0x3a64c);
        *(uint *)(*piVar2 + iVar5 + 0x24) = *(uint *)(iVar3 + 0x3a7dc);
        *(uint *)(iVar5 + *piVar2 + 0x28) = *(uint *)(iVar3 + 0x3a96c);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x39ce8));
    }
    if (iVar1 < 63000) {
      uVar12 = 0x267;
      uVar11 = *(uint *)(param_1 + 0x110);
      uVar10 = *(uint *)(param_1 + 0x114);
    }
    else {
      uVar12 = 0xffffffff;
      uVar11 = *(uint *)(param_1 + 0x110);
      uVar10 = *(uint *)(param_1 + 0x114);
    }
    FUN_005551f0(0x01E82168,uVar10,uVar11,uVar12);
    local_1c = *(int *)(param_1 + 0x110);
    if (1000 < local_1c) {
      local_1c = 1000;
    }
    local_18 = 0;
    if (0 < local_1c) {
      local_14 = &DAT_007c9c30;
      do {
        iVar6 = *(int *)(param_1 + 0x114) + local_18 * 0x48;
        *(uint *)(local_14 + 4) = *(uint *)(iVar6 + 4);
        iVar3 = 0;
        puVar4 = local_14;
        if (0 < *(int *)(iVar6 + 4)) {
          do {
            iVar5 = iVar6 + ((*(int *)(iVar6 + 4) - iVar3) + -1) * 0xc;
            puVar7 = (uint *)(iVar5 + 0x1c + (uint)bVar8 * -8);
            *(uint *)(puVar4 + 0x18) = *(uint *)(iVar5 + 0x18);
            *(uint *)(puVar4 + (uint)bVar8 * -8 + 0x1c) = *puVar7;
            *(uint *)((int)(puVar4 + (uint)bVar8 * -8 + 0x1c) + ((uint)bVar8 * -2 + 1) * 4) =
                 puVar7[(uint)bVar8 * -2 + 1];
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 0xc;
          } while (iVar3 < *(int *)(iVar6 + 4));
        }
        local_14 = local_14 + 0x48;
        local_18 = local_18 + 1;
      } while (local_18 < local_1c);
    }
    FUN_00553440(0x01E82168,*(uint *)(param_1 + 0x104),local_1c,&DAT_007c9c30,
                 *(uint *)(param_1 + 0x10c),4,0);
    if (62999 < iVar1) {
      uVar11 = 0xffffffff;
      puVar4 = &DAT_007c9c30;
      goto LAB_004419fa;
    }
    puVar4 = &DAT_007c9c30;
  }
  uVar11 = 0x267;
LAB_004419fa:
  FUN_005551f0(0x01E82168,puVar4,local_1c,uVar11);
  FUN_00483d80(DAT_00612560,0);
  FUN_00483e20(DAT_00612560,1);
  return;
}
