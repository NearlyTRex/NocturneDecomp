// Name: FUN_004fda40
// Address: 004fda40
// Address Range: [[004fda40, 004fe449]]
// Convention: unknown
// Signature: void FUN_004fda40(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004fe396) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fda40(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  unkbyte10 Var6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float afStackY_11a4 [962];
  ulonglong uVar12;
  ulonglong uVar13;
  float *pfVar14;
  byte auStack_284 [200];
  uint uStack_1bc;
  float afStack_1b8 [5];
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  uint uStack_180;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float afStack_15c [3];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  uint uStack_144;
  float afStack_140 [4];
  float fStack_130;
  uint uStack_12c;
  float afStack_120 [3];
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float afStack_ec [5];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint uStack_cc;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float afStack_78 [3];
  double dStack_6c;
  double dStack_64;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_3c;
  float fStack_38;
  uint uStack_34;
  int iStack_30;
  float fStack_2c;
  float fStack_28;
  float *pfStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar3 = FUN_0042e1a0(param_1,param_2);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    pfStack_24 = (float *)(param_1 + 0x20);
    fStack_50 = param_2 * *(float *)(param_1 + 0xc1d0);
    iStack_30 = param_1 + 0x158;
    while (0.0 < fStack_50) {
      iVar3 = FUN_00524270(iStack_30,&fStack_50);
      if ((iVar3 == 100) && (iVar3 = *(int *)(param_1 + 0xc1e8), iVar3 != 0)) {
        fStack_84 = *(float *)(iVar3 + 0x20) - *pfStack_24;
        fStack_80 = *(float *)(iVar3 + 0x24) - pfStack_24[1];
        fStack_7c = *(float *)(iVar3 + 0x28) - pfStack_24[2];
        fStack_d8 = fStack_84;
        afStack_ec[(uint)bVar5 * -2 + 6] = afStack_98[(uint)bVar5 * -2 + 6];
        afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
             afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        if (afStack_140 + 0x11 != afStack_ec + 5) {
          fStack_fc = fStack_d8;
          fStack_f8 = fStack_d4;
          fStack_f4 = fStack_d0;
        }
        fStack_f8 = fStack_f8 + _DAT_005e6c4b;
        fStack_14 = (float)FUN_0040cc00(0xc0000000);
        fStack_fc = fStack_14 + fStack_fc;
        fStack_14 = (float)FUN_0040cc00();
        Var6 = fsin((float10)_DAT_005e6c53);
        fVar11 = (float10)fptan((float10)_DAT_005e6c5b);
        fVar9 = (float10)fStack_14 + (float10)fStack_f4;
        fStack_f4 = (float)fVar9;
        fVar10 = (float10)fStack_fc;
        FUN_005c1d69();
        fVar2 = SQRT(fStack_fc * fStack_fc + fStack_f4 * fStack_f4);
        fVar7 = (float10)fcos(Var6);
        fVar8 = (float10)fsin(fVar10);
        fVar10 = (float10)fcos(fVar10);
        dStack_64 = (double)fVar2;
        fStack_2c = fVar2 * (float)_DAT_005e6c43 * fVar2;
        fVar9 = fVar7 * (float10)_DAT_005e6c4b * fVar7 *
                (fVar9 * (float10)fVar2 - (float10)fStack_f8);
        fStack_14c = (float)-fVar11;
        fStack_28 = (float)fVar9;
        fStack_150 = (float)(fVar8 * fVar7);
        fStack_148 = (float)(fVar10 * fVar7);
        if ((float10)0 < fVar9) {
          fStack_20 = SQRT(fStack_2c / fStack_28);
          fStack_114 = (float)(fVar8 * fVar7) * fStack_20;
          fStack_110 = (float)-fVar11 * fStack_20;
          fStack_10c = (float)(fVar10 * fVar7) * fStack_20;
          fStack_b4 = fStack_114;
          afStack_ec[(uint)bVar5 * -2 + 0xf] = afStack_140[(uint)bVar5 * -2 + 0xc];
          afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
               afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
          if (afStack_1b8 + 0x1a != afStack_ec + 0xe) {
            fStack_150 = fStack_b4;
            fStack_14c = fStack_b0;
            fStack_148 = fStack_ac;
          }
          uStack_a8 = 0;
          uStack_a4 = 0x3f000000;
          uStack_a0 = 0x3f800000;
          FUN_00408b40(param_1);
          uVar13 = 2;
          uVar12 = CONCAT44(afStack_1b8 + 0x1a,afStack_140 + 8);
          afStack_120[0] = (float)uStack_144;
          afStack_140[(uint)bVar5 * -2 + 9] = afStack_140[(uint)bVar5 * -2];
          uVar4 = 0x01C57074;
          afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
               afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          FUN_004b5e00(uVar4,uVar12,uVar13);
          (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
        }
      }
    }
    *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
    FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
    iVar3 = FUN_00524770();
    uVar1 = *(uint *)(iVar3 + 0x24);
    uStack_3c = uVar1;
    iVar3 = FUN_00432240(param_1,param_2);
    if (iVar3 == 0) {
      if (uVar1 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        iVar3 = *(int *)(param_1 + 0xc1e8);
        if (iVar3 == 0) {
          iVar3 = FUN_004a0fe0(param_1,param_2);
          if (iVar3 != 0) {
            FUN_005247c0();
          }
        }
        else {
          afStack_140[2] = *(float *)(iVar3 + 0x20) - *pfStack_24;
          afStack_140[3] = *(float *)(iVar3 + 0x24) - pfStack_24[1];
          fStack_130 = *(float *)(iVar3 + 0x28) - pfStack_24[2];
          fStack_108 = afStack_140[2];
          afStack_140[(uint)bVar5 * -2 + 0xf] = afStack_140[(uint)bVar5 * -2 + 3];
          afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
               afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          fStack_1c = fStack_100 * fStack_100 + fStack_108 * fStack_108 + fStack_104 * fStack_104;
          fStack_38 = (float)(((int)fStack_1c >> 1) + _DAT_01cc804c);
          FUN_005a7520();
          uStack_180 = uStack_cc;
          afStack_1b8[(uint)bVar5 * -2 + 0xf] = afStack_ec[(uint)bVar5 * -2 + 9];
          afStack_1b8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
               afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
          fStack_14 = (float)FUN_0040cd60();
          if (((float)_DAT_005e6c2b <= ABS(fStack_14)) || ((float)_DAT_005e6c33 < fStack_38)) {
            FUN_005247c0();
          }
          else if (*(float *)(param_1 + 0xc1e4) <= 0.0) {
            FUN_005247c0();
            fStack_14 = (float)FUN_0040cc00(0x41700000,0x41f00000);
            *(float *)(param_1 + 0xc1e4) = fStack_14;
          }
        }
      }
      else if (uVar1 < 2) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        uVar4 = 0x41A00000;
        if (*(int *)(param_1 + 0xc1e8) == 0) {
          iVar3 = FUN_004a0fe0(param_1,param_2);
          if (iVar3 == 0) {
            FUN_005247c0();
          }
        }
        else {
          uStack_18 = 0x41A00000;
          *(uint *)(param_1 + 0x24a4) = 0;
          *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
          *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
          afStack_78[0] = 0.0;
          afStack_78[2] = (float)uVar4;
          afStack_78[1] = 0.0;
          uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                            (*(int *)(param_1 + 0xc1e8),afStack_98 + 8,0x3f000000,0x3e32b8c2);
          iVar3 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar4);
          if (iVar3 < 0) {
            FUN_00445430();
            FUN_005247c0();
          }
          if (*(float *)(param_1 + 0xc1e4) <= 0.0) {
            iVar3 = *(int *)(param_1 + 0xc1e8);
            fStack_198 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_194 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_190 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            fStack_1a4 = fStack_198;
            afStack_1b8[(uint)bVar5 * -2 + 6] = afStack_1b8[(uint)bVar5 * -2 + 9];
            afStack_1b8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
                 afStack_1b8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
            fStack_4c = fStack_19c * fStack_19c + fStack_1a4 * fStack_1a4 + fStack_1a0 * fStack_1a0;
            fStack_48 = (float)(((int)fStack_4c >> 1) + _DAT_01cc804c);
            if (fStack_48 < *(float *)(param_1 + 0xc1e0)) {
              FUN_005a7520();
              fStack_f0 = fStack_9c;
              afStack_ec[(uint)bVar5 * -2] = afStack_98[(uint)bVar5 * -2];
              afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                   afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
              if (afStack_1b8 + 5 != &fStack_f0) {
                fStack_1a4 = fStack_f0;
                fStack_1a0 = afStack_ec[0];
                fStack_19c = afStack_ec[1];
              }
              uStack_34 = FUN_0040cd60();
              fStack_14 = (float)uStack_34;
              fStack_14 = (float)FUN_0040cd60();
              fStack_14 = (float)FUN_0040cd60();
              if (ABS(fStack_14) < (float)_DAT_005e6c2b) {
                FUN_005247c0();
                *(uint *)(param_1 + 0xc1e4) = 0x40c00000;
              }
            }
          }
        }
      }
      else if (((uVar1 == 5) && (*(int *)(param_1 + 0xc1d4) == 0)) &&
              (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_00569040(iStack_30,0);
        pfVar14 = afStack_ec + 2;
        afStack_ec[2] = afStack_1b8[2];
        afStack_ec[(uint)bVar5 * -2 + 3] = afStack_1b8[(uint)bVar5 * -2 + 3];
        afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             afStack_1b8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        FUN_00408b40(param_1,pfVar14);
        uStack_12c = uStack_1bc;
        afStack_140[(uint)bVar5 * -2 + 6] = afStack_1b8[(uint)bVar5 * -2];
        afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
             afStack_1b8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        FUN_004e62e0();
        *(uint *)(param_1 + 0xc1d4) = 1;
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x273c);
      if (((uVar1 < 2) || (uVar1 < 3)) || (uVar1 != 3)) {
        FUN_005247c0();
      }
      else {
        FUN_005247c0();
        FUN_00445430();
      }
      *(uint *)(param_1 + 0x24a4) = 0;
      *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
      *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    }
    if (0.0 < *(float *)(param_1 + 0xc1e4)) {
      *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
    }
    if (uStack_3c == 1) {
      iVar3 = FUN_005735a0();
      if (iVar3 == 0) {
        fVar11 = (float10)1;
        fVar9 = (float10)1.4426950408889634 *
                (float10)0.6931471805599453 * (float10)*(float *)(param_1 + 0x27b8) *
                (float10)_DAT_005e6c3b;
        fVar10 = (float10)f2xm1(fVar9 - (fVar9 / fVar11) * fVar11);
        fVar11 = (float10)fscale(fVar10 + fVar11,fVar9);
        dStack_6c = (double)fVar11;
        fStack_14 = (float)FUN_0040cc00(0x3f7d70a4,0x3f8147ae);
        FUN_005bfb40(auStack_284,"slime.wav @%f *%f",(double)*(float *)(param_1 + 0x27b8),
                     (double)(fStack_14 * (float)dStack_6c));
        uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x30))(param_1,auStack_284);
        *(uint *)(param_1 + 0xc270) = uVar4;
      }
    }
    else {
      FUN_00573a80();
    }
    iVar3 = FUN_0042e120();
    if (iVar3 != 0) {
      if ((*(int *)(param_1 + 0xc1e8) != 0) &&
         (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))(),
         iVar3 == param_1)) {
        FUN_00559250(0x01E82168,*(uint *)(param_1 + 0xc1e8));
      }
      FUN_0042d700(param_1,param_2);
      fStack_18c = *(float *)(param_1 + 0x2518) * param_2;
      fStack_188 = *(float *)(param_1 + 0x251c) * param_2;
      fStack_184 = *(float *)(param_1 + 0x2520) * param_2;
      fStack_168 = fStack_18c;
      afStack_1b8[(uint)bVar5 * -2 + 0x15] = afStack_1b8[(uint)bVar5 * -2 + 0xc];
      afStack_1b8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
           afStack_1b8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
      afStack_98[2] = fStack_168 + *(float *)(param_1 + 0x250c);
      afStack_98[3] = fStack_164 + *(float *)(param_1 + 0x2510);
      fStack_88 = fStack_160 + *(float *)(param_1 + 0x2514);
      fStack_174 = afStack_98[2];
      afStack_1b8[(uint)bVar5 * -2 + 0x12] = afStack_98[(uint)bVar5 * -2 + 3];
      afStack_1b8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
           afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      fStack_c0 = fStack_174 + *(float *)(param_1 + 0x249c);
      fStack_bc = fStack_170 + *(float *)(param_1 + 0x24a0);
      fStack_b8 = fStack_16c + *(float *)(param_1 + 0x24a4);
      afStack_15c[0] = fStack_c0;
      afStack_1b8[(uint)bVar5 * -2 + 0x18] = afStack_ec[(uint)bVar5 * -2 + 0xc];
      afStack_1b8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19] =
           afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
      *(uint *)(param_1 + 0x2514) = 0;
      *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
      *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
      *(uint *)(param_1 + 0x24a4) = 0;
      *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
      *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
      FUN_0042d750(param_1,afStack_1b8 + 0x17);
    }
    FUN_0042e160();
    FUN_005675a0();
    FUN_00433e80(param_1,param_2);
  }
  return;
}
