// Name: FUN_0055de50
// Address: 0055de50
// Address Range: [[0055de50, 0055f3c2]]
// Convention: unknown
// Signature: void FUN_0055de50(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055de50(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  ulonglong uVar14;
  float afStackY_121c [973];
  uint *puVar15;
  byte auStack_2d0 [4];
  float fStack_2cc;
  uint uStack_2a0;
  int iStack_29c;
  int iStack_298;
  float afStack_294 [6];
  float afStack_27c [6];
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  uint uStack_234;
  float afStack_230 [4];
  float fStack_220;
  float afStack_21c [3];
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  uint uStack_1f8;
  float afStack_1f4 [4];
  float fStack_1e4;
  uint uStack_1e0;
  float afStack_1dc [4];
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  uint uStack_1bc;
  float afStack_1b0 [3];
  uint uStack_1a4;
  float afStack_198 [3];
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float afStack_174 [3];
  float fStack_168;
  float afStack_164 [5];
  float afStack_150 [3];
  uint uStack_144;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float afStack_104 [4];
  float fStack_f4;
  float afStack_f0 [3];
  uint uStack_e4;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float afStack_cc [3];
  float afStack_c0 [3];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [3];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  float afStack_54 [3];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_34;
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar11 = 0;
  iVar4 = FUN_00524770(param_1 + 0x158);
  fStack_28 = *(float *)(param_1 + 0x160);
  uVar6 = *(uint *)(iVar4 + 0x24);
  iVar4 = FUN_00524770(param_1 + 0x158);
  fStack_1c = (float)*(int *)(iVar4 + 100);
  FUN_00434790(param_1,param_2);
  iVar4 = FUN_0042e1a0(param_1,param_2);
  if (iVar4 == 0) {
    FUN_00573a80(*(uint *)(param_1 + 0xc2b4));
    return;
  }
  if ((*(int *)(param_1 + 0xc268) == 2) && (0.0 <= *(float *)(param_1 + 0xc2d0))) {
    *(float *)(param_1 + 0xc2d0) = *(float *)(param_1 + 0xc2d0) - param_2;
  }
  fStack_34 = param_2 * *(float *)(param_1 + 0xc1d0) * *(float *)(param_1 + 0xc310);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  while (0.0 < fStack_34) {
    uVar5 = FUN_00524270(param_1 + 0x158,afStack_104 + 0x34);
    FUN_00434a80(param_1,uVar5);
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
  if (*(int *)(param_1 + 0xc268) == 2) {
    *(float *)(param_1 + 0x2528) = *(float *)(param_1 + 0x2528) * (float)_DAT_005f15e5;
  }
  iVar4 = FUN_00432240(param_1,param_2);
  if (iVar4 != 0) {
    uVar1 = *(uint *)(param_1 + 0x273c);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        uVar5 = 5;
        uVar6 = 1;
      }
      else {
LAB_0055e58a:
        uVar6 = 1;
        uVar5 = FUN_0040cc60(0,4,1);
      }
      FUN_005247c0(param_1 + 0x158,uVar5,uVar6);
    }
    else if (uVar1 < 3) {
      FUN_005247c0(param_1 + 0x158,0xb,1);
      iVar4 = FUN_0040cd00(0x3f000000);
      if (iVar4 != 0) {
        iVar4 = FUN_0040cd00(0x3f000000);
        if (iVar4 == 0) {
          uVar6 = *(uint *)(param_1 + 0xc280);
        }
        else {
          uVar6 = *(uint *)(param_1 + 0xc27c);
        }
        FUN_00569040(param_1 + 0x158,uVar6);
        uVar6 = 0x3dcccccd;
        afStack_21c[0] = afStack_164[2];
        afStack_230[(uint)bVar11 * -2 + 6] = afStack_164[(uint)bVar11 * -2 + 3];
        afStack_230[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        (**(code **)(*(int *)(param_1 + 0x154) + 0x24))(param_1,afStack_230 + 5,uVar6);
      }
    }
    else {
      if (uVar1 != 3) goto LAB_0055e58a;
      FUN_005247c0(param_1 + 0x158,0,1);
      FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    goto LAB_0055e060;
  }
  switch(uVar6) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    goto switchD_0055f381_caseD_0;
  case 5:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    iVar4 = FUN_0040cd00(0x3e4ccccd);
    if (iVar4 != 0) {
      iVar4 = FUN_0040cd00(0x3f000000);
      if (iVar4 == 0) {
        uVar6 = *(uint *)(param_1 + 0xc280);
      }
      else {
        uVar6 = *(uint *)(param_1 + 0xc27c);
      }
      FUN_00569040(param_1 + 0x158,uVar6);
      uVar6 = 0x3dcccccd;
      afStack_150[0] = (float)uStack_60;
      afStack_164[(uint)bVar11 * -2 + 6] = afStack_104[(uint)bVar11 * -2 + 0x2a];
      afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
           afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b];
      (**(code **)(*(int *)(param_1 + 0x154) + 0x24))(param_1,afStack_164 + 5,uVar6);
    }
    if (*(int *)(param_1 + 0xc2e8) != 0) {
      fVar2 = *(float *)(param_1 + 0xc2f0) - param_2;
      *(float *)(param_1 + 0xc2f0) = fVar2;
      if (0.0 < fVar2) {
        FUN_00431cc0(param_1,*(uint *)(param_1 + 0xc2e8),0x3f800000,0x3f800000,
                     param_1 + 0xc2ec);
        uVar1 = *(uint *)(param_1 + 0xc2ec);
        if (uVar1 == 0) {
LAB_0055f251:
          uVar6 = FUN_0040cc60(0,4,1);
          FUN_005247c0(param_1 + 0x158,uVar6);
          *(uint *)(param_1 + 0xc2e8) = 0;
        }
        else {
          if (uVar1 < 2) {
            FUN_005247c0(param_1 + 0x158,5,1);
          }
          else {
            if (uVar1 != 2) goto LAB_0055f251;
            fStack_14 = (float)FUN_00525020(param_1 + 0x158);
            if ((float)_DAT_005f161d < fStack_14) {
              *(int *)(param_1 + 0xc2f8) = *(int *)(param_1 + 0xc2f8) + 1;
            }
            if (2 < *(int *)(param_1 + 0xc2f8)) {
              fStack_14 = (float)FUN_00525020(param_1 + 0x158);
              if ((float)_DAT_005f1625 < fStack_14) {
                iVar4 = FUN_0040cc60(0,3,1);
                FUN_005247c0(param_1 + 0x158,iVar4 + 0xb);
                *(uint *)(param_1 + 0xc2f8) = 0;
              }
            }
          }
          if (*(int *)(param_1 + 0xc2e8) != 0) break;
        }
      }
      else {
        *(uint *)(param_1 + 0xc2e8) = 0;
        *(uint *)(param_1 + 0xc2f0) = 0;
      }
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
    iVar7 = *(int *)(param_1 + 0xc1e8);
    iVar4 = param_1 + 0x158;
    if (iVar7 == 0) {
      uVar6 = FUN_0040cc60(0,4,1);
      FUN_005247c0(iVar4,uVar6);
    }
    else {
      fStack_48 = *(float *)(iVar7 + 0x20) - *(float *)(param_1 + 0x20);
      fStack_44 = *(float *)(iVar7 + 0x24) - *(float *)(param_1 + 0x24);
      fStack_40 = *(float *)(iVar7 + 0x28) - *(float *)(param_1 + 0x28);
      afStack_104[2] = fStack_48;
      afStack_104[(uint)bVar11 * -2 + 3] = afStack_104[(uint)bVar11 * -2 + 0x30];
      afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
           afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x31];
      fStack_20 = SQRT(fStack_f4 * fStack_f4 +
                       afStack_104[2] * afStack_104[2] + afStack_104[3] * afStack_104[3]);
      if (*(float *)(param_1 + 0xc1e0) < fStack_20) {
        *(uint *)(param_1 + 0xc1e8) = 0;
        uVar6 = FUN_0040cc60(0,4,1);
        FUN_005247c0(iVar4,uVar6);
      }
      else if ((((fStack_20 <= _DAT_0060518c + _DAT_005f162d) || (_DAT_0060518c + 1.0 <= fStack_20))
               || (*(int *)(param_1 + 0xc2d4) != 1)) || (iVar7 = FUN_0040cc60(0,3), iVar7 == 1)) {
        afStack_174[2] = (float)0x40400000;
        uStack_30 = 0x40400000;
        iVar4 = *(int *)(param_1 + 0xc1e8);
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_174[0] = 0.0;
        afStack_174[1] = 0.0;
        uVar6 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xc4))
                          (iVar4,afStack_1dc + 0x1a,0x3f000000,0x3e32b8c2);
        iVar4 = FUN_0042ccf0(param_1,iVar4 + 0x20,uVar6);
        if (iVar4 < 0) {
          FUN_00445430(PTR_DAT_00611100,"%s gave up chase - I'm confused\n",param_1);
          uVar6 = FUN_0040cc60(0,4,1);
          FUN_005247c0(param_1 + 0x158,uVar6);
        }
        else if ((0 < iVar4) && (*(float *)(param_1 + 0xc1e4) <= 0.0)) {
          if (*(int *)(param_1 + 0xc2d4) == 1) {
            iVar4 = 6;
            uVar6 = 1;
          }
          else {
            uVar6 = 1;
            iVar4 = FUN_0040cc60(0,3,1);
            iVar4 = iVar4 + 6;
          }
          FUN_005247c0(param_1 + 0x158,iVar4,uVar6);
          iVar4 = FUN_00435380(param_1,&DAT_005f15da);
          *(int *)(param_1 + 0xc2e8) = iVar4;
          if (iVar4 != 0) {
            fStack_14 = (float)FUN_0040cc00(0x40800000,0x41400000);
            *(float *)(param_1 + 0xc2f0) = fStack_14;
          }
          iVar4 = FUN_0040cd00(0x3f4ccccd);
          if (iVar4 != 0) {
            FUN_0055f4a0(param_1);
          }
        }
        fVar2 = *(float *)(param_1 + 0xc298) - param_2;
        *(float *)(param_1 + 0xc298) = fVar2;
        if ((fVar2 < 0.0) && (iVar4 = FUN_0040cd00(0x3f000000), iVar4 != 0)) {
          FUN_0055f450(param_1);
        }
      }
      else {
        FUN_005247c0(iVar4,7,1);
        iVar4 = FUN_00435380(param_1,&DAT_005f15b7);
        *(int *)(param_1 + 0xc2e8) = iVar4;
        if (iVar4 != 0) {
          fStack_14 = (float)FUN_0040cc00(0x40800000,0x41400000);
          *(float *)(param_1 + 0xc2f0) = fStack_14;
        }
      }
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    if (*(int *)(param_1 + 0xc2d4) == 1) {
      FUN_0042c010(auStack_2d0);
      fStack_14 = (float)FUN_0040cc00(0x40e00000,0x41700000);
      fStack_2cc = fStack_14 * *(float *)(param_1 + 0xc310);
      iStack_29c = param_1;
      iStack_298 = param_1;
      uStack_2a0 = 0x6d;
      iVar7 = param_1 + 0xfd8;
      FUN_005b5080(&DAT_02c8af28,*(int *)(param_1 + 0xc274) * 0x30 + iVar7,0x3f800000,auStack_2d0);
      pfVar9 = afStack_104 + 0x20;
      afStack_84[0] = (float)uStack_1bc;
      afStack_104[(uint)bVar11 * -2 + 0x21] = afStack_1dc[(uint)bVar11 * -2 + 9];
      afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22] =
           afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
      FUN_00408b40(param_1,pfVar9);
      pfVar9 = afStack_1dc + 0xb;
      afStack_1b0[0] = (float)uStack_144;
      afStack_1dc[(uint)bVar11 * -2 + 0xc] = afStack_164[(uint)bVar11 * -2 + 9];
      iVar4 = param_1;
      afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
           afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
      FUN_004a0770(iVar4,pfVar9);
      fStack_14 = (float)FUN_0040cc00(0x40e00000,0x41700000);
      fStack_2cc = fStack_14 * *(float *)(param_1 + 0xc310);
      iStack_29c = param_1;
      iStack_298 = param_1;
      FUN_005b5080(&DAT_02c8af28,*(int *)(param_1 + 0xc270) * 0x30 + iVar7,0x3f800000,auStack_2d0);
      pfVar9 = afStack_104 + 0xe;
      afStack_cc[0] = (float)uStack_1f8;
      afStack_104[(uint)bVar11 * -2 + 0xf] = afStack_1f4[(uint)bVar11 * -2];
      afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
           afStack_1f4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      FUN_00408b40(param_1,pfVar9);
      afStack_c0[0] = (float)uStack_1e0;
      afStack_104[(uint)bVar11 * -2 + 0x12] = afStack_1dc[(uint)bVar11 * -2];
      afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
           afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      FUN_004a0770(param_1,afStack_104 + 0x11);
      fStack_14 = (float)FUN_0040cc00(0x40e00000,0x41700000);
      fStack_2cc = fStack_14 * *(float *)(param_1 + 0xc310);
      iStack_29c = param_1;
      iStack_298 = param_1;
      FUN_005b5080(&DAT_02c8af28,*(int *)(param_1 + 0xc278) * 0x30 + iVar7,0x3f800000,auStack_2d0);
      afStack_f0[0] = (float)uStack_e4;
      afStack_104[(uint)bVar11 * -2 + 6] = afStack_104[(uint)bVar11 * -2 + 9];
      afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
           afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
      FUN_00408b40(param_1,afStack_104 + 5);
      puVar15 = &uStack_234;
      uStack_234 = uStack_1a4;
      afStack_230[(uint)bVar11 * -2] = afStack_1dc[(uint)bVar11 * -2 + 0xf];
      iVar4 = param_1;
      afStack_230[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
      FUN_004a0770(iVar4,puVar15);
      iVar4 = *(int *)(param_1 + 0xc1e8);
      if ((iVar4 != 0) &&
         (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar4 != 0)) {
        FUN_005247c0(param_1 + 0x158,10,1);
      }
    }
    FUN_0055f4a0(param_1);
    break;
  case 10:
    FUN_0055f590(param_1);
    break;
  case 0xf:
  case 0x10:
    fVar12 = (((float10)fStack_1c - (float10)fStack_28) * (float10)_DAT_005f15ed) /
             (float10)fStack_1c;
    *(uint *)(param_1 + 0xc2fc) = 0;
    uVar14 = FUN_005c03a0();
    iVar4 = (int)uVar14;
    *(int *)(iVar4 + 0xc304) = (int)ROUND(fVar12);
    fVar12 = (float10)*(float *)((int)((ulonglong)uVar14 >> 0x20) + 0x294) * (float10)_DAT_005f15f5
             + (float10)*(float *)(iVar4 + 0xc2c8);
    *(float *)(iVar4 + 0xc2c8) = (float)fVar12;
    fVar13 = (float10)fsin(fVar12);
    fVar12 = (float10)fcos(fVar12);
    fStack_2c = (float)fVar13;
    fStack_18 = (float)fVar12;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    pfVar9 = afStack_294;
    pfVar10 = &fStack_24c;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar11 * -2 + 1;
      pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
    }
    fVar2 = (fStack_238 - fStack_244) * fStack_18;
    fVar3 = (fStack_240 - fStack_24c) * fStack_2c * (float)_DAT_005f15fd;
    fStack_18c = fStack_24c + fStack_240;
    fStack_188 = fStack_248 + fStack_23c;
    fStack_184 = fStack_244 + fStack_238;
    fStack_90 = fStack_24c + fStack_240;
    afStack_104[(uint)bVar11 * -2 + 0x1e] = afStack_1dc[(uint)bVar11 * -2 + 0x15];
    afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
         afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
    fStack_114 = fVar3;
    fStack_10c = fVar2 * (float)_DAT_005f15fd;
    fStack_120 = fStack_90 * _DAT_005f1605;
    fStack_11c = fStack_8c * _DAT_005f1605;
    fStack_118 = fStack_88 * _DAT_005f1605;
    fStack_168 = fStack_90 * _DAT_005f1605;
    afStack_164[(uint)bVar11 * -2] = afStack_164[(uint)bVar11 * -2 + 0x12];
    afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
    fStack_110 = afStack_164[0];
    fStack_138 = fVar3 + *(float *)(param_1 + 0x20);
    fStack_134 = afStack_164[0] + *(float *)(param_1 + 0x24);
    fStack_130 = fStack_10c + *(float *)(param_1 + 0x28);
    fStack_d8 = fStack_138;
    afStack_104[(uint)bVar11 * -2 + 0xc] = afStack_164[(uint)bVar11 * -2 + 0xc];
    afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
         afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
    if (afStack_164 + 0x14 != afStack_104 + 0xb) {
      fStack_114 = fStack_d8;
      fStack_110 = fStack_d4;
      fStack_10c = fStack_d0;
    }
    FUN_0045e970(0x269cbb0,afStack_164 + 0x14);
    _DAT_0269cbec = 60000;
    DAT_0269cbcc = 0x3a;
    FUN_0045e9c0(0x269cbb0,0x40c00000);
    _DAT_0269cbd0 = 0;
    FUN_00551960(0x01E82168,0x269cbb0);
    iVar4 = param_1 + 0x158;
    *(uint *)(param_1 + 0xc308) = 1;
    iVar7 = FUN_00569f30(iVar4);
    fStack_14 = (float)FUN_00525020(iVar4);
    fVar12 = (float10)_DAT_005f160d;
    FUN_005c18f4();
    fVar13 = (float10)_DAT_005f1615;
    FUN_005c18f4();
    *(float *)(param_1 + 0xc300) = (float)((float10)1 + fVar12 / fVar13);
    iVar8 = 0;
    if (0 < *(int *)(iVar7 + 0x1de78)) {
      do {
        iVar8 = iVar8 + 1;
        *(uint *)(iVar4 + 0x514) = *(uint *)(param_1 + 0xc300);
        iVar4 = iVar4 + 4;
      } while (iVar8 < *(int *)(iVar7 + 0x1de78));
    }
    break;
  case 0x11:
    *(uint *)(param_1 + 0xc304) = 0;
    *(uint *)(param_1 + 0xc300) = 0x3f800000;
    *(uint *)(param_1 + 0x70) = 2;
    return;
  default:
    *(uint *)(param_1 + 0xc2fc) = 1;
    *(uint *)(param_1 + 0xc304) = 65000;
switchD_0055f381_caseD_0:
    *(uint *)(param_1 + 0xc2fc) = 1;
    *(uint *)(param_1 + 0xc304) = 65000;
    iVar4 = FUN_004a0fe0(param_1,param_2);
    if (iVar4 != 0) {
      FUN_005247c0(param_1 + 0x158,5,1);
      break;
    }
    if (*(int *)(param_1 + 0xc2e8) != 0) {
      fVar2 = *(float *)(param_1 + 0xc2f0) - param_2;
      *(float *)(param_1 + 0xc2f0) = fVar2;
      if (0.0 < fVar2) {
        FUN_00431cc0(param_1,*(uint *)(param_1 + 0xc2e8),0x3f800000,0x3f800000,
                     param_1 + 0xc2ec);
        uVar1 = *(uint *)(param_1 + 0xc2ec);
        if (uVar1 == 0) {
LAB_0055ed64:
          *(uint *)(param_1 + 0xc2e8) = 0;
        }
        else {
          if (uVar1 < 2) {
            uVar6 = 1;
            iVar4 = 5;
          }
          else {
            if (uVar1 != 2) goto LAB_0055ed64;
            uVar6 = 1;
            iVar4 = FUN_0040cc60(0,3,1);
            iVar4 = iVar4 + 0xb;
          }
          FUN_005247c0(param_1 + 0x158,iVar4,uVar6);
          if (*(int *)(param_1 + 0xc2e8) != 0) break;
        }
      }
      else {
        *(uint *)(param_1 + 0xc2e8) = 0;
        *(uint *)(param_1 + 0xc2f0) = 0;
      }
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
    iVar4 = *(int *)(param_1 + 0xc1e8);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0xc2b8) != 0) {
        fStack_108 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        afStack_104[0] = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        afStack_104[1] = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_b4 = fStack_108;
        afStack_104[(uint)bVar11 * -2 + 0x15] = afStack_104[(uint)bVar11 * -2];
        afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
             afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        fStack_24 = SQRT(fStack_ac * fStack_ac + fStack_b4 * fStack_b4 + fStack_b0 * fStack_b0);
        if ((*(float *)(param_1 + 0xc1e0) < fStack_24) || ((float)_DAT_005f1635 < fStack_24)) {
          *(uint *)(param_1 + 0xc1e8) = 0;
          break;
        }
      }
      if (*(int *)(param_1 + 0xc1e8) == 0) {
        fStack_14 = (float)FUN_00525020(param_1 + 0x158);
        if ((float)_DAT_005f1625 < fStack_14) {
          uVar6 = FUN_0040cc60(0,4,1);
          FUN_005247c0(param_1 + 0x158,uVar6);
        }
      }
      else {
        iVar4 = FUN_0040cd00(0x3ecccccd);
        if (iVar4 != 0) {
          FUN_0055f450(param_1);
        }
        FUN_005247c0(param_1 + 0x158,5,1);
      }
    }
    break;
  case 0x16:
    fVar12 = ((float10)fStack_28 * (float10)_DAT_005f15ed) / (float10)fStack_1c;
    *(uint *)(param_1 + 0xc2fc) = 0;
    iVar4 = FUN_005c03a0(param_1);
    *(int *)(iVar4 + 0xc304) = (int)ROUND(fVar12);
    FUN_0055f5e0();
  }
LAB_0055e060:
  *(uint *)(param_1 + 0x2ff0) = 0x40000000;
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  iVar4 = FUN_00524770(param_1 + 0x158);
  iVar4 = *(int *)(iVar4 + 0x24);
  if (((((iVar4 != 0x11) && (iVar4 != 0)) && (iVar4 != 1)) &&
      (((iVar4 != 2 && (iVar4 != 3)) && (iVar4 != 4)))) || (*(int *)(param_1 + 0xdc) != 0)) {
    iVar4 = *(int *)(param_1 + 0xc1e8);
    if ((iVar4 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4), iVar4 == param_1)) {
      FUN_00559250(0x01E82168,*(uint *)(param_1 + 0xc1e8));
    }
    FUN_0042d700(param_1,param_2);
    afStack_1dc[2] = *(float *)(param_1 + 0x2518) * param_2;
    afStack_1dc[3] = *(float *)(param_1 + 0x251c) * param_2;
    fStack_1cc = *(float *)(param_1 + 0x2520) * param_2;
    fStack_9c = afStack_1dc[2];
    afStack_104[(uint)bVar11 * -2 + 0x1b] = afStack_1dc[(uint)bVar11 * -2 + 3];
    afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c] =
         afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    fStack_6c = fStack_9c + *(float *)(param_1 + 0x249c);
    fStack_68 = fStack_98 + *(float *)(param_1 + 0x24a0);
    fStack_64 = fStack_94 + *(float *)(param_1 + 0x24a4);
    afStack_230[2] = fStack_6c;
    afStack_230[(uint)bVar11 * -2 + 3] = afStack_104[(uint)bVar11 * -2 + 0x27];
    afStack_230[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28];
    fStack_210 = afStack_230[2] + *(float *)(param_1 + 0x250c);
    fStack_20c = afStack_230[3] + *(float *)(param_1 + 0x2510);
    fStack_208 = fStack_220 + *(float *)(param_1 + 0x2514);
    afStack_54[0] = fStack_210;
    afStack_104[(uint)bVar11 * -2 + 0x2d] = afStack_230[(uint)bVar11 * -2 + 9];
    afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2e] =
         afStack_230[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    FUN_0042d750(param_1,afStack_104 + 0x2c);
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80(param_1,param_2);
  if ((0.0 <= *(float *)(param_1 + 0xc2f4)) &&
     (param_2 = *(float *)(param_1 + 0xc2f4) - param_2, *(float *)(param_1 + 0xc2f4) = param_2,
     param_2 <= 0.0)) {
    fStack_14 = (float)FUN_0040cc00(0x3f800000,0x40000000);
    *(float *)(param_1 + 0xc2f4) = fStack_14;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    pfVar9 = afStack_27c;
    pfVar10 = &fStack_264;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar11 * -2 + 1;
      pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
    }
    fStack_1c8 = fStack_264 + fStack_258;
    fStack_1c4 = fStack_260 + fStack_254;
    fStack_1c0 = fStack_25c + fStack_250;
    fStack_78 = fStack_264 + fStack_258;
    afStack_104[(uint)bVar11 * -2 + 0x24] = afStack_1dc[(uint)bVar11 * -2 + 6];
    afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25] =
         afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    pfVar9 = afStack_1dc + 0x11;
    fStack_a8 = fStack_78 * _DAT_005f1605;
    fStack_a4 = fStack_74 * _DAT_005f1605;
    fStack_a0 = fStack_70 * _DAT_005f1605;
    afStack_198[0] = fStack_78 * _DAT_005f1605;
    afStack_1dc[(uint)bVar11 * -2 + 0x12] = afStack_104[(uint)bVar11 * -2 + 0x18];
    afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
         afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
    FUN_00408b40(param_1,pfVar9);
    fStack_180 = fStack_12c;
    afStack_1dc[(uint)bVar11 * -2 + 0x18] = afStack_164[(uint)bVar11 * -2 + 0xf];
    afStack_1dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
         afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    if (afStack_1f4 + 2 != afStack_1dc + 0x17) {
      afStack_1f4[2] = fStack_180;
      afStack_1f4[3] = fStack_17c;
      fStack_1e4 = fStack_178;
    }
    iStack_204 = (int)ROUND(afStack_1f4[2] * _DAT_00605170);
    iStack_200 = (int)ROUND(afStack_1f4[3] * _DAT_00605170);
    iStack_1fc = (int)ROUND(fStack_1e4 * _DAT_00605170);
    fStack_14 = (float)FUN_00552490(0x01E82168,&iStack_204,0);
    if ((*(int *)(param_1 + 0xc30c) != 0) &&
       (_DAT_006051a0 * (float)_DAT_005f163d <= (float)(int)fStack_14)) {
      uVar6 = FUN_0040cc60(0,4,1);
      FUN_005247c0(param_1 + 0x158,uVar6);
      iVar4 = FUN_00435380(param_1,&DAT_005f15dc);
      *(int *)(param_1 + 0xc2e8) = iVar4;
      if (iVar4 != 0) {
        uVar6 = FUN_0040cc00(0x40400000,0x40c00000);
        *(uint *)(param_1 + 0xc2f0) = uVar6;
      }
      *(float *)(param_1 + 0xc2f4) = *(float *)(param_1 + 0xc2f4) + _DAT_005f1645;
      return;
    }
  }
  return;
}
