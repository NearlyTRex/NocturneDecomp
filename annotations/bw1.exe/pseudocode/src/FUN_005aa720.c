// Name: FUN_005aa720
// Address: 005aa720
// Address Range: [[005aa720, 005aacc8]]
// Convention: unknown
// Signature: void FUN_005aa720(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aa720(int param_1)

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
  float fStack_34;
  int iStack_30;
  float fStack_28;
  int iStack_1c;
  int iStack_18;
  
  FUN_00408850(param_1);
  *(float *)(param_1 + 0x2b230) =
       *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x168) * *(float *)(param_1 + 0x27c);
  if (*(int *)(param_1 + 0x288) == 0) {
    while( true ) {
      fVar13 = (float10)1 / (float10)*(float *)(param_1 + 0x284);
      fVar14 = (float10)*(float *)(param_1 + 0x160) * fVar13;
      fVar13 = (float10)*(float *)(param_1 + 0x158) * fVar13;
      FUN_005c03a0();
      iVar5 = FUN_005c03a0();
      iVar6 = iVar5 + 1;
      iVar9 = (int)ROUND(fVar13);
      *(int *)(param_1 + 0x7fa0) = iVar9;
      iVar12 = iVar9 + 1;
      *(int *)(param_1 + 0x7fa4) = (int)ROUND(fVar14);
      *(int *)(param_1 + 0x298) = iVar6 * iVar12;
      if (iVar6 * iVar12 < 0x3e9) break;
      *(float *)(param_1 + 0x284) = *(float *)(param_1 + 0x284) * (float)_DAT_005f9292;
    }
    fVar1 = *(float *)(param_1 + 0x158);
    fVar2 = *(float *)(param_1 + 0x160);
    fStack_34 = -*(float *)(param_1 + 0x160) * (float)_DAT_005f928a;
    iVar10 = 0;
    iStack_18 = 0;
    if (0 < iVar6) {
      do {
        fStack_28 = -*(float *)(param_1 + 0x158) * (float)_DAT_005f928a;
        if (0 < iVar12) {
          fVar14 = (float10)_DAT_005f92ba;
          fVar13 = (float10)_DAT_005f92b2;
          fVar15 = (float10)_DAT_005f928a;
          fVar16 = (float10)(fVar1 / (float)iVar9);
          pfVar7 = (float *)(iVar10 * 0x20 + param_1 + 0x29c);
          do {
            pfVar7[1] = 0.0;
            *pfVar7 = fStack_28;
            pfVar7[2] = fStack_34;
            fVar17 = (((float10)*(float *)(param_1 + 0x158) * fVar15 + (float10)*pfVar7) /
                     (float10)*(float *)(param_1 + 0x158)) * fVar14 * fVar13;
            iVar10 = FUN_005c03a0();
            *(int *)(iVar10 + 0x18) = (int)ROUND(fVar17) + 0x20000;
            fVar18 = ((float10)1 -
                     (float10)*(float *)(iVar10 + 8) / (float10)*(float *)(param_1 + 0x160)) *
                     fVar14 * fVar13;
            fVar17 = (float10)fStack_28;
            uVar19 = FUN_005c03a0();
            iVar10 = (int)((ulonglong)uVar19 >> 0x20);
            pfVar7 = (float *)uVar19;
            fStack_28 = (float)(fVar17 + fVar16);
            pfVar7[-1] = (float)((int)ROUND(fVar18) + 0x20000);
          } while (extraout_ECX_01 < iVar12);
        }
        fStack_34 = fStack_34 + fVar2 / (float)iVar5;
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < iVar6);
    }
    iVar9 = param_1 + 0x7fa8;
    iStack_30 = 0;
    if (0 < *(int *)(param_1 + 0x7fa4)) {
      do {
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x7fa0)) {
          iVar6 = iStack_30 % 4 << 0x16;
          iVar12 = (iStack_30 % 4 + 1) * 0x400000;
          do {
            *(uint *)(iVar9 + 4) = 3;
            *(uint *)(iVar9 + 0x14) = 0;
            uVar3 = *(uint *)(iVar9 + 0x14);
            *(uint *)(iVar9 + 0x10) = uVar3;
            *(uint *)(iVar9 + 0xc) = uVar3;
            *(uint *)(iVar9 + 8) = uVar3;
            iVar10 = (*(int *)(param_1 + 0x7fa0) + 1) * iStack_30 + iVar5;
            *(int *)(iVar9 + 0x30) = iVar10;
            iVar10 = iVar10 + 1;
            *(int *)(iVar9 + 0x38) = iVar6;
            *(int *)(iVar9 + 0x24) = iVar10;
            iVar8 = iVar5 % 4 << 0x16;
            iVar11 = (iVar5 % 4 + 1) * 0x400000;
            *(int *)(iVar9 + 0x34) = iVar8;
            *(int *)(iVar9 + 0x28) = iVar11;
            *(int *)(iVar9 + 0x2c) = iVar6;
            *(int *)(iVar9 + 0x18) = iVar10 + *(int *)(param_1 + 0x7fa0) + 1;
            *(int *)(iVar9 + 0x1c) = iVar11;
            *(int *)(iVar9 + 0x20) = iVar12;
            *(uint *)(iVar9 + 0x4c) = 3;
            *(uint *)(iVar9 + 0x5c) = 0;
            uVar3 = *(uint *)(iVar9 + 0x5c);
            *(uint *)(iVar9 + 0x58) = uVar3;
            *(uint *)(iVar9 + 0x54) = uVar3;
            *(uint *)(iVar9 + 0x50) = uVar3;
            iVar10 = *(int *)(param_1 + 0x7fa0);
            *(int *)(iVar9 + 0x7c) = iVar8;
            iVar10 = iVar5 + (iVar10 + 1) * iStack_30;
            *(int *)(iVar9 + 0x78) = iVar10;
            *(int *)(iVar9 + 0x80) = iVar6;
            iVar4 = *(int *)(param_1 + 0x7fa0);
            *(int *)(iVar9 + 100) = iVar8;
            iVar10 = iVar10 + iVar4 + 2;
            *(int *)(iVar9 + 0x6c) = iVar10;
            *(int *)(iVar9 + 0x70) = iVar11;
            *(int *)(iVar9 + 0x60) = iVar10 + -1;
            *(int *)(iVar9 + 0x74) = iVar12;
            *(int *)(iVar9 + 0x68) = iVar12;
            iVar5 = iVar5 + 1;
            iVar9 = iVar9 + 0x90;
          } while (iVar5 < *(int *)(param_1 + 0x7fa0));
        }
        iStack_30 = iStack_30 + 1;
      } while (iStack_30 < *(int *)(param_1 + 0x7fa4));
    }
    *(int *)(param_1 + 0x2b234) = *(int *)(param_1 + 0x7fa0) * *(int *)(param_1 + 0x7fa4) * 2;
  }
  else {
    *(uint *)(param_1 + 0x2b234) = 0x20;
    *(uint *)(param_1 + 0x298) = 0;
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x2b234)) {
      fVar14 = (float10)_DAT_005f92c2;
      fVar13 = (float10)_DAT_005f92b2;
      fVar15 = (float10)_DAT_005f92aa;
      do {
        fVar16 = ((float10)iVar9 / (float10)*(int *)(param_1 + 0x2b234)) * (float10)_DAT_005f929a *
                 (float10)_DAT_005f9292;
        fVar17 = (float10)fcos(fVar16);
        fVar16 = (float10)fsin(fVar16);
        *(float *)(param_1 + 0x29c + *(int *)(param_1 + 0x298) * 0x20) =
             (float)(fVar17 * (float10)*(float *)(param_1 + 0x158) * (float10)_DAT_005f92a2);
        *(uint *)(param_1 + 0x2a0 + *(int *)(param_1 + 0x298) * 0x20) = 0;
        *(float *)(param_1 + 0x2a4 + *(int *)(param_1 + 0x298) * 0x20) =
             (float)(fVar16 * (float10)*(float *)(param_1 + 0x160) * (float10)_DAT_005f92a2);
        fVar16 = ((float10)*(float *)(*(int *)(param_1 + 0x298) * 0x20 + 0x29c + param_1) /
                 (float10)*(float *)(param_1 + 0x158)) * fVar15 * fVar13 + fVar14;
        FUN_005c03a0();
        *(int *)(extraout_ECX + 0x2b4 + param_1) = (int)ROUND(fVar16);
        fVar16 = ((float10)*(float *)(*(int *)(param_1 + 0x298) * 0x20 + 0x2a4 + param_1) /
                 (float10)*(float *)(param_1 + 0x160)) * fVar15 * fVar13 + fVar14;
        FUN_005c03a0();
        *(int *)(extraout_ECX_00 + 0x2b8 + param_1) = (int)ROUND(fVar16);
        iVar9 = extraout_EDX + 1;
        *(int *)(param_1 + 0x298) = *(int *)(param_1 + 0x298) + 1;
      } while (iVar9 < *(int *)(param_1 + 0x2b234));
    }
    iVar9 = param_1 + 0x29c;
    iVar5 = *(int *)(param_1 + 0x298) * 0x20;
    *(uint *)(iVar5 + 8 + iVar9) = 0;
    *(uint *)(iVar5 + 4 + iVar9) = *(uint *)(iVar5 + 8 + iVar9);
    *(uint *)(iVar5 + iVar9) = *(uint *)(iVar5 + 4 + iVar9);
    iStack_1c = 0;
    *(int *)(param_1 + 0x298) = *(int *)(param_1 + 0x298) + 1;
    if (0 < *(int *)(param_1 + 0x2b234)) {
      iVar9 = param_1 + 0x7fa8;
      iVar5 = param_1;
      do {
        *(uint *)(iVar9 + 4) = 3;
        *(uint *)(iVar9 + 0x14) = 0;
        uVar3 = *(uint *)(iVar9 + 0x14);
        *(uint *)(iVar9 + 0x10) = uVar3;
        *(uint *)(iVar9 + 0xc) = uVar3;
        *(uint *)(iVar9 + 8) = uVar3;
        iVar12 = iStack_1c + 1;
        uVar3 = *(uint *)(param_1 + 0x2b234);
        *(uint *)(iVar9 + 0x1c) = 0;
        *(uint *)(iVar9 + 0x20) = 0;
        *(uint *)(iVar9 + 0x18) = uVar3;
        iVar6 = iVar12 % *(int *)(param_1 + 0x2b234);
        *(int *)(iVar9 + 0x24) = iStack_1c;
        *(uint *)(iVar9 + 0x28) = *(uint *)(iVar5 + 0x2b4);
        uVar3 = *(uint *)(iVar5 + 0x2b8);
        *(int *)(iVar9 + 0x30) = iVar6;
        *(uint *)(iVar9 + 0x2c) = uVar3;
        iVar6 = param_1 + iVar6 * 0x20;
        *(uint *)(iVar9 + 0x34) = *(uint *)(iVar6 + 0x2b4);
        iVar5 = iVar5 + 0x20;
        *(uint *)(iVar9 + 0x38) = *(uint *)(iVar6 + 0x2b8);
        iVar9 = iVar9 + 0x48;
        iStack_1c = iVar12;
      } while (iVar12 < *(int *)(param_1 + 0x2b234));
    }
  }
  FUN_005aacd0(param_1);
  *(uint *)(param_1 + 0x2b228) = 0;
  *(uint *)(param_1 + 0x2b22c) = 0;
  return;
}
