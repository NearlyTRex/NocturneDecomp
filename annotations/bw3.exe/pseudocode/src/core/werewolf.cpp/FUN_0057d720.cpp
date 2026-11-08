// Name: FUN_0057d720
// Address: 0057d720
// Address Range: [[0057d720, 0057edee]]
// Convention: unknown
// Signature: void FUN_0057d720(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057d720(int param_1,float param_2)

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
  float *pfVar11;
  ulonglong uVar12;
  ulonglong uVar13;
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
  float fStack_3a8;
  float afStack_3a4 [4];
  float fStack_394;
  float afStack_390 [3];
  float afStack_384 [3];
  uint uStack_378;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  uint uStack_360;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float afStack_348 [3];
  uint uStack_33c;
  uint uStack_330;
  float afStack_324 [3];
  uint uStack_318;
  float afStack_314 [5];
  uint uStack_300;
  uint uStack_2f4;
  uint uStack_2e8;
  uint uStack_2dc;
  float afStack_2d0 [3];
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  uint uStack_2ac;
  float afStack_2a0 [3];
  float afStack_294 [3];
  uint uStack_288;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float afStack_270 [3];
  uint uStack_264;
  uint uStack_258;
  uint uStack_24c;
  float fStack_244;
  float afStack_240 [3];
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  uint uStack_21c;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  uint uStack_204;
  float fStack_1fc;
  float afStack_1f8 [3];
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  uint uStack_1e0;
  float afStack_1dc [5];
  uint auStack_1c8 [3];
  uint auStack_1bc [3];
  uint auStack_1b0 [3];
  uint uStack_1a4;
  uint auStack_198 [3];
  uint uStack_18c;
  uint uStack_180;
  uint uStack_174;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  uint uStack_144;
  uint auStack_138 [3];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  uint auStack_120 [3];
  uint uStack_114;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  uint uStack_e4;
  uint auStack_d8 [3];
  uint auStack_cc [3];
  uint uStack_c0;
  uint auStack_b4 [3];
  uint auStack_a8 [3];
  float afStack_9c [3];
  uint uStack_90;
  uint uStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  int iStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_48;
  float fStack_44;
  int iStack_40;
  float fStack_3c;
  int iStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar4 == 0) {
    FUN_00556be0();
    return;
  }
  if ((*(int *)(param_1 + 0xd054) == 2) && (0.0 <= *(float *)(param_1 + 0xd094))) {
    *(float *)(param_1 + 0xd094) = *(float *)(param_1 + 0xd094) - param_2;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_50 = param_2 * *(float *)(param_1 + 0xcdcc);
  iStack_18 = param_1 + 0x158;
  while (iVar4 = iStack_18, 0.0 < fStack_50) {
    uVar5 = FUN_004fbb70(iStack_18);
    if (uVar5 < 10) {
      FUN_00433fb0();
    }
    else if (uVar5 < 0xb) {
      FUN_0054dbd0(iVar4);
      uStack_300 = uStack_2e8;
      afStack_314[(uint)bVar9 * -2 + 6] = afStack_314[(uint)bVar9 * -2 + 0xc];
      afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      FUN_00408b80(param_1);
      uVar12 = 0x4140000041000000;
      auStack_1bc[0] = uStack_2dc;
      afStack_1dc[(uint)bVar9 * -2 + 9] = afStack_314[(uint)bVar9 * -2 + 0xf];
      afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
           afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
      fStack_14 = (float)FUN_0040ce40(uVar12);
      fVar10 = (float10)fStack_14 * (float10)_DAT_005d7b1b;
      FUN_005a3120();
      iStack_58 = (int)ROUND(fVar10);
      FUN_004ce9c0(0x01D22E44,afStack_1dc + 8,0);
    }
    else if (uVar5 == 0x29a) {
      FUN_004f6f10(0x01D81080);
    }
    else {
      FUN_00433fb0();
    }
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  if (*(int *)(param_1 + 0xd054) == 2) {
    *(float *)(param_1 + 0x2528) = *(float *)(param_1 + 0x2528) * (float)_DAT_005d7af3;
  }
  iVar4 = FUN_004fc070();
  uVar5 = *(uint *)(iVar4 + 0x24);
  uStack_1c = uVar5;
  iVar4 = FUN_00431660(param_1,param_2);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))();
    if ((iVar4 == 0) && (*(int *)(param_1 + 0xcde4) == *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04))) {
      FUN_0042abb0();
      fStack_4d0 = (float)FUN_0040ce40(0x40e00000,0x41700000);
      iStack_4a0 = param_1;
      iStack_49c = param_1;
      iStack_28 = param_1 + 0xfd8;
      fStack_14 = fStack_4d0;
      FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd064) * 0x30 + iStack_28,
                   *(uint *)(param_1 + 0x27b8),auStack_4d4);
      pfVar11 = afStack_1dc + 2;
      afStack_1dc[2] = (float)uStack_33c;
      afStack_1dc[(uint)bVar9 * -2 + 3] = afStack_3a4[(uint)bVar9 * -2 + 0x1b];
      afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
      FUN_00408b80(param_1,pfVar11);
      pfVar11 = afStack_1dc + 5;
      auStack_1c8[0] = uStack_15c;
      afStack_1dc[(uint)bVar9 * -2 + 6] = afStack_1dc[(uint)bVar9 * -2 + 0x21];
      iVar4 = param_1;
      afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22];
      FUN_004893f0(iVar4,pfVar11);
      fStack_4d0 = (float)FUN_0040ce40(0x40e00000,0x41700000);
      iStack_4a0 = param_1;
      iStack_49c = param_1;
      fStack_14 = fStack_4d0;
      FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd060) * 0x30 + iStack_28,
                   *(uint *)(param_1 + 0x27b8),auStack_4d4);
      pfVar11 = afStack_314 + 2;
      afStack_314[2] = (float)uStack_2f4;
      afStack_314[(uint)bVar9 * -2 + 3] = afStack_314[(uint)bVar9 * -2 + 9];
      afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
      FUN_00408b80(param_1,pfVar11);
      pfVar11 = afStack_1dc + 0xb;
      auStack_1b0[0] = uStack_18c;
      afStack_1dc[(uint)bVar9 * -2 + 0xc] = afStack_1dc[(uint)bVar9 * -2 + 0x15];
      iVar4 = param_1;
      afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
      FUN_004893f0(iVar4,pfVar11);
      fStack_4d0 = (float)FUN_0040ce40(0x40e00000,0x41700000);
      iStack_4a0 = param_1;
      iStack_49c = param_1;
      fStack_14 = fStack_4d0;
      FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd05c) * 0x30 + iStack_28,
                   *(uint *)(param_1 + 0x27b8),auStack_4d4);
      pfVar11 = afStack_3a4 + 0x17;
      afStack_348[0] = (float)uStack_e4;
      afStack_3a4[(uint)bVar9 * -2 + 0x18] = afStack_1dc[(uint)bVar9 * -2 + 0x3f];
      afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
           afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x40];
      FUN_00408b80(param_1,pfVar11);
      pfVar11 = afStack_1dc + 0x11;
      auStack_198[0] = uStack_144;
      afStack_1dc[(uint)bVar9 * -2 + 0x12] = afStack_1dc[(uint)bVar9 * -2 + 0x27];
      iVar4 = param_1;
      afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
           afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28];
      FUN_004893f0(iVar4,pfVar11);
    }
    iStack_24 = param_1 + 0xfd8;
    if (uStack_1c < 4) {
      if (uStack_1c == 0) goto LAB_0057dec3;
      if (1 < uStack_1c) {
        if (2 < uStack_1c) {
          if (*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) != *(int *)(param_1 + 0xcde4)) {
            FUN_0042abb0();
            fStack_41c = (float)FUN_0040ce40(0x40e00000,0x41700000);
            iStack_3ec = param_1;
            iStack_3e8 = param_1;
            fStack_14 = fStack_41c;
            FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd05c) * 0x30 + iStack_24,0x3ecccccd,
                         auStack_420);
            pfVar11 = afStack_1dc + 0x2f;
            auStack_120[0] = uStack_6c;
            afStack_1dc[(uint)bVar9 * -2 + 0x30] = afStack_1dc[(uint)bVar9 * -2 + 0x5d];
            afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31] =
                 afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x5e];
            FUN_00408b80(param_1,pfVar11);
            pfVar11 = afStack_314 + 0x11;
            afStack_2d0[0] = (float)uStack_84;
            afStack_314[(uint)bVar9 * -2 + 0x12] = afStack_1dc[(uint)bVar9 * -2 + 0x57];
            iVar4 = param_1;
            afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
                 afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x58];
            FUN_004893f0(iVar4,pfVar11);
          }
          if ((*(int *)(param_1 + 0xcde4) != 0) &&
             (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x10c))(),
             iVar4 != 0)) {
            FUN_004fc0d0(param_1 + 0x158,7,1);
          }
          goto LAB_0057d989;
        }
        goto LAB_0057df41;
      }
LAB_0057e4a9:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar4 = *(int *)(param_1 + 0xcde4);
      if (iVar4 == 0) {
        iVar4 = FUN_00489ff0(param_1,param_2);
        if (iVar4 == 0) {
          FUN_004fc0d0(param_1 + 0x158,0,1);
        }
        goto LAB_0057d989;
      }
      if (*(int *)(param_1 + 0xd080) != 0) {
        fStack_f0 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_ec = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_e8 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_234 = fStack_f0;
        afStack_314[(uint)bVar9 * -2 + 0x39] = afStack_1dc[(uint)bVar9 * -2 + 0x3c];
        afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3a] =
             afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3d];
        fStack_34 = SQRT(fStack_22c * fStack_22c + fStack_234 * fStack_234 + fStack_230 * fStack_230
                        );
        if ((*(float *)(param_1 + 0xcddc) < fStack_34) || ((float)_DAT_005d7afb < fStack_34)) {
          *(uint *)(param_1 + 0xcde4) = 0;
          FUN_004fc0d0(param_1 + 0x158,0,1);
          goto LAB_0057d989;
        }
      }
      iVar4 = FUN_0040c840(*(uint *)(param_1 + 0xd080),_DAT_02cfd81c);
      if ((iVar4 == 0) || (uStack_1c != 0xf)) {
        iStack_20 = *(int *)(param_1 + 0xcde4);
        if (*(int *)(param_1 + 0xd054) == 2) {
          if ((*(int *)(param_1 + 0xd088) == 0) || (*(int *)(param_1 + 0xd08c) == 0)) {
            _DAT_01d71de0 = "..\\core\\werewolf.cpp";
            _DAT_01d71de4 = 0x1ad;
            FUN_004e4330();
          }
          FUN_00441ff0(PTR_DAT_005f1690,"Phase: %d, Timer: %f\n",*(uint *)(param_1 + 0xd090)
                       ,(double)*(float *)(param_1 + 0xd094));
          if ((*(int *)(param_1 + 0xd090) == 1) || (*(int *)(param_1 + 0xd090) == 3)) {
            FUN_00408bf0(*(uint *)(param_1 + 0xcde4),*(int *)(param_1 + 0xd088) + 0x20);
            uStack_24c = uStack_21c;
            afStack_314[(uint)bVar9 * -2 + 0x33] = afStack_314[(uint)bVar9 * -2 + 0x3f];
            afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34] =
                 afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x40];
            if (0.0 <= fStack_244) {
              FUN_00408bf0(*(uint *)(param_1 + 0xcde4),*(int *)(param_1 + 0xd08c) + 0x20);
              uStack_204 = uStack_1e0;
              afStack_314[(uint)bVar9 * -2 + 0x45] = afStack_1dc[(uint)bVar9 * -2];
              afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x46] =
                   afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              if (0.0 <= fStack_1fc) {
                iVar4 = *(int *)(param_1 + 0xcde4);
                iVar6 = *(int *)(param_1 + 0xd088);
                fStack_354 = *(float *)(iVar4 + 0x20) - *(float *)(iVar6 + 0x20);
                fStack_350 = *(float *)(iVar4 + 0x24) - *(float *)(iVar6 + 0x24);
                fStack_34c = *(float *)(iVar4 + 0x28) - *(float *)(iVar6 + 0x28);
                afStack_3a4[2] = fStack_354;
                afStack_3a4[(uint)bVar9 * -2 + 3] = afStack_3a4[(uint)bVar9 * -2 + 0x15];
                afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                     afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
                fVar2 = afStack_3a4[2] * afStack_3a4[2];
                iStack_48 = iVar6;
                iVar6 = *(int *)(param_1 + 0xd08c);
                fStack_2b8 = *(float *)(iVar4 + 0x20) - *(float *)(iVar6 + 0x20);
                fStack_2b4 = *(float *)(iVar4 + 0x24) - *(float *)(iVar6 + 0x24);
                fStack_2b0 = *(float *)(iVar4 + 0x28) - *(float *)(iVar6 + 0x28);
                fStack_36c = fStack_2b8;
                afStack_3a4[(uint)bVar9 * -2 + 0xf] = afStack_314[(uint)bVar9 * -2 + 0x18];
                afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
                     afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
                iStack_20 = iStack_48;
                if (SQRT(fStack_394 * fStack_394 + fVar2 + afStack_3a4[3] * afStack_3a4[3]) <=
                    SQRT(fStack_364 * fStack_364 + fStack_36c * fStack_36c + fStack_368 * fStack_368
                        )) {
                  iStack_20 = iVar6;
                  goto LAB_0057e684;
                }
              }
              else {
                iStack_20 = *(int *)(param_1 + 0xd08c);
              }
            }
            else {
              iStack_20 = *(int *)(param_1 + 0xd088);
            }
          }
LAB_0057e684:
          if ((*(int *)(param_1 + 0xd090) == 1) || (*(int *)(param_1 + 0xd090) == 3)) {
            fStack_2c4 = *(float *)(iStack_20 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_2c0 = *(float *)(iStack_20 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_2bc = *(float *)(iStack_20 + 0x28) - *(float *)(param_1 + 0x28);
            fStack_108 = fStack_2c4;
            afStack_1dc[(uint)bVar9 * -2 + 0x36] = afStack_314[(uint)bVar9 * -2 + 0x15];
            afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x37] =
                 afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
            if (SQRT(fStack_100 * fStack_100 + fStack_108 * fStack_108 + fStack_104 * fStack_104) <
                (float)_DAT_005d7b03) {
              iVar4 = *(int *)(param_1 + 0xd090) + 1;
              *(int *)(param_1 + 0xd090) = iVar4;
              if (3 < iVar4) {
                *(uint *)(param_1 + 0xd090) = 0;
              }
              *(uint *)(param_1 + 0xd094) = 0x41200000;
            }
          }
          else if ((*(float *)(param_1 + 0xd094) <= 0.0) &&
                  (iVar4 = *(int *)(param_1 + 0xd090) + 1, *(int *)(param_1 + 0xd090) = iVar4,
                  3 < iVar4)) {
            *(uint *)(param_1 + 0xd090) = 0;
          }
        }
        iVar4 = iStack_20;
        afStack_324[2] = 0x40400000;
        fStack_54 = 0x40400000;
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_324[0] = 0.0;
        afStack_324[1] = 0.0;
        uVar8 = (**(code **)(*(int *)(iStack_20 + 0x154) + 0xc4))
                          (iStack_20,afStack_3a4 + 0x20,0x3f000000,0x3e32b8c2);
        iVar6 = FUN_0042b9e0(param_1,(float *)(iVar4 + 0x20),uVar8);
        if (iVar6 < 0) {
          FUN_00441ff0(PTR_DAT_005f1690,"%s gave up chase - I'm confused\n",param_1);
          FUN_004fc0d0(param_1 + 0x158,0,1);
        }
        else if (iVar6 < 1) {
          iVar6 = FUN_0040c840(*(uint *)(param_1 + 0xd080),_DAT_02cfd81c);
          if (iVar6 == 0) {
            fStack_228 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_224 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_220 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            fStack_78 = fStack_228;
            afStack_1dc[(uint)bVar9 * -2 + 0x5a] = afStack_314[(uint)bVar9 * -2 + 0x3c];
            afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x5b] =
                 afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3d];
            if (afStack_314 + 0x4a != afStack_1dc + 0x59) {
              fStack_1ec = fStack_78;
              fStack_1e8 = fStack_74;
              fStack_1e4 = fStack_70;
            }
            fStack_3c = SQRT(fStack_1e4 * fStack_1e4 +
                             fStack_1ec * fStack_1ec + fStack_1e8 * fStack_1e8);
            fStack_2c = 20.0;
            if (*(int *)(param_1 + 0xd054) == 1) {
              fStack_2c = 10.0;
            }
            if (*(int *)(param_1 + 0xd054) == 2) {
              fStack_2c = 10.0;
            }
            iStack_40 = param_1 + 0x158;
            if (fStack_2c < fStack_3c) {
              FUN_00576250();
              uStack_288 = uStack_1a4;
              afStack_314[(uint)bVar9 * -2 + 0x24] = afStack_1dc[(uint)bVar9 * -2 + 0xf];
              afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25] =
                   afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
              fStack_14 = (float)FUN_0040cfa0();
              if (ABS(fStack_14) < (float)_DAT_005d7b13) {
                FUN_004fc0d0(iStack_40,8,1);
                iVar4 = FUN_0040cf40();
                if (iVar4 != 0) {
                  FUN_0057ee30();
                }
                iVar6 = 0;
                for (iVar4 = 0; iVar4 < *(int *)(0x01ED78C8 + 0x150fec); iVar4 = iVar4 + 1) {
                  iVar7 = FUN_0040c840(*(uint *)(iVar6 + 0x150ff0 + 0x01ED78C8),
                                       _DAT_02d202ac);
                  if (((iVar7 != 0) && (iVar7 != param_1)) &&
                     (iVar7 = FUN_004fc070(), *(int *)(iVar7 + 0x24) == 8)) {
                    iVar4 = FUN_0040cea0(0,2);
                    if (iVar4 == 1) {
                      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + _DAT_005d7b23;
                    }
                    if (iVar4 == 2) {
                      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + _DAT_005d7b27;
                    }
                    break;
                  }
                  iVar6 = iVar6 + 4;
                }
              }
            }
            else if ((fStack_3c < 0x40400000 * _DAT_005d7b0b) && (uStack_1c == 0xf)) {
              FUN_004fc0d0(iStack_40,0,1);
            }
          }
        }
        else {
          if ((*(int *)(param_1 + 0xd054) == 2) &&
             ((*(int *)(param_1 + 0xd090) == 1 || (*(int *)(param_1 + 0xd090) == 3))))
          goto LAB_0057d989;
          if (*(float *)(param_1 + 0xcde0) <= 0.0) {
            iVar4 = FUN_0040cea0(0,2);
            if (iVar4 == 0) {
              FUN_004fc0d0(param_1 + 0x158,2,1);
            }
            if (iVar4 == 1) {
              FUN_004fc0d0(param_1 + 0x158,3,1);
            }
            if (iVar4 == 2) {
              FUN_004fc0d0(param_1 + 0x158,4,1);
            }
            *(uint *)(param_1 + 0xcde0) = 0x3f800000;
            iVar4 = FUN_0040cf40();
            if (iVar4 != 0) {
              FUN_0057ee30();
            }
          }
        }
        fVar2 = *(float *)(param_1 + 0xd074) - param_2;
        *(float *)(param_1 + 0xd074) = fVar2;
        if (fVar2 < 0.0) {
          FUN_0057ee30();
        }
        goto LAB_0057d989;
      }
LAB_0057e486:
      FUN_004fc0d0(param_1 + 0x158,0,1);
    }
    else {
      iStack_38 = param_1 + 0x158;
      if (uStack_1c < 5) {
        FUN_0042abb0();
        fStack_3e0 = (float)FUN_0040ce40(0x40e00000,0x41700000);
        iStack_3b0 = param_1;
        iStack_3ac = param_1;
        fStack_14 = fStack_3e0;
        FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd060) * 0x30 + iStack_24,0x3ecccccd,
                     auStack_3e4);
        pfVar11 = afStack_1dc + 0x29;
        auStack_138[0] = uStack_174;
        afStack_1dc[(uint)bVar9 * -2 + 0x2a] = afStack_1dc[(uint)bVar9 * -2 + 0x1b];
        afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b] =
             afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
        FUN_00408b80(param_1,pfVar11);
        pfVar11 = afStack_1dc + 0x4d;
        auStack_a8[0] = uStack_90;
        afStack_1dc[(uint)bVar9 * -2 + 0x4e] = afStack_1dc[(uint)bVar9 * -2 + 0x54];
        iVar4 = param_1;
        afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x4f] =
             afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x55];
        FUN_004893f0(iVar4,pfVar11);
        if ((*(int *)(param_1 + 0xcde4) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x10c))(),
           iVar4 != 0)) {
          FUN_004fc0d0(iStack_38,7,1);
        }
        goto LAB_0057d989;
      }
      if (uStack_1c < 0xe) {
        if (uStack_1c < 8) goto LAB_0057d989;
        if (8 < uStack_1c) {
          if (((uStack_1c == 0xd) && (*(int *)(param_1 + 0xcdd0) == 0)) &&
             (*(int *)(param_1 + 0xdc) == 0)) {
            FUN_0054dbd0(iStack_38,0);
            pfVar11 = afStack_314 + 0x29;
            afStack_270[0] = (float)uStack_c0;
            afStack_314[(uint)bVar9 * -2 + 0x2a] = afStack_1dc[(uint)bVar9 * -2 + 0x48];
            afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b] =
                 afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x49];
            FUN_00408b80(param_1,pfVar11);
            uVar13 = ZEXT48(afStack_1dc + 0x4a);
            auStack_b4[0] = uStack_258;
            afStack_1dc[(uint)bVar9 * -2 + 0x4b] = afStack_314[(uint)bVar9 * -2 + 0x30];
            uVar8 = 0x01D22E44;
            afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x4c] =
                 afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31];
            FUN_004cec40(uVar8,uVar13);
            *(uint *)(param_1 + 0xcdd0) = 1;
          }
          goto LAB_0057d989;
        }
        if (*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) != *(int *)(param_1 + 0xcde4)) {
          FUN_0042abb0();
          fStack_494 = (float)FUN_0040ce40(0x40e00000,0x41700000);
          iStack_464 = param_1;
          iStack_460 = param_1;
          fStack_14 = fStack_494;
          FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd064) * 0x30 + iStack_24,0x3f800000,
                       auStack_498);
          pfVar11 = afStack_314 + 0x35;
          afStack_240[0] = (float)uStack_2ac;
          afStack_314[(uint)bVar9 * -2 + 0x36] = afStack_314[(uint)bVar9 * -2 + 0x1b];
          afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x37] =
               afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
          FUN_00408b80(param_1,pfVar11);
          pfVar11 = afStack_3a4 + 8;
          afStack_384[0] = (float)uStack_378;
          afStack_3a4[(uint)bVar9 * -2 + 9] = afStack_3a4[(uint)bVar9 * -2 + 0xc];
          iVar4 = param_1;
          afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
               afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
          FUN_004893f0(iVar4,pfVar11);
          FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd060) * 0x30 + iStack_24,0x3f800000,
                       auStack_498);
          pfVar11 = afStack_1dc + 0x41;
          auStack_d8[0] = uStack_360;
          afStack_1dc[(uint)bVar9 * -2 + 0x42] = afStack_3a4[(uint)bVar9 * -2 + 0x12];
          afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x43] =
               afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
          FUN_00408b80(param_1,pfVar11);
          pfVar11 = afStack_1dc + 0x44;
          auStack_cc[0] = uStack_264;
          afStack_1dc[(uint)bVar9 * -2 + 0x45] = afStack_314[(uint)bVar9 * -2 + 0x2d];
          iVar4 = param_1;
          afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x46] =
               afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e];
          FUN_004893f0(iVar4,pfVar11);
          FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd05c) * 0x30 + iStack_24,0x3f800000,
                       auStack_498);
          pfVar11 = afStack_314 + 0x47;
          afStack_1f8[0] = (float)uStack_330;
          afStack_314[(uint)bVar9 * -2 + 0x48] = afStack_3a4[(uint)bVar9 * -2 + 0x1e];
          afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x49] =
               afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f];
          FUN_00408b80(param_1,pfVar11);
          pfVar11 = afStack_3a4 + 5;
          afStack_390[0] = (float)uStack_318;
          afStack_3a4[(uint)bVar9 * -2 + 6] = afStack_314[(uint)bVar9 * -2];
          iVar4 = param_1;
          afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
               afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          FUN_004893f0(iVar4,pfVar11);
        }
        if ((*(int *)(param_1 + 0xcde4) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x10c))(),
           iVar4 != 0)) {
          FUN_004fc0d0(param_1 + 0x158,7,1);
        }
LAB_0057df41:
        if (*(int *)(param_1 + 0xcde4) != *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
          FUN_0042abb0();
          fStack_458 = (float)FUN_0040ce40(0x40e00000,0x41700000);
          iStack_428 = param_1;
          iStack_424 = param_1;
          fStack_14 = fStack_458;
          FUN_00583260(&DAT_02cfd900,param_1 + 0xfd8 + *(int *)(param_1 + 0xd064) * 0x30,0x3ecccccd,
                       auStack_45c);
          pfVar11 = afStack_314 + 0x1d;
          afStack_2a0[0] = (float)uStack_180;
          afStack_314[(uint)bVar9 * -2 + 0x1e] = afStack_1dc[(uint)bVar9 * -2 + 0x18];
          afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f] =
               afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
          FUN_00408b80(param_1,pfVar11);
          pfVar11 = afStack_314 + 0x20;
          afStack_294[0] = (float)uStack_114;
          afStack_314[(uint)bVar9 * -2 + 0x21] = afStack_1dc[(uint)bVar9 * -2 + 0x33];
          iVar4 = param_1;
          afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22] =
               afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34];
          FUN_004893f0(iVar4,pfVar11);
        }
        if ((*(int *)(param_1 + 0xcde4) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x10c))(),
           iVar4 != 0)) {
          FUN_004fc0d0(param_1 + 0x158,7,1);
        }
        goto LAB_0057d989;
      }
      if (0xe < uStack_1c) {
        if (0xf < uStack_1c) {
          if (uStack_1c != 0x13) goto LAB_0057d989;
          goto LAB_0057d971;
        }
        goto LAB_0057e4a9;
      }
LAB_0057dec3:
      iVar4 = FUN_00489ff0(param_1,param_2);
      if (iVar4 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        iVar4 = *(int *)(param_1 + 0xcde4);
        if (iVar4 == 0) goto LAB_0057d989;
        if (*(int *)(param_1 + 0xd080) != 0) {
          fStack_210 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_20c = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_208 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_3a8 = fStack_210;
          afStack_3a4[(uint)bVar9 * -2] = afStack_314[(uint)bVar9 * -2 + 0x42];
          afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x43];
          fStack_44 = SQRT(afStack_3a4[1] * afStack_3a4[1] +
                           fStack_3a8 * fStack_3a8 + afStack_3a4[0] * afStack_3a4[0]);
          if ((*(float *)(param_1 + 0xcddc) < fStack_44) || ((float)_DAT_005d7afb < fStack_44)) {
            *(uint *)(param_1 + 0xcde4) = 0;
            goto LAB_0057d989;
          }
        }
        iVar4 = FUN_0040c840(*(uint *)(param_1 + 0xd080),_DAT_02cfd81c);
        if ((iVar4 != 0) && (uStack_1c == 0xe)) goto LAB_0057e486;
        if (*(int *)(param_1 + 0xcde4) == 0) goto LAB_0057d989;
        iVar4 = FUN_0040cf40();
        if (iVar4 != 0) {
          FUN_0057ee30();
        }
        if (uStack_1c == 0xe) {
          FUN_004fc0d0(param_1 + 0x158,0xf,1);
          goto LAB_0057d989;
        }
      }
      else if (uStack_1c == 0xe) {
        FUN_004fc0d0(param_1 + 0x158,0xf,1);
        goto LAB_0057d989;
      }
      FUN_004fc0d0(param_1 + 0x158,1,1);
    }
    goto LAB_0057d989;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) {
LAB_0057d95e:
        uVar12 = 0x10000000f;
      }
      else {
        uVar12 = 0x100000001;
      }
    }
    else {
LAB_0057dc49:
      uVar12 = 0x100000000;
    }
LAB_0057d969:
    FUN_004fc0d0(param_1 + 0x158,uVar12);
  }
  else {
    if (uVar1 < 3) {
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) goto LAB_0057d95e;
      if (*(float *)(param_1 + 0x2528) <= ABS(*(float *)(param_1 + 0x2508))) {
        uVar12 = 0x100000001;
      }
      else {
        uVar12 = 0x100000008;
      }
      goto LAB_0057d969;
    }
    if (uVar1 != 3) goto LAB_0057dc49;
    FUN_004fc0d0(param_1 + 0x158,0,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
LAB_0057d971:
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
LAB_0057d989:
  if ((uStack_1c == 0x13) && (*(int *)(param_1 + 0x27bc) != 0)) {
    iVar4 = FUN_00556700();
    if (iVar4 == 0) {
      uVar8 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"werewolf-eat.wav");
      *(uint *)(param_1 + 0xd07c) = uVar8;
    }
  }
  else {
    FUN_00556be0();
  }
  fStack_30 = 1.0;
  if (*(int *)(param_1 + 0xd054) == 0) {
    fStack_30 = 0.75;
  }
  dVar3 = _DAT_005d7b33;
  if ((uStack_1c != 0xe) && (uStack_1c != 0xf)) {
    dVar3 = _DAT_005d7b2b;
  }
  *(float *)(param_1 + 0x3270) = fStack_30 * (float)dVar3;
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  iVar4 = FUN_004fc070();
  iVar4 = *(int *)(iVar4 + 0x24);
  if (((((iVar4 != 0xd) && (iVar4 != 0)) && (iVar4 != 0xe)) && (iVar4 != 0x14)) ||
     (*(int *)(param_1 + 0xdc) != 0)) {
    if ((*(int *)(param_1 + 0xcde4) != 0) &&
       (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))(),
       iVar4 == param_1)) {
      FUN_0053ec10(0x01ED78C8,*(uint *)(param_1 + 0xcde4));
    }
    FUN_0042c1e0(param_1,param_2);
    fStack_12c = *(float *)(param_1 + 0x2518) * param_2;
    fStack_128 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_124 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_fc = fStack_12c;
    afStack_1dc[(uint)bVar9 * -2 + 0x39] = afStack_1dc[(uint)bVar9 * -2 + 0x2d];
    afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3a] =
         afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e];
    fStack_150 = fStack_fc + *(float *)(param_1 + 0x249c);
    fStack_14c = fStack_f8 + *(float *)(param_1 + 0x24a0);
    fStack_148 = fStack_f4 + *(float *)(param_1 + 0x24a4);
    fStack_27c = fStack_150;
    afStack_314[(uint)bVar9 * -2 + 0x27] = afStack_1dc[(uint)bVar9 * -2 + 0x24];
    afStack_314[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28] =
         afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25];
    fStack_168 = fStack_27c + *(float *)(param_1 + 0x250c);
    fStack_164 = fStack_278 + *(float *)(param_1 + 0x2510);
    fStack_160 = fStack_274 + *(float *)(param_1 + 0x2514);
    afStack_9c[0] = fStack_168;
    afStack_1dc[(uint)bVar9 * -2 + 0x51] = afStack_1dc[(uint)bVar9 * -2 + 0x1e];
    afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x52] =
         afStack_1dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f];
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    *(uint *)(param_1 + 0x2514) = 0;
    *(float *)(param_1 + 0x2510) = *(float *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2514);
    FUN_0042c230(param_1,afStack_1dc + 0x50);
  }
  FUN_0042cd30();
  FUN_0054c130();
  FUN_00433350(param_1,param_2);
  FUN_0057fad0();
  *(float *)(param_1 + 0xd098) = param_2 * (float)_DAT_005d7b3b + *(float *)(param_1 + 0xd098);
  return;
}
