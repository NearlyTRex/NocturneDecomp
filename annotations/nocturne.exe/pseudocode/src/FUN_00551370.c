// Name: FUN_00551370
// Address: 00551370
// Address Range: [[00551370, 00551918]]
// Convention: unknown
// Signature: void FUN_00551370(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00551370(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar9;
  int extraout_EDX;
  int iVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  ulonglong uVar19;
  float local_34;
  int local_30;
  float local_28;
  int local_1c;
  int local_18;
  
  FUN_00409fc0(param_1);
  *(float *)(param_1 + 0x2b228) =
       *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x160) * *(float *)(param_1 + 0x274);
  if (*(int *)(param_1 + 0x280) == 0) {
    while( true ) {
      fVar13 = (float10)1 / (float10)*(float *)(param_1 + 0x27c);
      fVar14 = (float10)*(float *)(param_1 + 0x158) * fVar13;
      fVar13 = (float10)*(float *)(param_1 + 0x150) * fVar13;
      FUN_00563a30();
      iVar5 = FUN_00563a30();
      iVar6 = iVar5 + 1;
      iVar9 = (int)ROUND(fVar13);
      *(int *)(param_1 + 0x7f98) = iVar9;
      iVar12 = iVar9 + 1;
      *(int *)(param_1 + 0x7f9c) = (int)ROUND(fVar14);
      *(int *)(param_1 + 0x290) = iVar6 * iVar12;
      if (iVar6 * iVar12 < 0x3e9) break;
      *(float *)(param_1 + 0x27c) = *(float *)(param_1 + 0x27c) * (float)_DAT_005975df;
    }
    fVar1 = *(float *)(param_1 + 0x150);
    fVar2 = *(float *)(param_1 + 0x158);
    local_34 = -*(float *)(param_1 + 0x158) * (float)_DAT_005975d7;
    iVar10 = 0;
    local_18 = 0;
    if (0 < iVar6) {
      do {
        local_28 = -*(float *)(param_1 + 0x150) * (float)_DAT_005975d7;
        if (0 < iVar12) {
          fVar14 = (float10)_DAT_00597607;
          fVar13 = (float10)_DAT_005975ff;
          fVar15 = (float10)_DAT_005975d7;
          fVar16 = (float10)(fVar1 / (float)iVar9);
          pfVar7 = (float *)(iVar10 * 0x20 + param_1 + 0x294);
          do {
            pfVar7[1] = 0.0;
            *pfVar7 = local_28;
            pfVar7[2] = local_34;
            fVar17 = (((float10)*(float *)(param_1 + 0x150) * fVar15 + (float10)*pfVar7) /
                     (float10)*(float *)(param_1 + 0x150)) * fVar14 * fVar13;
            iVar10 = FUN_00563a30();
            *(int *)(iVar10 + 0x18) = (int)ROUND(fVar17) + 0x20000;
            fVar18 = ((float10)1 -
                     (float10)*(float *)(iVar10 + 8) / (float10)*(float *)(param_1 + 0x158)) *
                     fVar14 * fVar13;
            fVar17 = (float10)local_28;
            uVar19 = FUN_00563a30();
            iVar10 = (int)((ulonglong)uVar19 >> 0x20);
            pfVar7 = (float *)uVar19;
            local_28 = (float)(fVar17 + fVar16);
            pfVar7[-1] = (float)((int)ROUND(fVar18) + 0x20000);
          } while (extraout_ECX_01 < iVar12);
        }
        local_34 = local_34 + fVar2 / (float)iVar5;
        local_18 = local_18 + 1;
      } while (local_18 < iVar6);
    }
    iVar9 = param_1 + 0x7fa0;
    local_30 = 0;
    if (0 < *(int *)(param_1 + 0x7f9c)) {
      do {
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x7f98)) {
          iVar6 = local_30 % 4 << 0x16;
          iVar12 = (local_30 % 4 + 1) * 0x400000;
          do {
            *(uint *)(iVar9 + 4) = 3;
            *(uint *)(iVar9 + 0x14) = 0;
            uVar3 = *(uint *)(iVar9 + 0x14);
            *(uint *)(iVar9 + 0x10) = uVar3;
            *(uint *)(iVar9 + 0xc) = uVar3;
            *(uint *)(iVar9 + 8) = uVar3;
            iVar10 = (*(int *)(param_1 + 0x7f98) + 1) * local_30 + iVar5;
            *(int *)(iVar9 + 0x30) = iVar10;
            iVar10 = iVar10 + 1;
            *(int *)(iVar9 + 0x38) = iVar6;
            *(int *)(iVar9 + 0x24) = iVar10;
            iVar8 = iVar5 % 4 << 0x16;
            iVar11 = (iVar5 % 4 + 1) * 0x400000;
            *(int *)(iVar9 + 0x34) = iVar8;
            *(int *)(iVar9 + 0x28) = iVar11;
            *(int *)(iVar9 + 0x2c) = iVar6;
            *(int *)(iVar9 + 0x18) = iVar10 + *(int *)(param_1 + 0x7f98) + 1;
            *(int *)(iVar9 + 0x1c) = iVar11;
            *(int *)(iVar9 + 0x20) = iVar12;
            *(uint *)(iVar9 + 0x4c) = 3;
            *(uint *)(iVar9 + 0x5c) = 0;
            uVar3 = *(uint *)(iVar9 + 0x5c);
            *(uint *)(iVar9 + 0x58) = uVar3;
            *(uint *)(iVar9 + 0x54) = uVar3;
            *(uint *)(iVar9 + 0x50) = uVar3;
            iVar10 = *(int *)(param_1 + 0x7f98);
            *(int *)(iVar9 + 0x7c) = iVar8;
            iVar10 = iVar5 + (iVar10 + 1) * local_30;
            *(int *)(iVar9 + 0x78) = iVar10;
            *(int *)(iVar9 + 0x80) = iVar6;
            iVar4 = *(int *)(param_1 + 0x7f98);
            *(int *)(iVar9 + 100) = iVar8;
            iVar10 = iVar10 + iVar4 + 2;
            *(int *)(iVar9 + 0x6c) = iVar10;
            *(int *)(iVar9 + 0x70) = iVar11;
            *(int *)(iVar9 + 0x60) = iVar10 + -1;
            *(int *)(iVar9 + 0x74) = iVar12;
            *(int *)(iVar9 + 0x68) = iVar12;
            iVar5 = iVar5 + 1;
            iVar9 = iVar9 + 0x90;
          } while (iVar5 < *(int *)(param_1 + 0x7f98));
        }
        local_30 = local_30 + 1;
      } while (local_30 < *(int *)(param_1 + 0x7f9c));
    }
    *(int *)(param_1 + 0x2b22c) = *(int *)(param_1 + 0x7f98) * *(int *)(param_1 + 0x7f9c) * 2;
  }
  else {
    *(uint *)(param_1 + 0x2b22c) = 0x20;
    *(uint *)(param_1 + 0x290) = 0;
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x2b22c)) {
      fVar14 = (float10)_DAT_0059760f;
      fVar13 = (float10)_DAT_005975ff;
      fVar15 = (float10)_DAT_005975f7;
      do {
        fVar16 = ((float10)iVar9 / (float10)*(int *)(param_1 + 0x2b22c)) * (float10)_DAT_005975e7 *
                 (float10)_DAT_005975df;
        fVar17 = (float10)fcos(fVar16);
        fVar16 = (float10)fsin(fVar16);
        *(float *)(param_1 + 0x294 + *(int *)(param_1 + 0x290) * 0x20) =
             (float)(fVar17 * (float10)*(float *)(param_1 + 0x150) * (float10)_DAT_005975ef);
        *(uint *)(param_1 + 0x298 + *(int *)(param_1 + 0x290) * 0x20) = 0;
        *(float *)(param_1 + 0x29c + *(int *)(param_1 + 0x290) * 0x20) =
             (float)(fVar16 * (float10)*(float *)(param_1 + 0x158) * (float10)_DAT_005975ef);
        fVar16 = ((float10)*(float *)(*(int *)(param_1 + 0x290) * 0x20 + 0x294 + param_1) /
                 (float10)*(float *)(param_1 + 0x150)) * fVar15 * fVar13 + fVar14;
        FUN_00563a30();
        *(int *)(extraout_ECX + 0x2ac + param_1) = (int)ROUND(fVar16);
        fVar16 = ((float10)*(float *)(*(int *)(param_1 + 0x290) * 0x20 + 0x29c + param_1) /
                 (float10)*(float *)(param_1 + 0x158)) * fVar15 * fVar13 + fVar14;
        FUN_00563a30();
        *(int *)(extraout_ECX_00 + 0x2b0 + param_1) = (int)ROUND(fVar16);
        iVar9 = extraout_EDX + 1;
        *(int *)(param_1 + 0x290) = *(int *)(param_1 + 0x290) + 1;
      } while (iVar9 < *(int *)(param_1 + 0x2b22c));
    }
    iVar9 = param_1 + 0x294;
    iVar5 = *(int *)(param_1 + 0x290) * 0x20;
    *(uint *)(iVar5 + 8 + iVar9) = 0;
    *(uint *)(iVar5 + 4 + iVar9) = *(uint *)(iVar5 + 8 + iVar9);
    *(uint *)(iVar5 + iVar9) = *(uint *)(iVar5 + 4 + iVar9);
    local_1c = 0;
    *(int *)(param_1 + 0x290) = *(int *)(param_1 + 0x290) + 1;
    if (0 < *(int *)(param_1 + 0x2b22c)) {
      iVar9 = param_1 + 0x7fa0;
      iVar5 = param_1;
      do {
        *(uint *)(iVar9 + 4) = 3;
        *(uint *)(iVar9 + 0x14) = 0;
        uVar3 = *(uint *)(iVar9 + 0x14);
        *(uint *)(iVar9 + 0x10) = uVar3;
        *(uint *)(iVar9 + 0xc) = uVar3;
        *(uint *)(iVar9 + 8) = uVar3;
        iVar12 = local_1c + 1;
        uVar3 = *(uint *)(param_1 + 0x2b22c);
        *(uint *)(iVar9 + 0x1c) = 0;
        *(uint *)(iVar9 + 0x20) = 0;
        *(uint *)(iVar9 + 0x18) = uVar3;
        iVar6 = iVar12 % *(int *)(param_1 + 0x2b22c);
        *(int *)(iVar9 + 0x24) = local_1c;
        *(uint *)(iVar9 + 0x28) = *(uint *)(iVar5 + 0x2ac);
        uVar3 = *(uint *)(iVar5 + 0x2b0);
        *(int *)(iVar9 + 0x30) = iVar6;
        *(uint *)(iVar9 + 0x2c) = uVar3;
        iVar6 = param_1 + iVar6 * 0x20;
        *(uint *)(iVar9 + 0x34) = *(uint *)(iVar6 + 0x2ac);
        iVar5 = iVar5 + 0x20;
        *(uint *)(iVar9 + 0x38) = *(uint *)(iVar6 + 0x2b0);
        iVar9 = iVar9 + 0x48;
        local_1c = iVar12;
      } while (iVar12 < *(int *)(param_1 + 0x2b22c));
    }
  }
  FUN_00551920(param_1);
  *(uint *)(param_1 + 0x2b220) = 0;
  *(uint *)(param_1 + 0x2b224) = 0;
  return;
}
