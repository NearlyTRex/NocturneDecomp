// Name: FUN_00416d40
// Address: 00416d40
// Address Range: [[00416d40, 00417318]]
// Convention: unknown
// Signature: void FUN_00416d40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416d40(int param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float *pfVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int extraout_ECX;
  int iVar11;
  int *extraout_EDX;
  int iVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  byte local_78 [12];
  float local_6c;
  float local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  byte local_48 [12];
  byte local_3c [20];
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  
  if ((2 < *(int *)(param_1 + 0x16c)) && (0 < *(int *)(param_1 + 0x178))) {
    FUN_00417730(param_1,&local_54,&local_60);
    local_18 = -((local_54 + local_60) / 2);
    iVar12 = -((local_50 + local_5c) / 2);
    iVar10 = 0;
    iVar13 = -((local_4c + local_58) / 2);
    if (0 < *(int *)(param_1 + 0x16c)) {
      iVar11 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x170);
        *(int *)(iVar11 + iVar1) = *(int *)(iVar11 + iVar1) + local_18;
        piVar7 = (int *)(iVar11 + 4 + iVar1);
        *piVar7 = *piVar7 + iVar12;
        piVar7 = (int *)(iVar11 + 8 + iVar1);
        *piVar7 = *piVar7 + iVar13;
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 0xc;
      } while (iVar10 < *(int *)(param_1 + 0x16c));
    }
    local_54 = local_54 + local_18;
    local_50 = local_50 + iVar12;
    local_4c = local_4c + iVar13;
    local_60 = local_60 + local_18;
    local_58 = local_58 + iVar13;
    local_5c = local_5c + iVar12;
    local_6c = (float)_DAT_005790b2;
    *(float *)(param_1 + 0x154) = (float)local_54 * local_6c;
    *(float *)(param_1 + 0x158) = (float)local_50 * local_6c;
    *(float *)(param_1 + 0x15c) = (float)local_4c * local_6c;
    *(float *)(param_1 + 0x160) = (float)local_60 * local_6c;
    local_68 = (float)iVar12 * local_6c;
    *(float *)(param_1 + 0x164) = (float)local_5c * local_6c;
    local_64 = (float)iVar13 * local_6c;
    *(float *)(param_1 + 0x168) = (float)local_58 * local_6c;
    local_6c = (float)local_18 * local_6c;
    local_1c = local_64;
    pfVar5 = (float *)FUN_0040a200(param_1,local_48,&local_6c);
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) - *pfVar5;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - pfVar5[1];
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - pfVar5[2];
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x284)) {
      pfVar5 = (float *)(param_1 + 0x288);
      do {
        *pfVar5 = *pfVar5 + local_6c;
        pfVar5[1] = pfVar5[1] + local_68;
        iVar10 = iVar10 + 1;
        pfVar5[2] = pfVar5[2] + local_64;
        pfVar5 = pfVar5 + 0x65;
      } while (iVar10 < *(int *)(param_1 + 0x284));
    }
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x744)) {
      local_28 = param_1 + 0x748;
      puVar8 = (uint *)(param_1 + 0x774);
      do {
        pfVar5 = (float *)(iVar10 * 0x2a8 + local_28);
        *pfVar5 = *pfVar5 + local_6c;
        pfVar5[1] = pfVar5[1] + local_68;
        pfVar5[2] = pfVar5[2] + local_64;
        iVar10 = iVar10 + 1;
        puVar6 = (uint *)FUN_0040a240(param_1,local_3c,pfVar5);
        *puVar8 = *puVar6;
        puVar8[1] = puVar6[1];
        puVar8[2] = puVar6[2];
        puVar8 = puVar8 + 0xaa;
      } while (iVar10 < *(int *)(param_1 + 0x744));
    }
    FUN_00563cc0(*(uint *)(param_1 + 0x174),0,*(int *)(param_1 + 0x16c) * 0xc);
    local_20 = 0;
    if (0 < *(int *)(param_1 + 0x178)) {
      local_24 = 0;
      do {
        iVar13 = *(int *)(param_1 + 0x17c) + local_24;
        *(uint *)(iVar13 + 4) = 3;
        FUN_004c3920(*(uint *)(param_1 + 0x170),iVar13);
        iVar12 = 0;
        iVar10 = iVar13;
        if (0 < *(int *)(iVar13 + 4)) {
          do {
            piVar7 = (int *)(*(int *)(param_1 + 0x174) + *(int *)(iVar10 + 0x18) * 0xc);
            *piVar7 = *piVar7 + *(int *)(iVar13 + 8);
            piVar7[1] = piVar7[1] + *(int *)(iVar13 + 0xc);
            piVar7[2] = piVar7[2] + *(int *)(iVar13 + 0x10);
            iVar12 = iVar12 + 1;
            iVar10 = iVar10 + 0xc;
          } while (iVar12 < *(int *)(iVar13 + 4));
        }
        local_24 = local_24 + 0x3c;
        local_20 = local_20 + 1;
      } while (local_20 < *(int *)(param_1 + 0x178));
    }
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x16c)) {
      iVar12 = 0;
      do {
        piVar7 = (int *)(*(int *)(param_1 + 0x174) + iVar12);
        dVar2 = (double)*piVar7;
        dVar4 = (double)piVar7[1];
        dVar3 = (double)piVar7[2];
        dVar2 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2);
        if (dVar2 <= 0.0) {
          piVar7[2] = 0;
          piVar7[1] = piVar7[2];
          *piVar7 = piVar7[2];
        }
        else {
          fVar14 = (float10)_DAT_005790ba / (float10)dVar2;
          fVar15 = (float10)*piVar7 * fVar14;
          fVar16 = (float10)piVar7[1] * fVar14;
          fVar14 = (float10)piVar7[2] * fVar14;
          FUN_00563a30();
          FUN_00563a30();
          FUN_00563a30();
          *extraout_EDX = (int)ROUND(fVar15);
          extraout_EDX[1] = (int)ROUND(fVar16);
          extraout_EDX[2] = (int)ROUND(fVar14);
          iVar12 = extraout_ECX;
        }
        iVar10 = iVar10 + 1;
        iVar12 = iVar12 + 0xc;
      } while (iVar10 < *(int *)(param_1 + 0x16c));
    }
    FUN_00417d70(param_1);
    if ((uint *)(param_1 + 0xcf4) != (uint *)(param_1 + 0x278)) {
      *(uint *)(param_1 + 0xcf4) = *(uint *)(param_1 + 0x278);
      *(uint *)(param_1 + 0xcf8) = *(uint *)(param_1 + 0x27c);
      *(uint *)(param_1 + 0xcfc) = *(uint *)(param_1 + 0x280);
    }
    puVar8 = (uint *)FUN_0044daa0(param_1 + 0xccc,local_78,param_1 + 0x278);
    if ((uint *)(param_1 + 0xd00) != puVar8) {
      *(uint *)(param_1 + 0xd00) = *puVar8;
      *(uint *)(param_1 + 0xd04) = puVar8[1];
      *(uint *)(param_1 + 0xd08) = puVar8[2];
    }
    local_18 = FUN_0040dda0(0xc0490fdb,0x40490fdb);
    *(int *)(param_1 + 0xd24) = local_18;
    local_18 = FUN_0040dda0(0xc0490fdb,0x40490fdb);
    *(int *)(param_1 + 0xd2c) = local_18;
    uVar9 = FUN_0040dda0(0xc116cbe4,0x4116cbe4);
    *(uint *)(param_1 + 0xd28) = uVar9;
    return;
  }
  *(uint *)(param_1 + 0x70) = 2;
  FUN_00415ee0(param_1,0,0);
  puVar8 = (uint *)(param_1 + 0x160);
  if (puVar8 != (uint *)&DAT_02dd1184) {
    *puVar8 = _DAT_02dd1184;
    *(uint *)(param_1 + 0x164) = _DAT_02dd1188;
    *(uint *)(param_1 + 0x168) = _DAT_02dd118c;
  }
  if ((uint *)(param_1 + 0x154) != puVar8) {
    *(uint *)(param_1 + 0x154) = *puVar8;
    *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x164);
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x168);
  }
  return;
}
