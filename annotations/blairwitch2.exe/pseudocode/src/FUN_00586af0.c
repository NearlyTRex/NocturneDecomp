// Name: FUN_00586af0
// Address: 00586af0
// Address Range: [[00586af0, 00587098]]
// Convention: unknown
// Signature: void FUN_00586af0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00586af0(int param_1)

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
  
  FUN_00408a80(param_1);
  *(float *)(param_1 + 0x2b38c) =
       *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x2c4) * *(float *)(param_1 + 0x3d8);
  if (*(int *)(param_1 + 0x3e4) == 0) {
    while( true ) {
      fVar13 = (float10)1 / (float10)*(float *)(param_1 + 0x3e0);
      fVar14 = (float10)*(float *)(param_1 + 700) * fVar13;
      fVar13 = (float10)*(float *)(param_1 + 0x2b4) * fVar13;
      FUN_005b7ff0();
      iVar5 = FUN_005b7ff0();
      iVar6 = iVar5 + 1;
      iVar9 = (int)ROUND(fVar13);
      *(int *)(param_1 + 0x80fc) = iVar9;
      iVar12 = iVar9 + 1;
      *(int *)(param_1 + 0x8100) = (int)ROUND(fVar14);
      *(int *)(param_1 + 0x3f4) = iVar6 * iVar12;
      if (iVar6 * iVar12 < 0x3e9) break;
      *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) * (float)_DAT_005edf36;
    }
    fVar1 = *(float *)(param_1 + 0x2b4);
    fVar2 = *(float *)(param_1 + 700);
    fStack_34 = -*(float *)(param_1 + 700) * (float)_DAT_005edf2e;
    iVar10 = 0;
    iStack_18 = 0;
    if (0 < iVar6) {
      do {
        fStack_28 = -*(float *)(param_1 + 0x2b4) * (float)_DAT_005edf2e;
        if (0 < iVar12) {
          fVar14 = (float10)_DAT_005edf5e;
          fVar13 = (float10)_DAT_005edf56;
          fVar15 = (float10)_DAT_005edf2e;
          fVar16 = (float10)(fVar1 / (float)iVar9);
          pfVar7 = (float *)(iVar10 * 0x20 + param_1 + 0x3f8);
          do {
            pfVar7[1] = 0.0;
            *pfVar7 = fStack_28;
            pfVar7[2] = fStack_34;
            fVar17 = (((float10)*(float *)(param_1 + 0x2b4) * fVar15 + (float10)*pfVar7) /
                     (float10)*(float *)(param_1 + 0x2b4)) * fVar14 * fVar13;
            iVar10 = FUN_005b7ff0();
            *(int *)(iVar10 + 0x18) = (int)ROUND(fVar17) + 0x20000;
            fVar18 = ((float10)1 -
                     (float10)*(float *)(iVar10 + 8) / (float10)*(float *)(param_1 + 700)) * fVar14
                     * fVar13;
            fVar17 = (float10)fStack_28;
            uVar19 = FUN_005b7ff0();
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
    iVar9 = param_1 + 0x8104;
    iStack_30 = 0;
    if (0 < *(int *)(param_1 + 0x8100)) {
      do {
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x80fc)) {
          iVar6 = iStack_30 % 4 << 0x16;
          iVar12 = (iStack_30 % 4 + 1) * 0x400000;
          do {
            *(uint *)(iVar9 + 4) = 3;
            *(uint *)(iVar9 + 0x14) = 0;
            uVar3 = *(uint *)(iVar9 + 0x14);
            *(uint *)(iVar9 + 0x10) = uVar3;
            *(uint *)(iVar9 + 0xc) = uVar3;
            *(uint *)(iVar9 + 8) = uVar3;
            iVar10 = (*(int *)(param_1 + 0x80fc) + 1) * iStack_30 + iVar5;
            *(int *)(iVar9 + 0x30) = iVar10;
            iVar10 = iVar10 + 1;
            *(int *)(iVar9 + 0x38) = iVar6;
            *(int *)(iVar9 + 0x24) = iVar10;
            iVar8 = iVar5 % 4 << 0x16;
            iVar11 = (iVar5 % 4 + 1) * 0x400000;
            *(int *)(iVar9 + 0x34) = iVar8;
            *(int *)(iVar9 + 0x28) = iVar11;
            *(int *)(iVar9 + 0x2c) = iVar6;
            *(int *)(iVar9 + 0x18) = iVar10 + *(int *)(param_1 + 0x80fc) + 1;
            *(int *)(iVar9 + 0x1c) = iVar11;
            *(int *)(iVar9 + 0x20) = iVar12;
            *(uint *)(iVar9 + 0x4c) = 3;
            *(uint *)(iVar9 + 0x5c) = 0;
            uVar3 = *(uint *)(iVar9 + 0x5c);
            *(uint *)(iVar9 + 0x58) = uVar3;
            *(uint *)(iVar9 + 0x54) = uVar3;
            *(uint *)(iVar9 + 0x50) = uVar3;
            iVar10 = *(int *)(param_1 + 0x80fc);
            *(int *)(iVar9 + 0x7c) = iVar8;
            iVar10 = iVar5 + (iVar10 + 1) * iStack_30;
            *(int *)(iVar9 + 0x78) = iVar10;
            *(int *)(iVar9 + 0x80) = iVar6;
            iVar4 = *(int *)(param_1 + 0x80fc);
            *(int *)(iVar9 + 100) = iVar8;
            iVar10 = iVar10 + iVar4 + 2;
            *(int *)(iVar9 + 0x6c) = iVar10;
            *(int *)(iVar9 + 0x70) = iVar11;
            *(int *)(iVar9 + 0x60) = iVar10 + -1;
            *(int *)(iVar9 + 0x74) = iVar12;
            *(int *)(iVar9 + 0x68) = iVar12;
            iVar5 = iVar5 + 1;
            iVar9 = iVar9 + 0x90;
          } while (iVar5 < *(int *)(param_1 + 0x80fc));
        }
        iStack_30 = iStack_30 + 1;
      } while (iStack_30 < *(int *)(param_1 + 0x8100));
    }
    *(int *)(param_1 + 0x2b390) = *(int *)(param_1 + 0x80fc) * *(int *)(param_1 + 0x8100) * 2;
  }
  else {
    *(uint *)(param_1 + 0x2b390) = 0x20;
    *(uint *)(param_1 + 0x3f4) = 0;
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x2b390)) {
      fVar14 = (float10)_DAT_005edf66;
      fVar13 = (float10)_DAT_005edf56;
      fVar15 = (float10)_DAT_005edf4e;
      do {
        fVar16 = ((float10)iVar9 / (float10)*(int *)(param_1 + 0x2b390)) * (float10)_DAT_005edf3e *
                 (float10)_DAT_005edf36;
        fVar17 = (float10)fcos(fVar16);
        fVar16 = (float10)fsin(fVar16);
        *(float *)(param_1 + 0x3f8 + *(int *)(param_1 + 0x3f4) * 0x20) =
             (float)(fVar17 * (float10)*(float *)(param_1 + 0x2b4) * (float10)_DAT_005edf46);
        *(uint *)(param_1 + 0x3fc + *(int *)(param_1 + 0x3f4) * 0x20) = 0;
        *(float *)(param_1 + 0x400 + *(int *)(param_1 + 0x3f4) * 0x20) =
             (float)(fVar16 * (float10)*(float *)(param_1 + 700) * (float10)_DAT_005edf46);
        fVar16 = ((float10)*(float *)(*(int *)(param_1 + 0x3f4) * 0x20 + 0x3f8 + param_1) /
                 (float10)*(float *)(param_1 + 0x2b4)) * fVar15 * fVar13 + fVar14;
        FUN_005b7ff0();
        *(int *)(extraout_ECX + 0x410 + param_1) = (int)ROUND(fVar16);
        fVar16 = ((float10)*(float *)(*(int *)(param_1 + 0x3f4) * 0x20 + 0x400 + param_1) /
                 (float10)*(float *)(param_1 + 700)) * fVar15 * fVar13 + fVar14;
        FUN_005b7ff0();
        *(int *)(extraout_ECX_00 + 0x414 + param_1) = (int)ROUND(fVar16);
        iVar9 = extraout_EDX + 1;
        *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
      } while (iVar9 < *(int *)(param_1 + 0x2b390));
    }
    iVar9 = param_1 + 0x3f8;
    iVar5 = *(int *)(param_1 + 0x3f4) * 0x20;
    *(uint *)(iVar5 + 8 + iVar9) = 0;
    *(uint *)(iVar5 + 4 + iVar9) = *(uint *)(iVar5 + 8 + iVar9);
    *(uint *)(iVar5 + iVar9) = *(uint *)(iVar5 + 4 + iVar9);
    iStack_1c = 0;
    *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
    if (0 < *(int *)(param_1 + 0x2b390)) {
      iVar9 = param_1 + 0x8104;
      iVar5 = param_1;
      do {
        *(uint *)(iVar9 + 4) = 3;
        *(uint *)(iVar9 + 0x14) = 0;
        uVar3 = *(uint *)(iVar9 + 0x14);
        *(uint *)(iVar9 + 0x10) = uVar3;
        *(uint *)(iVar9 + 0xc) = uVar3;
        *(uint *)(iVar9 + 8) = uVar3;
        iVar12 = iStack_1c + 1;
        uVar3 = *(uint *)(param_1 + 0x2b390);
        *(uint *)(iVar9 + 0x1c) = 0;
        *(uint *)(iVar9 + 0x20) = 0;
        *(uint *)(iVar9 + 0x18) = uVar3;
        iVar6 = iVar12 % *(int *)(param_1 + 0x2b390);
        *(int *)(iVar9 + 0x24) = iStack_1c;
        *(uint *)(iVar9 + 0x28) = *(uint *)(iVar5 + 0x410);
        uVar3 = *(uint *)(iVar5 + 0x414);
        *(int *)(iVar9 + 0x30) = iVar6;
        *(uint *)(iVar9 + 0x2c) = uVar3;
        iVar6 = param_1 + iVar6 * 0x20;
        *(uint *)(iVar9 + 0x34) = *(uint *)(iVar6 + 0x410);
        iVar5 = iVar5 + 0x20;
        *(uint *)(iVar9 + 0x38) = *(uint *)(iVar6 + 0x414);
        iVar9 = iVar9 + 0x48;
        iStack_1c = iVar12;
      } while (iVar12 < *(int *)(param_1 + 0x2b390));
    }
  }
  FUN_005870a0(param_1);
  *(uint *)(param_1 + 0x2b384) = 0;
  *(uint *)(param_1 + 0x2b388) = 0;
  return;
}
