// Name: FUN_005af4a0
// Address: 005af4a0
// Address Range: [[005af4a0, 005b0b6b]]
// Convention: unknown
// Signature: void FUN_005af4a0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005af4a0(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_1390 [937];
  uint *puVar11;
  float *pfVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte auStack_4d4 [4];
  float fStack_4d0;
  int iStack_4a0;
  int iStack_49c;
  byte auStack_498 [4];
  float fStack_494;
  int iStack_464;
  int iStack_460;
  byte auStack_45c [4];
  float fStack_458;
  int iStack_428;
  int iStack_424;
  byte auStack_420 [4];
  float fStack_41c;
  int iStack_3ec;
  int iStack_3e8;
  byte auStack_3e4 [4];
  float fStack_3e0;
  int iStack_3b0;
  int iStack_3ac;
  uint uStack_3a8;
  float afStack_3a4 [5];
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  uint uStack_384;
  uint auStack_378 [3];
  uint uStack_36c;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  uint uStack_354;
  float afStack_350 [5];
  uint uStack_33c;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  uint auStack_318 [3];
  uint uStack_30c;
  uint uStack_300;
  uint uStack_2f4;
  uint uStack_2e8;
  uint auStack_2dc [3];
  uint uStack_2d0;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  uint uStack_2b8;
  uint auStack_2ac [3];
  uint auStack_2a0 [3];
  uint uStack_294;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  uint uStack_270;
  uint uStack_26c;
  float fStack_268;
  float fStack_264;
  float afStack_260 [4];
  float fStack_250;
  float afStack_24c [3];
  float afStack_240 [3];
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  uint uStack_228;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float afStack_210 [3];
  uint uStack_204;
  float afStack_1f8 [3];
  float afStack_1ec [3];
  uint uStack_1e0;
  float afStack_1d4 [3];
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float afStack_1bc [3];
  uint uStack_1b0;
  float afStack_1a4 [3];
  float afStack_198 [3];
  uint uStack_18c;
  uint uStack_180;
  float afStack_174 [3];
  uint uStack_168;
  uint uStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float afStack_144 [3];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  uint uStack_120;
  float afStack_114 [3];
  uint uStack_108;
  float afStack_fc [3];
  uint uStack_f0;
  float afStack_e4 [3];
  uint uStack_d8;
  uint uStack_cc;
  uint uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_6c;
  int iStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_48;
  int iStack_44;
  float fStack_40;
  int iStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar4 = FUN_0042e1a0(param_1,param_2);
  if (iVar4 == 0) {
    FUN_00573a80();
    return;
  }
  if ((*(int *)(param_1 + 0xc268) == 2) && (0.0 <= *(float *)(param_1 + 0xc2a8))) {
    *(float *)(param_1 + 0xc2a8) = *(float *)(param_1 + 0xc2a8) - param_2;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_50 = param_2 * *(float *)(param_1 + 0xc1d0);
  iStack_18 = param_1 + 0x158;
  while (iVar4 = iStack_18, 0.0 < fStack_50) {
    uVar5 = FUN_00524270(iStack_18);
    if (uVar5 < 10) {
      FUN_00434a80();
    }
    else if (uVar5 < 0xb) {
      FUN_00569040(iVar4);
      uStack_30c = uStack_2f4;
      afStack_350[(uint)bVar9 * -2 + 0x12] = afStack_350[(uint)bVar9 * -2 + 0x18];
      afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
           afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
      FUN_00408b40(param_1);
      uVar13 = 0x4140000041000000;
      auStack_318[0] = uStack_2e8;
      afStack_350[(uint)bVar9 * -2 + 0xf] = afStack_350[(uint)bVar9 * -2 + 0x1b];
      afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
           afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
      fStack_14 = (float)FUN_0040cc00(uVar13);
      fVar10 = (float10)fStack_14 * (float10)_DAT_005f9afa;
      FUN_005c03a0();
      iStack_58 = (int)ROUND(fVar10);
      FUN_004e6060(0x01CD0E3C,afStack_350 + 0xe,0);
    }
    else if (uVar5 == 0x29a) {
      FUN_0051b740(0x01D2C900);
    }
    else {
      FUN_00434a80();
    }
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
  if (*(int *)(param_1 + 0xc268) == 2) {
    *(float *)(param_1 + 0x2528) = *(float *)(param_1 + 0x2528) * (float)_DAT_005f9ad2;
  }
  iVar4 = FUN_00524770();
  uVar5 = *(uint *)(iVar4 + 0x24);
  uStack_1c = uVar5;
  iVar4 = FUN_00432240(param_1,param_2);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))();
    if ((iVar4 == 0) && (*(int *)(param_1 + 0xc1e8) == *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4))) {
      FUN_0042c010();
      fStack_4d0 = (float)FUN_0040cc00(0x40e00000,0x41700000);
      iStack_4a0 = param_1;
      iStack_49c = param_1;
      iStack_30 = param_1 + 0xfd8;
      fStack_14 = fStack_4d0;
      FUN_005b5080(&DAT_02c8af28,*(int *)(param_1 + 0xc278) * 0x30 + iStack_30,
                   *(uint *)(param_1 + 0x27b8),auStack_4d4);
      puVar11 = &uStack_3a8;
      uStack_3a8 = afStack_350[2];
      afStack_3a4[(uint)bVar9 * -2] = afStack_350[(uint)bVar9 * -2 + 3];
      afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      FUN_00408b40(param_1,puVar11);
      pfVar12 = afStack_260 + 0x23;
      afStack_1d4[0] = (float)uStack_1e0;
      afStack_260[(uint)bVar9 * -2 + 0x24] = afStack_260[(uint)bVar9 * -2 + 0x21];
      iVar4 = param_1;
      afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25] =
           afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22];
      FUN_004a0770(iVar4,pfVar12);
      fStack_4d0 = (float)FUN_0040cc00(0x40e00000,0x41700000);
      iStack_4a0 = param_1;
      iStack_49c = param_1;
      fStack_14 = fStack_4d0;
      FUN_005b5080(&DAT_02c8af28,*(int *)(param_1 + 0xc274) * 0x30 + iStack_30,
                   *(uint *)(param_1 + 0x27b8),auStack_4d4);
      puVar11 = &uStack_354;
      uStack_354 = uStack_300;
      afStack_350[(uint)bVar9 * -2] = afStack_350[(uint)bVar9 * -2 + 0x15];
      afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
      FUN_00408b40(param_1,puVar11);
      pfVar12 = afStack_260 + 0x29;
      afStack_1bc[0] = (float)uStack_204;
      afStack_260[(uint)bVar9 * -2 + 0x2a] = afStack_260[(uint)bVar9 * -2 + 0x18];
      iVar4 = param_1;
      afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b] =
           afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
      FUN_004a0770(iVar4,pfVar12);
      fStack_4d0 = (float)FUN_0040cc00(0x40e00000,0x41700000);
      iStack_4a0 = param_1;
      iStack_49c = param_1;
      fStack_14 = fStack_4d0;
      FUN_005b5080(&DAT_02c8af28,*(int *)(param_1 + 0xc270) * 0x30 + iStack_30,
                   *(uint *)(param_1 + 0x27b8),auStack_4d4);
      pfVar12 = afStack_3a4 + 0xb;
      auStack_378[0] = uStack_2b8;
      afStack_3a4[(uint)bVar9 * -2 + 0xc] = afStack_350[(uint)bVar9 * -2 + 0x27];
      afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28];
      FUN_00408b40(param_1,pfVar12);
      pfVar12 = afStack_260 + 0x2f;
      afStack_1a4[0] = (float)uStack_d8;
      afStack_260[(uint)bVar9 * -2 + 0x30] = afStack_260[(uint)bVar9 * -2 + 99];
      iVar4 = param_1;
      afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31] =
           afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 100];
      FUN_004a0770(iVar4,pfVar12);
    }
    iStack_24 = param_1 + 0xfd8;
    if (uStack_1c < 4) {
      if (uStack_1c == 0) goto LAB_005afc45;
      if (1 < uStack_1c) {
        if (2 < uStack_1c) {
          if (*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) != *(int *)(param_1 + 0xc1e8)) {
            FUN_0042c010();
            fStack_494 = (float)FUN_0040cc00(0x40e00000,0x41700000);
            iStack_464 = param_1;
            iStack_460 = param_1;
            fStack_14 = fStack_494;
            FUN_005b5080(&DAT_02c8af28,*(int *)(param_1 + 0xc270) * 0x30 + iStack_24,0x3ecccccd,
                         auStack_498);
            pfVar12 = afStack_260 + 0x1d;
            afStack_1ec[0] = (float)uStack_168;
            afStack_260[(uint)bVar9 * -2 + 0x1e] = afStack_260[(uint)bVar9 * -2 + 0x3f];
            afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f] =
                 afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x40];
            FUN_00408b40(param_1,pfVar12);
            pfVar12 = afStack_260 + 0x53;
            afStack_114[0] = (float)uStack_90;
            afStack_260[(uint)bVar9 * -2 + 0x54] = afStack_260[(uint)bVar9 * -2 + 0x75];
            iVar4 = param_1;
            afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x55] =
                 afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x76];
            FUN_004a0770(iVar4,pfVar12);
          }
          if ((*(int *)(param_1 + 0xc1e8) != 0) &&
             (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x10c))(),
             iVar4 != 0)) {
            FUN_005247c0(param_1 + 0x158,7,1);
          }
          goto LAB_005af702;
        }
        goto LAB_005afcc3;
      }
LAB_005b0229:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar4 = *(int *)(param_1 + 0xc1e8);
      if (iVar4 == 0) {
        iVar4 = FUN_004a0fe0(param_1,param_2);
        if (iVar4 == 0) {
          FUN_005247c0(param_1 + 0x158,0,1);
        }
        goto LAB_005af702;
      }
      if (*(int *)(param_1 + 0xc294) != 0) {
        fStack_21c = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_218 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_214 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_b4 = fStack_21c;
        afStack_260[(uint)bVar9 * -2 + 0x6c] = afStack_260[(uint)bVar9 * -2 + 0x12];
        afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x6d] =
             afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
        fStack_40 = SQRT(fStack_ac * fStack_ac + fStack_b4 * fStack_b4 + fStack_b0 * fStack_b0);
        if ((*(float *)(param_1 + 0xc1e0) < fStack_40) || ((float)_DAT_005f9ada < fStack_40)) {
          *(uint *)(param_1 + 0xc1e8) = 0;
          FUN_005247c0(param_1 + 0x158,0,1);
          goto LAB_005af702;
        }
      }
      iVar4 = FUN_0040c600(*(uint *)(param_1 + 0xc294),_DAT_02c8adcc);
      if ((iVar4 == 0) || (uStack_1c != 0xf)) {
        iStack_20 = *(int *)(param_1 + 0xc1e8);
        if (*(int *)(param_1 + 0xc268) == 2) {
          if ((*(int *)(param_1 + 0xc29c) == 0) || (*(int *)(param_1 + 0xc2a0) == 0)) {
            _DAT_01d1d400 = "..\\core\\werewolf.cpp";
            _DAT_01d1d404 = 0x1ad;
            FUN_005030e0();
          }
          FUN_00445430(PTR_DAT_00611100,"Phase: %d, Timer: %f\n",*(uint *)(param_1 + 0xc2a4)
                       ,(double)*(float *)(param_1 + 0xc2a8));
          if ((*(int *)(param_1 + 0xc2a4) == 1) || (*(int *)(param_1 + 0xc2a4) == 3)) {
            FUN_00408bb0(*(uint *)(param_1 + 0xc1e8),*(int *)(param_1 + 0xc29c) + 0x20);
            afStack_260[2] = (float)uStack_228;
            afStack_260[(uint)bVar9 * -2 + 3] = afStack_260[(uint)bVar9 * -2 + 0xf];
            afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                 afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
            if (0.0 <= fStack_250) {
              FUN_00408bb0(*(uint *)(param_1 + 0xc1e8),*(int *)(param_1 + 0xc2a0) + 0x20);
              uStack_c0 = uStack_cc;
              afStack_260[(uint)bVar9 * -2 + 0x69] = afStack_260[(uint)bVar9 * -2 + 0x66];
              afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x6a] =
                   afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x67];
              if (0.0 <= fStack_b8) {
                iVar4 = *(int *)(param_1 + 0xc1e8);
                iVar6 = *(int *)(param_1 + 0xc29c);
                fStack_1c8 = *(float *)(iVar4 + 0x20) - *(float *)(iVar6 + 0x20);
                fStack_1c4 = *(float *)(iVar4 + 0x24) - *(float *)(iVar6 + 0x24);
                fStack_1c0 = *(float *)(iVar4 + 0x28) - *(float *)(iVar6 + 0x28);
                fStack_9c = fStack_1c8;
                afStack_260[(uint)bVar9 * -2 + 0x72] = afStack_260[(uint)bVar9 * -2 + 0x27];
                afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x73] =
                     afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28];
                fVar2 = fStack_9c * fStack_9c;
                iStack_44 = iVar6;
                iVar6 = *(int *)(param_1 + 0xc2a0);
                fStack_2c4 = *(float *)(iVar4 + 0x20) - *(float *)(iVar6 + 0x20);
                fStack_2c0 = *(float *)(iVar4 + 0x24) - *(float *)(iVar6 + 0x24);
                fStack_2bc = *(float *)(iVar4 + 0x28) - *(float *)(iVar6 + 0x28);
                fStack_390 = fStack_2c4;
                afStack_3a4[(uint)bVar9 * -2 + 6] = afStack_350[(uint)bVar9 * -2 + 0x24];
                afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
                     afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25];
                iStack_20 = iStack_44;
                if (SQRT(fStack_94 * fStack_94 + fVar2 + fStack_98 * fStack_98) <=
                    SQRT(fStack_388 * fStack_388 + fStack_390 * fStack_390 + fStack_38c * fStack_38c
                        )) {
                  iStack_20 = iVar6;
                  goto LAB_005b0404;
                }
              }
              else {
                iStack_20 = *(int *)(param_1 + 0xc2a0);
              }
            }
            else {
              iStack_20 = *(int *)(param_1 + 0xc29c);
            }
          }
LAB_005b0404:
          if ((*(int *)(param_1 + 0xc2a4) == 1) || (*(int *)(param_1 + 0xc2a4) == 3)) {
            fStack_264 = *(float *)(iStack_20 + 0x20) - *(float *)(param_1 + 0x20);
            afStack_260[0] = *(float *)(iStack_20 + 0x24) - *(float *)(param_1 + 0x24);
            afStack_260[1] = *(float *)(iStack_20 + 0x28) - *(float *)(param_1 + 0x28);
            fStack_234 = fStack_264;
            afStack_260[(uint)bVar9 * -2 + 0xc] = afStack_260[(uint)bVar9 * -2];
            afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
                 afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            if (SQRT(fStack_22c * fStack_22c + fStack_234 * fStack_234 + fStack_230 * fStack_230) <
                (float)_DAT_005f9ae2) {
              iVar4 = *(int *)(param_1 + 0xc2a4) + 1;
              *(int *)(param_1 + 0xc2a4) = iVar4;
              if (3 < iVar4) {
                *(uint *)(param_1 + 0xc2a4) = 0;
              }
              *(uint *)(param_1 + 0xc2a8) = 0x41200000;
            }
          }
          else if ((*(float *)(param_1 + 0xc2a8) <= 0.0) &&
                  (iVar4 = *(int *)(param_1 + 0xc2a4) + 1, *(int *)(param_1 + 0xc2a4) = iVar4,
                  3 < iVar4)) {
            *(uint *)(param_1 + 0xc2a4) = 0;
          }
        }
        iVar4 = iStack_20;
        fStack_268 = 0x40400000;
        fStack_54 = 0x40400000;
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        uStack_270 = 0;
        uStack_26c = 0;
        uVar8 = (**(code **)(*(int *)(iStack_20 + 0x154) + 0xc4))
                          (iStack_20,afStack_350 + 0x38,0x3f000000,0x3e32b8c2);
        iVar6 = FUN_0042ccf0(param_1,(float *)(iVar4 + 0x20),uVar8);
        if (iVar6 < 0) {
          FUN_00445430(PTR_DAT_00611100,"%s gave up chase - I'm confused\n",param_1);
          FUN_005247c0(param_1 + 0x158,0,1);
        }
        else if (iVar6 < 1) {
          iVar6 = FUN_0040c600(*(uint *)(param_1 + 0xc294),_DAT_02c8adcc);
          if (iVar6 == 0) {
            fStack_a8 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_a4 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_a0 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            fStack_330 = fStack_a8;
            afStack_350[(uint)bVar9 * -2 + 9] = afStack_260[(uint)bVar9 * -2 + 0x6f];
            afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
                 afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x70];
            if (afStack_3a4 + 0x11 != afStack_350 + 8) {
              fStack_360 = fStack_330;
              fStack_35c = fStack_32c;
              fStack_358 = fStack_328;
            }
            fStack_38 = SQRT(fStack_358 * fStack_358 +
                             fStack_360 * fStack_360 + fStack_35c * fStack_35c);
            fStack_2c = 20.0;
            if (*(int *)(param_1 + 0xc268) == 1) {
              fStack_2c = 10.0;
            }
            if (*(int *)(param_1 + 0xc268) == 2) {
              fStack_2c = 10.0;
            }
            iStack_48 = param_1 + 0x158;
            if (fStack_2c < fStack_38) {
              FUN_005a7520();
              uStack_294 = uStack_1b0;
              afStack_350[(uint)bVar9 * -2 + 0x30] = afStack_260[(uint)bVar9 * -2 + 0x2d];
              afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31] =
                   afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e];
              fStack_14 = (float)FUN_0040cd60();
              if (ABS(fStack_14) < (float)_DAT_005f9af2) {
                FUN_005247c0(iStack_48,8,1);
                iVar4 = FUN_0040cd00();
                if (iVar4 != 0) {
                  FUN_005b0bb0();
                }
                iVar6 = 0;
                for (iVar4 = 0; iVar4 < *(int *)(0x01E82168 + 0x150fec); iVar4 = iVar4 + 1) {
                  iVar7 = FUN_0040c600(*(uint *)(iVar6 + 0x150ff0 + 0x01E82168),
                                       _DAT_02c9a594);
                  if (((iVar7 != 0) && (iVar7 != param_1)) &&
                     (iVar7 = FUN_00524770(), *(int *)(iVar7 + 0x24) == 8)) {
                    iVar4 = FUN_0040cc60(0,2);
                    if (iVar4 == 1) {
                      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + _DAT_005f9b02;
                    }
                    if (iVar4 == 2) {
                      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + _DAT_005f9b06;
                    }
                    break;
                  }
                  iVar6 = iVar6 + 4;
                }
              }
            }
            else if ((fStack_38 < 0x40400000 * _DAT_005f9aea) && (uStack_1c == 0xf)) {
              FUN_005247c0(iStack_48,0,1);
            }
          }
        }
        else {
          if ((*(int *)(param_1 + 0xc268) == 2) &&
             ((*(int *)(param_1 + 0xc2a4) == 1 || (*(int *)(param_1 + 0xc2a4) == 3))))
          goto LAB_005af702;
          if (*(float *)(param_1 + 0xc1e4) <= 0.0) {
            iVar4 = FUN_0040cc60(0,2);
            if (iVar4 == 0) {
              FUN_005247c0(param_1 + 0x158,2,1);
            }
            if (iVar4 == 1) {
              FUN_005247c0(param_1 + 0x158,3,1);
            }
            if (iVar4 == 2) {
              FUN_005247c0(param_1 + 0x158,4,1);
            }
            *(uint *)(param_1 + 0xc1e4) = 0x3f800000;
            iVar4 = FUN_0040cd00();
            if (iVar4 != 0) {
              FUN_005b0bb0();
            }
          }
        }
        fVar2 = *(float *)(param_1 + 0xc288) - param_2;
        *(float *)(param_1 + 0xc288) = fVar2;
        if (fVar2 < 0.0) {
          FUN_005b0bb0();
        }
        goto LAB_005af702;
      }
LAB_005b0206:
      FUN_005247c0(param_1 + 0x158,0,1);
    }
    else {
      iStack_3c = param_1 + 0x158;
      if (uStack_1c < 5) {
        FUN_0042c010();
        fStack_41c = (float)FUN_0040cc00(0x40e00000,0x41700000);
        iStack_3ec = param_1;
        iStack_3e8 = param_1;
        fStack_14 = fStack_41c;
        FUN_005b5080(&DAT_02c8af28,*(int *)(param_1 + 0xc274) * 0x30 + iStack_24,0x3ecccccd,
                     auStack_420);
        pfVar12 = afStack_260 + 0x47;
        afStack_144[0] = (float)uStack_2d0;
        afStack_260[(uint)bVar9 * -2 + 0x48] = afStack_350[(uint)bVar9 * -2 + 0x21];
        afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x49] =
             afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22];
        FUN_00408b40(param_1,pfVar12);
        pfVar12 = afStack_260 + 0x5f;
        afStack_e4[0] = (float)uStack_108;
        afStack_260[(uint)bVar9 * -2 + 0x60] = afStack_260[(uint)bVar9 * -2 + 0x57];
        iVar4 = param_1;
        afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x61] =
             afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x58];
        FUN_004a0770(iVar4,pfVar12);
        if ((*(int *)(param_1 + 0xc1e8) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x10c))(),
           iVar4 != 0)) {
          FUN_005247c0(iStack_3c,7,1);
        }
        goto LAB_005af702;
      }
      if (uStack_1c < 0xe) {
        if (uStack_1c < 8) goto LAB_005af702;
        if (8 < uStack_1c) {
          if (((uStack_1c == 0xd) && (*(int *)(param_1 + 0xc1d4) == 0)) &&
             (*(int *)(param_1 + 0xdc) == 0)) {
            FUN_00569040(iStack_3c,0);
            pfVar12 = afStack_260 + 0x32;
            afStack_198[0] = (float)uStack_6c;
            afStack_260[(uint)bVar9 * -2 + 0x33] = afStack_260[(uint)bVar9 * -2 + 0x7e];
            afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34] =
                 afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x7f];
            FUN_00408b40(param_1,pfVar12);
            uVar14 = ZEXT48(afStack_260 + 0x59);
            afStack_fc[0] = (float)uStack_180;
            afStack_260[(uint)bVar9 * -2 + 0x5a] = afStack_260[(uint)bVar9 * -2 + 0x39];
            uVar8 = 0x01CD0E3C;
            afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x5b] =
                 afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3a];
            FUN_004e62e0(uVar8,uVar14);
            *(uint *)(param_1 + 0xc1d4) = 1;
          }
          goto LAB_005af702;
        }
        if (*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) != *(int *)(param_1 + 0xc1e8)) {
          FUN_0042c010();
          fStack_458 = (float)FUN_0040cc00(0x40e00000,0x41700000);
          iStack_428 = param_1;
          iStack_424 = param_1;
          fStack_14 = fStack_458;
          FUN_005b5080(&DAT_02c8af28,*(int *)(param_1 + 0xc278) * 0x30 + iStack_24,0x3f800000,
                       auStack_45c);
          pfVar12 = afStack_260 + 5;
          afStack_24c[0] = (float)uStack_78;
          afStack_260[(uint)bVar9 * -2 + 6] = afStack_260[(uint)bVar9 * -2 + 0x7b];
          afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
               afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x7c];
          FUN_00408b40(param_1,pfVar12);
          pfVar12 = afStack_260 + 8;
          afStack_240[0] = (float)uStack_384;
          afStack_260[(uint)bVar9 * -2 + 9] = afStack_3a4[(uint)bVar9 * -2 + 9];
          iVar4 = param_1;
          afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
               afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
          FUN_004a0770(iVar4,pfVar12);
          FUN_005b5080(&DAT_02c8af28,*(int *)(param_1 + 0xc274) * 0x30 + iStack_24,0x3f800000,
                       auStack_45c);
          pfVar12 = afStack_3a4 + 2;
          afStack_3a4[2] = (float)uStack_36c;
          afStack_3a4[(uint)bVar9 * -2 + 3] = afStack_3a4[(uint)bVar9 * -2 + 0xf];
          afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
               afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
          FUN_00408b40(param_1,pfVar12);
          pfVar12 = afStack_260 + 0x14;
          afStack_210[0] = (float)uStack_f0;
          afStack_260[(uint)bVar9 * -2 + 0x15] = afStack_260[(uint)bVar9 * -2 + 0x5d];
          iVar4 = param_1;
          afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
               afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x5e];
          FUN_004a0770(iVar4,pfVar12);
          FUN_005b5080(&DAT_02c8af28,*(int *)(param_1 + 0xc270) * 0x30 + iStack_24,0x3f800000,
                       auStack_45c);
          pfVar12 = afStack_350 + 0x1d;
          auStack_2dc[0] = uStack_33c;
          afStack_350[(uint)bVar9 * -2 + 0x1e] = afStack_350[(uint)bVar9 * -2 + 6];
          afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f] =
               afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
          FUN_00408b40(param_1,pfVar12);
          pfVar12 = afStack_260 + 0x1a;
          afStack_1f8[0] = (float)uStack_15c;
          afStack_260[(uint)bVar9 * -2 + 0x1b] = afStack_260[(uint)bVar9 * -2 + 0x42];
          iVar4 = param_1;
          afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c] =
               afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x43];
          FUN_004a0770(iVar4,pfVar12);
        }
        if ((*(int *)(param_1 + 0xc1e8) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x10c))(),
           iVar4 != 0)) {
          FUN_005247c0(param_1 + 0x158,7,1);
        }
LAB_005afcc3:
        if (*(int *)(param_1 + 0xc1e8) != *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
          FUN_0042c010();
          fStack_3e0 = (float)FUN_0040cc00(0x40e00000,0x41700000);
          iStack_3b0 = param_1;
          iStack_3ac = param_1;
          fStack_14 = fStack_3e0;
          FUN_005b5080(&DAT_02c8af28,*(int *)(param_1 + 0xc278) * 0x30 + param_1 + 0xfd8,0x3ecccccd,
                       auStack_3e4);
          pfVar12 = afStack_350 + 0x29;
          auStack_2ac[0] = uStack_18c;
          afStack_350[(uint)bVar9 * -2 + 0x2a] = afStack_260[(uint)bVar9 * -2 + 0x36];
          afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b] =
               afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x37];
          FUN_00408b40(param_1,pfVar12);
          pfVar12 = afStack_350 + 0x2c;
          auStack_2a0[0] = uStack_120;
          afStack_350[(uint)bVar9 * -2 + 0x2d] = afStack_260[(uint)bVar9 * -2 + 0x51];
          iVar4 = param_1;
          afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e] =
               afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x52];
          FUN_004a0770(iVar4,pfVar12);
        }
        if ((*(int *)(param_1 + 0xc1e8) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x10c))(),
           iVar4 != 0)) {
          FUN_005247c0(param_1 + 0x158,7,1);
        }
        goto LAB_005af702;
      }
      if (0xe < uStack_1c) {
        if (0xf < uStack_1c) {
          if (uStack_1c != 0x13) goto LAB_005af702;
          goto LAB_005af6ea;
        }
        goto LAB_005b0229;
      }
LAB_005afc45:
      iVar4 = FUN_004a0fe0(param_1,param_2);
      if (iVar4 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        iVar4 = *(int *)(param_1 + 0xc1e8);
        if (iVar4 == 0) goto LAB_005af702;
        if (*(int *)(param_1 + 0xc294) != 0) {
          fStack_27c = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_278 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_274 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_324 = fStack_27c;
          afStack_350[(uint)bVar9 * -2 + 0xc] = afStack_350[(uint)bVar9 * -2 + 0x36];
          afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
               afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x37];
          fStack_34 = SQRT(fStack_31c * fStack_31c +
                           fStack_324 * fStack_324 + fStack_320 * fStack_320);
          if ((*(float *)(param_1 + 0xc1e0) < fStack_34) || ((float)_DAT_005f9ada < fStack_34)) {
            *(uint *)(param_1 + 0xc1e8) = 0;
            goto LAB_005af702;
          }
        }
        iVar4 = FUN_0040c600(*(uint *)(param_1 + 0xc294),_DAT_02c8adcc);
        if ((iVar4 != 0) && (uStack_1c == 0xe)) goto LAB_005b0206;
        if (*(int *)(param_1 + 0xc1e8) == 0) goto LAB_005af702;
        iVar4 = FUN_0040cd00();
        if (iVar4 != 0) {
          FUN_005b0bb0();
        }
        if (uStack_1c == 0xe) {
          FUN_005247c0(param_1 + 0x158,0xf,1);
          goto LAB_005af702;
        }
      }
      else if (uStack_1c == 0xe) {
        FUN_005247c0(param_1 + 0x158,0xf,1);
        goto LAB_005af702;
      }
      FUN_005247c0(param_1 + 0x158,1,1);
    }
    goto LAB_005af702;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) {
LAB_005af6d7:
        uVar13 = 0x10000000f;
      }
      else {
        uVar13 = 0x100000001;
      }
    }
    else {
LAB_005af9cb:
      uVar13 = 0x100000000;
    }
LAB_005af6e2:
    FUN_005247c0(param_1 + 0x158,uVar13);
  }
  else {
    if (uVar1 < 3) {
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) goto LAB_005af6d7;
      if (*(float *)(param_1 + 0x2528) <= ABS(*(float *)(param_1 + 0x2508))) {
        uVar13 = 0x100000001;
      }
      else {
        uVar13 = 0x100000008;
      }
      goto LAB_005af6e2;
    }
    if (uVar1 != 3) goto LAB_005af9cb;
    FUN_005247c0(param_1 + 0x158,0,1);
    FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
  }
LAB_005af6ea:
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
LAB_005af702:
  if ((uStack_1c == 0x13) && (*(int *)(param_1 + 0x27bc) != 0)) {
    iVar4 = FUN_005735a0();
    if (iVar4 == 0) {
      uVar8 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"werewolf-eat.wav");
      *(uint *)(param_1 + 0xc290) = uVar8;
    }
  }
  else {
    FUN_00573a80();
  }
  fStack_28 = 1.0;
  if (*(int *)(param_1 + 0xc268) == 0) {
    fStack_28 = 0.75;
  }
  dVar3 = _DAT_005f9b12;
  if ((uStack_1c != 0xe) && (uStack_1c != 0xf)) {
    dVar3 = _DAT_005f9b0a;
  }
  *(float *)(param_1 + 0x2ff0) = fStack_28 * (float)dVar3;
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  iVar4 = FUN_00524770();
  iVar4 = *(int *)(iVar4 + 0x24);
  if (((((iVar4 != 0xd) && (iVar4 != 0)) && (iVar4 != 0xe)) && (iVar4 != 0x14)) ||
     (*(int *)(param_1 + 0xdc) != 0)) {
    if ((*(int *)(param_1 + 0xc1e8) != 0) &&
       (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))(),
       iVar4 == param_1)) {
      FUN_00559250(0x01E82168,*(uint *)(param_1 + 0xc1e8));
    }
    FUN_0042d700(param_1,param_2);
    fStack_12c = *(float *)(param_1 + 0x2518) * param_2;
    fStack_128 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_124 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_84 = fStack_12c;
    afStack_260[(uint)bVar9 * -2 + 0x78] = afStack_260[(uint)bVar9 * -2 + 0x4e];
    afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x79] =
         afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x4f];
    fStack_150 = fStack_84 + *(float *)(param_1 + 0x249c);
    fStack_14c = fStack_80 + *(float *)(param_1 + 0x24a0);
    fStack_148 = fStack_7c + *(float *)(param_1 + 0x24a4);
    fStack_288 = fStack_150;
    afStack_350[(uint)bVar9 * -2 + 0x33] = afStack_260[(uint)bVar9 * -2 + 0x45];
    afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34] =
         afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x46];
    fStack_138 = fStack_288 + *(float *)(param_1 + 0x250c);
    fStack_134 = fStack_284 + *(float *)(param_1 + 0x2510);
    fStack_130 = fStack_280 + *(float *)(param_1 + 0x2514);
    afStack_174[0] = fStack_138;
    afStack_260[(uint)bVar9 * -2 + 0x3c] = afStack_260[(uint)bVar9 * -2 + 0x4b];
    afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3d] =
         afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x4c];
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    FUN_0042d750(param_1,afStack_260 + 0x3b);
  }
  FUN_0042e160();
  FUN_005675a0();
  FUN_00433e80(param_1,param_2);
  FUN_005b1850();
  *(float *)(param_1 + 0xc2ac) = param_2 * (float)_DAT_005f9b1a + *(float *)(param_1 + 0xc2ac);
  return;
}
