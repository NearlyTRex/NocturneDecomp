// Name: core_wateract.cpp_CWaterActor_setup_FUN_00551370
// Address: 00551370
// Address Range: [[00551370, 00551918]]
// Convention: unknown
// Signature: void core_wateract_cpp_CWaterActor_setup_FUN_00551370(int param_1)

#include "nocturne.h"

void core_wateract_cpp_CWaterActor_setup_FUN_00551370(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  uint uStack_4c;
  int local_30;
  float local_2c;
  int local_1c;
  int local_18;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  *(float *)(param_1 + 0x2b228) =
       *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x160) * *(float *)(param_1 + 0x274);
  if (*(int *)(param_1 + 0x280) == 0) {
    while( true ) {
      fVar13 = (float10)1 / (float10)*(float *)(param_1 + 0x27c);
      fVar1 = *(float *)(param_1 + 0x150);
      fVar14 = (float10)round((float10)*(float *)(param_1 + 0x158) * fVar13)
      ;
      fVar13 = (float10)round((float10)fVar1 * fVar13);
      *(int *)(param_1 + 0x7f98) = (int)ROUND(fVar13);
      iVar11 = (int)ROUND(fVar13) + 1;
      *(uint *)(param_1 + 0x7f9c) = uStack_4c;
      iVar5 = ((int)ROUND(fVar14) + 1) * iVar11;
      *(int *)(param_1 + 0x290) = iVar5;
      if (iVar5 < 0x3e9) break;
      *(float *)(param_1 + 0x27c) = *(float *)(param_1 + 0x27c) * (float)2;
    }
    fVar1 = *(float *)(param_1 + 0x158);
    fVar4 = (float)0.5;
    iVar5 = 0;
    if (0 < (int)ROUND(fVar14) + 1) {
      do {
        iVar8 = 0;
        if (0 < iVar11) {
          fVar13 = (float10)252;
          fVar14 = (float10)65536;
          fVar16 = (float10)0.5;
          pfVar6 = (float *)(iVar5 * 0x20);
          do {
            pfVar6[1] = 0.0;
            *pfVar6 = 0.0;
            pfVar6[2] = local_2c;
            fVar17 = (float10)round
                                        ((((float10)*(float *)(param_1 + 0x150) * fVar16 +
                                          (float10)*pfVar6) / (float10)*(float *)(param_1 + 0x150))
                                         * fVar13 * fVar14);
            pfVar6[6] = (float)((int)ROUND(fVar17) + 0x20000);
            iVar5 = iVar5 + 1;
            iVar8 = iVar8 + 1;
            fVar17 = (float10)round
                                        (((float10)1 -
                                         (float10)pfVar6[2] / (float10)*(float *)(param_1 + 0x158))
                                         * fVar13 * fVar14);
            pfVar6[7] = (float)((int)ROUND(fVar17) + 0x20000);
            pfVar6 = pfVar6 + 8;
          } while (iVar8 < iVar11);
        }
        local_18 = local_18 + 1;
      } while (local_18 < (int)(-fVar1 * fVar4));
    }
    iVar5 = param_1 + 0x7fa0;
    local_30 = 0;
    if (0 < *(int *)(param_1 + 0x7f9c)) {
      do {
        iVar11 = 0;
        if (0 < *(int *)(param_1 + 0x7f98)) {
          iVar8 = local_30 % 4 << 0x16;
          iVar9 = (local_30 % 4 + 1) * 0x400000;
          do {
            *(uint *)(iVar5 + 4) = 3;
            *(uint *)(iVar5 + 0x14) = 0;
            uVar2 = *(uint *)(iVar5 + 0x14);
            *(uint *)(iVar5 + 0x10) = uVar2;
            *(uint *)(iVar5 + 0xc) = uVar2;
            *(uint *)(iVar5 + 8) = uVar2;
            iVar12 = (*(int *)(param_1 + 0x7f98) + 1) * local_30 + iVar11;
            *(int *)(iVar5 + 0x30) = iVar12;
            iVar12 = iVar12 + 1;
            *(int *)(iVar5 + 0x38) = iVar8;
            *(int *)(iVar5 + 0x24) = iVar12;
            iVar7 = iVar11 % 4 << 0x16;
            iVar10 = (iVar11 % 4 + 1) * 0x400000;
            *(int *)(iVar5 + 0x34) = iVar7;
            *(int *)(iVar5 + 0x28) = iVar10;
            *(int *)(iVar5 + 0x2c) = iVar8;
            *(int *)(iVar5 + 0x18) = iVar12 + *(int *)(param_1 + 0x7f98) + 1;
            *(int *)(iVar5 + 0x1c) = iVar10;
            *(int *)(iVar5 + 0x20) = iVar9;
            *(uint *)(iVar5 + 0x4c) = 3;
            *(uint *)(iVar5 + 0x5c) = 0;
            uVar2 = *(uint *)(iVar5 + 0x5c);
            *(uint *)(iVar5 + 0x58) = uVar2;
            *(uint *)(iVar5 + 0x54) = uVar2;
            *(uint *)(iVar5 + 0x50) = uVar2;
            iVar12 = *(int *)(param_1 + 0x7f98);
            *(int *)(iVar5 + 0x7c) = iVar7;
            iVar12 = iVar11 + (iVar12 + 1) * local_30;
            *(int *)(iVar5 + 0x78) = iVar12;
            *(int *)(iVar5 + 0x80) = iVar8;
            iVar3 = *(int *)(param_1 + 0x7f98);
            *(int *)(iVar5 + 100) = iVar7;
            iVar12 = iVar12 + iVar3 + 2;
            *(int *)(iVar5 + 0x6c) = iVar12;
            *(int *)(iVar5 + 0x70) = iVar10;
            *(int *)(iVar5 + 0x60) = iVar12 + -1;
            *(int *)(iVar5 + 0x74) = iVar9;
            *(int *)(iVar5 + 0x68) = iVar9;
            iVar11 = iVar11 + 1;
            iVar5 = iVar5 + 0x90;
          } while (iVar11 < *(int *)(param_1 + 0x7f98));
        }
        local_30 = local_30 + 1;
      } while (local_30 < *(int *)(param_1 + 0x7f9c));
    }
    *(int *)(param_1 + 0x2b22c) = *(int *)(param_1 + 0x7f98) * *(int *)(param_1 + 0x7f9c) * 2;
  }
  else {
    *(uint *)(param_1 + 0x2b22c) = 0x20;
    *(uint *)(param_1 + 0x290) = 0;
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x2b22c)) {
      fVar13 = (float10)8388608;
      fVar14 = (float10)65536;
      fVar16 = (float10)128;
      do {
        fVar17 = ((float10)iVar5 / (float10)*(int *)(param_1 + 0x2b22c)) * (float10)3.1415926535000001
                 * (float10)2;
        fVar15 = (float10)fcos(fVar17);
        fVar17 = (float10)fsin(fVar17);
        *(float *)(param_1 + 0x294 + *(int *)(param_1 + 0x290) * 0x20) =
             (float)(fVar15 * (float10)*(float *)(param_1 + 0x150) * (float10)0.70699999999999996);
        *(uint *)(param_1 + 0x298 + *(int *)(param_1 + 0x290) * 0x20) = 0;
        *(float *)(param_1 + 0x29c + *(int *)(param_1 + 0x290) * 0x20) =
             (float)(fVar17 * (float10)*(float *)(param_1 + 0x158) * (float10)0.70699999999999996);
        iVar11 = *(int *)(param_1 + 0x290) * 0x20;
        fVar17 = (float10)round
                                    (((float10)*(float *)(iVar11 + 0x294 + param_1) /
                                     (float10)*(float *)(param_1 + 0x150)) * fVar16 * fVar14 +
                                     fVar13);
        *(int *)(iVar11 + 0x2ac + param_1) = (int)ROUND(fVar17);
        iVar11 = *(int *)(param_1 + 0x290) * 0x20;
        fVar17 = (float10)round
                                    (((float10)*(float *)(iVar11 + 0x29c + param_1) /
                                     (float10)*(float *)(param_1 + 0x158)) * fVar16 * fVar14 +
                                     fVar13);
        *(int *)(iVar11 + 0x2b0 + param_1) = (int)ROUND(fVar17);
        iVar5 = iVar5 + 1;
        *(int *)(param_1 + 0x290) = *(int *)(param_1 + 0x290) + 1;
      } while (iVar5 < *(int *)(param_1 + 0x2b22c));
    }
    iVar5 = param_1 + 0x294;
    iVar11 = *(int *)(param_1 + 0x290) * 0x20;
    *(uint *)(iVar11 + 8 + iVar5) = 0;
    *(uint *)(iVar11 + 4 + iVar5) = *(uint *)(iVar11 + 8 + iVar5);
    *(uint *)(iVar11 + iVar5) = *(uint *)(iVar11 + 4 + iVar5);
    local_1c = 0;
    *(int *)(param_1 + 0x290) = *(int *)(param_1 + 0x290) + 1;
    if (0 < *(int *)(param_1 + 0x2b22c)) {
      iVar5 = param_1 + 0x7fa0;
      iVar11 = param_1;
      do {
        *(uint *)(iVar5 + 4) = 3;
        *(uint *)(iVar5 + 0x14) = 0;
        uVar2 = *(uint *)(iVar5 + 0x14);
        *(uint *)(iVar5 + 0x10) = uVar2;
        *(uint *)(iVar5 + 0xc) = uVar2;
        *(uint *)(iVar5 + 8) = uVar2;
        iVar9 = local_1c + 1;
        uVar2 = *(uint *)(param_1 + 0x2b22c);
        *(uint *)(iVar5 + 0x1c) = 0;
        *(uint *)(iVar5 + 0x20) = 0;
        *(uint *)(iVar5 + 0x18) = uVar2;
        iVar8 = iVar9 % *(int *)(param_1 + 0x2b22c);
        *(int *)(iVar5 + 0x24) = local_1c;
        *(uint *)(iVar5 + 0x28) = *(uint *)(iVar11 + 0x2ac);
        uVar2 = *(uint *)(iVar11 + 0x2b0);
        *(int *)(iVar5 + 0x30) = iVar8;
        *(uint *)(iVar5 + 0x2c) = uVar2;
        iVar8 = param_1 + iVar8 * 0x20;
        *(uint *)(iVar5 + 0x34) = *(uint *)(iVar8 + 0x2ac);
        iVar11 = iVar11 + 0x20;
        *(uint *)(iVar5 + 0x38) = *(uint *)(iVar8 + 0x2b0);
        iVar5 = iVar5 + 0x48;
        local_1c = iVar9;
      } while (iVar9 < *(int *)(param_1 + 0x2b22c));
    }
  }
  core_wateract_cpp_CWaterActor_updateWorldPositions_FUN_00551920(param_1);
  *(uint *)(param_1 + 0x2b220) = 0;
  *(uint *)(param_1 + 0x2b224) = 0;
  return;
}
