// Name: FUN_005b0fe0
// Address: 005b0fe0
// Address Range: [[005b0fe0, 005b1433]]
// Convention: unknown
// Signature: void FUN_005b0fe0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b0fe0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float10 fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar9 = 0;
  FUN_00531e90(0x01E661B8,*(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x10c));
  FUN_0046b880(DAT_0060b280,1);
  FUN_0046b8e0(DAT_0060b280,0xffff);
  FUN_0046b960(DAT_0060b280);
  fVar10 = (float10)*(float *)(param_1 + 0x37b48) * (float10)_DAT_005f119b;
  FUN_005b7ff0();
  iVar4 = (int)ROUND(fVar10);
  if (iVar4 < 1000) {
    return;
  }
  if (iVar4 < 63000) {
    FUN_0046b8e0(DAT_0060b280,iVar4);
  }
  FUN_00574e00(param_1 + 0x124);
  if (*(int *)(param_1 + 0x37b44) == 0) {
    FUN_00532190(0x01E661B8,*(uint *)(param_1 + 0x104),*(int *)(param_1 + 0x110) / 2,
                 *(uint *)(param_1 + 0x114),*(uint *)(param_1 + 0x10c),4,0);
    if ((param_2 != 0) && (iVar6 = 0, iVar3 = param_1, 0 < *(int *)(param_1 + 0x39ce8))) {
      do {
        piVar2 = DAT_0060b280;
        iVar5 = *(int *)(iVar3 + 0x39cec) * 0x30;
        *(uint *)(*DAT_0060b280 + iVar5 + 0x20) = *(uint *)(iVar3 + 0x3a64c);
        *(uint *)(iVar5 + 0x24 + *piVar2) = *(uint *)(iVar3 + 0x3a7dc);
        *(uint *)(iVar5 + *piVar2 + 0x28) = *(uint *)(iVar3 + 0x3a96c);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x39ce8));
    }
    if (iVar4 < 63000) {
      iVar3 = *(int *)(param_1 + 0x110);
      uVar11 = 0x267;
      uVar12 = *(uint *)(param_1 + 0x114);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x110);
      uVar11 = 0xffffffff;
      uVar12 = *(uint *)(param_1 + 0x114);
    }
    FUN_00533f40(0x01E661B8,uVar12,iVar3 / 2,uVar11);
    iVar3 = *(int *)(param_1 + 0x110) / 2;
    FUN_00532190(0x01E661B8,*(uint *)(param_1 + 0x104),iVar3,
                 *(int *)(param_1 + 0x114) + iVar3 * 0x48,*(uint *)(param_1 + 0x10c),4,0);
    if (62999 < iVar4) {
      local_1c = *(int *)(param_1 + 0x110) / 2;
      uVar12 = 0xffffffff;
      iVar4 = local_1c * 0x48 + *(int *)(param_1 + 0x114);
      goto LAB_005b11da;
    }
    local_1c = *(int *)(param_1 + 0x110) / 2;
    iVar4 = *(int *)(param_1 + 0x114) + local_1c * 0x48;
  }
  else {
    FUN_00532190(0x01E661B8,*(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x110),
                 *(uint *)(param_1 + 0x114),*(uint *)(param_1 + 0x10c),4,0);
    if ((param_2 != 0) && (iVar6 = 0, iVar3 = param_1, 0 < *(int *)(param_1 + 0x39ce8))) {
      do {
        piVar2 = DAT_0060b280;
        iVar5 = *(int *)(iVar3 + 0x39cec) * 0x30;
        *(uint *)(iVar5 + 0x20 + *DAT_0060b280) = *(uint *)(iVar3 + 0x3a64c);
        *(uint *)(*piVar2 + iVar5 + 0x24) = *(uint *)(iVar3 + 0x3a7dc);
        *(uint *)(iVar5 + *piVar2 + 0x28) = *(uint *)(iVar3 + 0x3a96c);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x39ce8));
    }
    if (iVar4 < 63000) {
      uVar13 = 0x267;
      uVar12 = *(uint *)(param_1 + 0x110);
      uVar11 = *(uint *)(param_1 + 0x114);
    }
    else {
      uVar13 = 0xffffffff;
      uVar12 = *(uint *)(param_1 + 0x110);
      uVar11 = *(uint *)(param_1 + 0x114);
    }
    FUN_00533f40(0x01E661B8,uVar11,uVar12,uVar13);
    local_1c = *(int *)(param_1 + 0x110);
    if (1000 < local_1c) {
      local_1c = 1000;
    }
    local_18 = 0;
    if (0 < local_1c) {
      local_14 = 0x2668a10;
      do {
        iVar5 = *(int *)(param_1 + 0x114) + local_18 * 0x48;
        *(uint *)(local_14 + 4) = *(uint *)(iVar5 + 4);
        iVar6 = 0;
        iVar3 = local_14;
        if (0 < *(int *)(iVar5 + 4)) {
          do {
            iVar1 = iVar5 + ((*(int *)(iVar5 + 4) - iVar6) + -1) * 0xc;
            puVar8 = (uint *)(iVar3 + 0x1c + (uint)bVar9 * -8);
            puVar7 = (uint *)(iVar1 + 0x1c + (uint)bVar9 * -8);
            *(uint *)(iVar3 + 0x18) = *(uint *)(iVar1 + 0x18);
            *puVar8 = *puVar7;
            puVar8[(uint)bVar9 * -2 + 1] = puVar7[(uint)bVar9 * -2 + 1];
            iVar6 = iVar6 + 1;
            iVar3 = iVar3 + 0xc;
          } while (iVar6 < *(int *)(iVar5 + 4));
        }
        local_14 = local_14 + 0x48;
        local_18 = local_18 + 1;
      } while (local_18 < local_1c);
    }
    FUN_00532190(0x01E661B8,*(uint *)(param_1 + 0x104),local_1c,0x2668a10,
                 *(uint *)(param_1 + 0x10c),4,0);
    if (62999 < iVar4) {
      uVar12 = 0xffffffff;
      iVar4 = 0x2668a10;
      goto LAB_005b11da;
    }
    iVar4 = 0x2668a10;
  }
  uVar12 = 0x267;
LAB_005b11da:
  FUN_00533f40(0x01E661B8,iVar4,local_1c,uVar12);
  FUN_0046b880(DAT_0060b280,0);
  FUN_0046b920(DAT_0060b280,1);
  return;
}
