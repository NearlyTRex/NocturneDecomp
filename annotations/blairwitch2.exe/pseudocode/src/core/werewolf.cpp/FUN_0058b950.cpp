// Name: FUN_0058b950
// Address: 0058b950
// Address Range: [[0058b950, 0058d01b]]
// Convention: unknown
// Signature: void FUN_0058b950(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058b950(int param_1,float param_2)

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
  iVar4 = FUN_004244b0(param_1,param_2);
  if (iVar4 == 0) {
    FUN_00551050();
    return;
  }
  if ((*(int *)(param_1 + 0x10af8) == 2) && (0.0 <= *(float *)(param_1 + 0x10b38))) {
    *(float *)(param_1 + 0x10b38) = *(float *)(param_1 + 0x10b38) - param_2;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  fStack_50 = param_2 * *(float *)(param_1 + 0x10a60);
  iStack_18 = param_1 + 0x2b4;
  while (iVar4 = iStack_18, 0.0 < fStack_50) {
    uVar5 = FUN_005030c0(iStack_18);
    if (uVar5 < 10) {
      FUN_0042aa00();
    }
    else if (uVar5 < 0xb) {
      FUN_005469a0(iVar4);
      uStack_30c = uStack_2f4;
      afStack_350[(uint)bVar9 * -2 + 0x12] = afStack_350[(uint)bVar9 * -2 + 0x18];
      afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
           afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
      FUN_00408d70(param_1);
      uVar13 = 0x4140000041000000;
      auStack_318[0] = uStack_2e8;
      afStack_350[(uint)bVar9 * -2 + 0xf] = afStack_350[(uint)bVar9 * -2 + 0x1b];
      afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
           afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
      fStack_14 = (float)FUN_0040cf60(uVar13);
      fVar10 = (float10)fStack_14 * (float10)_DAT_005ee722;
      FUN_005b7ff0();
      iStack_58 = (int)ROUND(fVar10);
      FUN_004c9850(0x01CB8284,afStack_350 + 0xe,0);
    }
    else if (uVar5 == 0x29a) {
      FUN_004fc7b0(0x01D182F0);
    }
    else {
      FUN_0042aa00();
    }
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
  if (*(int *)(param_1 + 0x10af8) == 2) {
    *(float *)(param_1 + 0x2598) = *(float *)(param_1 + 0x2598) * (float)_DAT_005ee6fa;
  }
  iVar4 = FUN_005035c0();
  uVar5 = *(uint *)(iVar4 + 0x24);
  uStack_1c = uVar5;
  iVar4 = FUN_004287f0(param_1,param_2);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))();
    if ((iVar4 == 0) && (*(int *)(param_1 + 0x10a78) == *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4))) {
      FUN_004222d0();
      fStack_4d0 = (float)FUN_0040cf60(0x40e00000,0x41700000);
      iStack_4a0 = param_1;
      iStack_49c = param_1;
      iStack_30 = param_1 + 0x1134;
      fStack_14 = fStack_4d0;
      FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x10b08) * 0x30 + iStack_30,
                   *(uint *)(param_1 + 0x2824),auStack_4d4);
      puVar11 = &uStack_3a8;
      uStack_3a8 = afStack_350[2];
      afStack_3a4[(uint)bVar9 * -2] = afStack_350[(uint)bVar9 * -2 + 3];
      afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      FUN_00408d70(param_1,puVar11);
      pfVar12 = afStack_260 + 0x23;
      afStack_1d4[0] = (float)uStack_1e0;
      afStack_260[(uint)bVar9 * -2 + 0x24] = afStack_260[(uint)bVar9 * -2 + 0x21];
      iVar4 = param_1;
      afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25] =
           afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22];
      FUN_00488110(iVar4,pfVar12);
      fStack_4d0 = (float)FUN_0040cf60(0x40e00000,0x41700000);
      iStack_4a0 = param_1;
      iStack_49c = param_1;
      fStack_14 = fStack_4d0;
      FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x10b04) * 0x30 + iStack_30,
                   *(uint *)(param_1 + 0x2824),auStack_4d4);
      puVar11 = &uStack_354;
      uStack_354 = uStack_300;
      afStack_350[(uint)bVar9 * -2] = afStack_350[(uint)bVar9 * -2 + 0x15];
      afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
      FUN_00408d70(param_1,puVar11);
      pfVar12 = afStack_260 + 0x29;
      afStack_1bc[0] = (float)uStack_204;
      afStack_260[(uint)bVar9 * -2 + 0x2a] = afStack_260[(uint)bVar9 * -2 + 0x18];
      iVar4 = param_1;
      afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b] =
           afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
      FUN_00488110(iVar4,pfVar12);
      fStack_4d0 = (float)FUN_0040cf60(0x40e00000,0x41700000);
      iStack_4a0 = param_1;
      iStack_49c = param_1;
      fStack_14 = fStack_4d0;
      FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x10b00) * 0x30 + iStack_30,
                   *(uint *)(param_1 + 0x2824),auStack_4d4);
      pfVar12 = afStack_3a4 + 0xb;
      auStack_378[0] = uStack_2b8;
      afStack_3a4[(uint)bVar9 * -2 + 0xc] = afStack_350[(uint)bVar9 * -2 + 0x27];
      afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28];
      FUN_00408d70(param_1,pfVar12);
      pfVar12 = afStack_260 + 0x2f;
      afStack_1a4[0] = (float)uStack_d8;
      afStack_260[(uint)bVar9 * -2 + 0x30] = afStack_260[(uint)bVar9 * -2 + 99];
      iVar4 = param_1;
      afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31] =
           afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 100];
      FUN_00488110(iVar4,pfVar12);
    }
    iStack_24 = param_1 + 0x1134;
    if (uStack_1c < 4) {
      if (uStack_1c == 0) goto LAB_0058c0f5;
      if (1 < uStack_1c) {
        if (2 < uStack_1c) {
          if (*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) != *(int *)(param_1 + 0x10a78)) {
            FUN_004222d0();
            fStack_494 = (float)FUN_0040cf60(0x40e00000,0x41700000);
            iStack_464 = param_1;
            iStack_460 = param_1;
            fStack_14 = fStack_494;
            FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x10b00) * 0x30 + iStack_24,0x3ecccccd,
                         auStack_498);
            pfVar12 = afStack_260 + 0x1d;
            afStack_1ec[0] = (float)uStack_168;
            afStack_260[(uint)bVar9 * -2 + 0x1e] = afStack_260[(uint)bVar9 * -2 + 0x3f];
            afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f] =
                 afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x40];
            FUN_00408d70(param_1,pfVar12);
            pfVar12 = afStack_260 + 0x53;
            afStack_114[0] = (float)uStack_90;
            afStack_260[(uint)bVar9 * -2 + 0x54] = afStack_260[(uint)bVar9 * -2 + 0x75];
            iVar4 = param_1;
            afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x55] =
                 afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x76];
            FUN_00488110(iVar4,pfVar12);
          }
          if ((*(int *)(param_1 + 0x10a78) != 0) &&
             (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0x114))(),
             iVar4 != 0)) {
            FUN_00503620(param_1 + 0x2b4,7,1);
          }
          goto LAB_0058bbb2;
        }
        goto LAB_0058c173;
      }
LAB_0058c6d9:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      iVar4 = *(int *)(param_1 + 0x10a78);
      if (iVar4 == 0) {
        iVar4 = FUN_00488970(param_1,param_2);
        if (iVar4 == 0) {
          FUN_00503620(param_1 + 0x2b4,0,1);
        }
        goto LAB_0058bbb2;
      }
      if (*(int *)(param_1 + 0x10b24) != 0) {
        fStack_21c = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_218 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_214 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_b4 = fStack_21c;
        afStack_260[(uint)bVar9 * -2 + 0x6c] = afStack_260[(uint)bVar9 * -2 + 0x12];
        afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x6d] =
             afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
        fStack_40 = SQRT(fStack_ac * fStack_ac + fStack_b4 * fStack_b4 + fStack_b0 * fStack_b0);
        if ((*(float *)(param_1 + 0x10a70) < fStack_40) || ((float)_DAT_005ee702 < fStack_40)) {
          *(uint *)(param_1 + 0x10a78) = 0;
          FUN_00503620(param_1 + 0x2b4,0,1);
          goto LAB_0058bbb2;
        }
      }
      iVar4 = FUN_0040c8f0(*(uint *)(param_1 + 0x10b24),_DAT_026535b0);
      if ((iVar4 == 0) || (uStack_1c != 0xf)) {
        iStack_20 = *(int *)(param_1 + 0x10a78);
        if (*(int *)(param_1 + 0x10af8) == 2) {
          if ((*(int *)(param_1 + 0x10b2c) == 0) || (*(int *)(param_1 + 0x10b30) == 0)) {
            _DAT_01d046a0 = "..\\core\\werewolf.cpp";
            _DAT_01d046a4 = 0x1ad;
            FUN_004e4500();
          }
          FUN_00436710(PTR_DAT_00609ed0,"Phase: %d, Timer: %f\n",
                       *(uint *)(param_1 + 0x10b34),(double)*(float *)(param_1 + 0x10b38));
          if ((*(int *)(param_1 + 0x10b34) == 1) || (*(int *)(param_1 + 0x10b34) == 3)) {
            FUN_00408de0(*(uint *)(param_1 + 0x10a78),*(int *)(param_1 + 0x10b2c) + 0x20);
            afStack_260[2] = (float)uStack_228;
            afStack_260[(uint)bVar9 * -2 + 3] = afStack_260[(uint)bVar9 * -2 + 0xf];
            afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                 afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
            if (0.0 <= fStack_250) {
              FUN_00408de0(*(uint *)(param_1 + 0x10a78),*(int *)(param_1 + 0x10b30) + 0x20);
              uStack_c0 = uStack_cc;
              afStack_260[(uint)bVar9 * -2 + 0x69] = afStack_260[(uint)bVar9 * -2 + 0x66];
              afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x6a] =
                   afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x67];
              if (0.0 <= fStack_b8) {
                iVar4 = *(int *)(param_1 + 0x10a78);
                iVar6 = *(int *)(param_1 + 0x10b2c);
                fStack_1c8 = *(float *)(iVar4 + 0x20) - *(float *)(iVar6 + 0x20);
                fStack_1c4 = *(float *)(iVar4 + 0x24) - *(float *)(iVar6 + 0x24);
                fStack_1c0 = *(float *)(iVar4 + 0x28) - *(float *)(iVar6 + 0x28);
                fStack_9c = fStack_1c8;
                afStack_260[(uint)bVar9 * -2 + 0x72] = afStack_260[(uint)bVar9 * -2 + 0x27];
                afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x73] =
                     afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28];
                fVar2 = fStack_9c * fStack_9c;
                iStack_44 = iVar6;
                iVar6 = *(int *)(param_1 + 0x10b30);
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
                  goto LAB_0058c8b4;
                }
              }
              else {
                iStack_20 = *(int *)(param_1 + 0x10b30);
              }
            }
            else {
              iStack_20 = *(int *)(param_1 + 0x10b2c);
            }
          }
LAB_0058c8b4:
          if ((*(int *)(param_1 + 0x10b34) == 1) || (*(int *)(param_1 + 0x10b34) == 3)) {
            fStack_264 = *(float *)(iStack_20 + 0x20) - *(float *)(param_1 + 0x20);
            afStack_260[0] = *(float *)(iStack_20 + 0x24) - *(float *)(param_1 + 0x24);
            afStack_260[1] = *(float *)(iStack_20 + 0x28) - *(float *)(param_1 + 0x28);
            fStack_234 = fStack_264;
            afStack_260[(uint)bVar9 * -2 + 0xc] = afStack_260[(uint)bVar9 * -2];
            afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
                 afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            if (SQRT(fStack_22c * fStack_22c + fStack_234 * fStack_234 + fStack_230 * fStack_230) <
                (float)_DAT_005ee70a) {
              iVar4 = *(int *)(param_1 + 0x10b34) + 1;
              *(int *)(param_1 + 0x10b34) = iVar4;
              if (3 < iVar4) {
                *(uint *)(param_1 + 0x10b34) = 0;
              }
              *(uint *)(param_1 + 0x10b38) = 0x41200000;
            }
          }
          else if ((*(float *)(param_1 + 0x10b38) <= 0.0) &&
                  (iVar4 = *(int *)(param_1 + 0x10b34) + 1, *(int *)(param_1 + 0x10b34) = iVar4,
                  3 < iVar4)) {
            *(uint *)(param_1 + 0x10b34) = 0;
          }
        }
        iVar4 = iStack_20;
        fStack_268 = 0x40400000;
        fStack_54 = 0x40400000;
        *(uint *)(param_1 + 0x2510) = 0;
        *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
        *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
        uStack_270 = 0;
        uStack_26c = 0;
        uVar8 = (**(code **)(*(int *)(iStack_20 + 0x2b0) + 0xcc))
                          (iStack_20,afStack_350 + 0x38,0x3f000000,0x3e32b8c2);
        iVar6 = FUN_00423000(param_1,(float *)(iVar4 + 0x20),uVar8);
        if (iVar6 < 0) {
          FUN_00436710(PTR_DAT_00609ed0,"%s gave up chase - I'm confused\n",param_1);
          FUN_00503620(param_1 + 0x2b4,0,1);
        }
        else if (iVar6 < 1) {
          iVar6 = FUN_0040c8f0(*(uint *)(param_1 + 0x10b24),_DAT_026535b0);
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
            if (*(int *)(param_1 + 0x10af8) == 1) {
              fStack_2c = 10.0;
            }
            if (*(int *)(param_1 + 0x10af8) == 2) {
              fStack_2c = 10.0;
            }
            iStack_48 = param_1 + 0x2b4;
            if (fStack_2c < fStack_38) {
              FUN_005838f0();
              uStack_294 = uStack_1b0;
              afStack_350[(uint)bVar9 * -2 + 0x30] = afStack_260[(uint)bVar9 * -2 + 0x2d];
              afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31] =
                   afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e];
              fStack_14 = (float)FUN_0040d0c0();
              if (ABS(fStack_14) < (float)_DAT_005ee71a) {
                FUN_00503620(iStack_48,8,1);
                iVar4 = FUN_0040d060();
                if (iVar4 != 0) {
                  FUN_0058d060();
                }
                iVar6 = 0;
                for (iVar4 = 0; iVar4 < *(int *)(0x01E661B8 + 0x150fec); iVar4 = iVar4 + 1) {
                  iVar7 = FUN_0040c8f0(*(uint *)(iVar6 + 0x150ff0 + 0x01E661B8),
                                       _DAT_02662d54);
                  if (((iVar7 != 0) && (iVar7 != param_1)) &&
                     (iVar7 = FUN_005035c0(), *(int *)(iVar7 + 0x24) == 8)) {
                    iVar4 = FUN_0040cfc0(0,2);
                    if (iVar4 == 1) {
                      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + _DAT_005ee72a;
                    }
                    if (iVar4 == 2) {
                      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + _DAT_005ee72e;
                    }
                    break;
                  }
                  iVar6 = iVar6 + 4;
                }
              }
            }
            else if ((fStack_38 < 0x40400000 * _DAT_005ee712) && (uStack_1c == 0xf)) {
              FUN_00503620(iStack_48,0,1);
            }
          }
        }
        else {
          if ((*(int *)(param_1 + 0x10af8) == 2) &&
             ((*(int *)(param_1 + 0x10b34) == 1 || (*(int *)(param_1 + 0x10b34) == 3))))
          goto LAB_0058bbb2;
          if (*(float *)(param_1 + 0x10a74) <= 0.0) {
            iVar4 = FUN_0040cfc0(0,2);
            if (iVar4 == 0) {
              FUN_00503620(param_1 + 0x2b4,2,1);
            }
            if (iVar4 == 1) {
              FUN_00503620(param_1 + 0x2b4,3,1);
            }
            if (iVar4 == 2) {
              FUN_00503620(param_1 + 0x2b4,4,1);
            }
            *(uint *)(param_1 + 0x10a74) = 0x3f800000;
            iVar4 = FUN_0040d060();
            if (iVar4 != 0) {
              FUN_0058d060();
            }
          }
        }
        fVar2 = *(float *)(param_1 + 0x10b18) - param_2;
        *(float *)(param_1 + 0x10b18) = fVar2;
        if (fVar2 < 0.0) {
          FUN_0058d060();
        }
        goto LAB_0058bbb2;
      }
LAB_0058c6b6:
      FUN_00503620(param_1 + 0x2b4,0,1);
    }
    else {
      iStack_3c = param_1 + 0x2b4;
      if (uStack_1c < 5) {
        FUN_004222d0();
        fStack_41c = (float)FUN_0040cf60(0x40e00000,0x41700000);
        iStack_3ec = param_1;
        iStack_3e8 = param_1;
        fStack_14 = fStack_41c;
        FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x10b04) * 0x30 + iStack_24,0x3ecccccd,
                     auStack_420);
        pfVar12 = afStack_260 + 0x47;
        afStack_144[0] = (float)uStack_2d0;
        afStack_260[(uint)bVar9 * -2 + 0x48] = afStack_350[(uint)bVar9 * -2 + 0x21];
        afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x49] =
             afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22];
        FUN_00408d70(param_1,pfVar12);
        pfVar12 = afStack_260 + 0x5f;
        afStack_e4[0] = (float)uStack_108;
        afStack_260[(uint)bVar9 * -2 + 0x60] = afStack_260[(uint)bVar9 * -2 + 0x57];
        iVar4 = param_1;
        afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x61] =
             afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x58];
        FUN_00488110(iVar4,pfVar12);
        if ((*(int *)(param_1 + 0x10a78) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0x114))(),
           iVar4 != 0)) {
          FUN_00503620(iStack_3c,7,1);
        }
        goto LAB_0058bbb2;
      }
      if (uStack_1c < 0xe) {
        if (uStack_1c < 8) goto LAB_0058bbb2;
        if (8 < uStack_1c) {
          if (((uStack_1c == 0xd) && (*(int *)(param_1 + 0x10a64) == 0)) &&
             (*(int *)(param_1 + 0xdc) == 0)) {
            FUN_005469a0(iStack_3c,0);
            pfVar12 = afStack_260 + 0x32;
            afStack_198[0] = (float)uStack_6c;
            afStack_260[(uint)bVar9 * -2 + 0x33] = afStack_260[(uint)bVar9 * -2 + 0x7e];
            afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34] =
                 afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x7f];
            FUN_00408d70(param_1,pfVar12);
            uVar14 = ZEXT48(afStack_260 + 0x59);
            afStack_fc[0] = (float)uStack_180;
            afStack_260[(uint)bVar9 * -2 + 0x5a] = afStack_260[(uint)bVar9 * -2 + 0x39];
            uVar8 = 0x01CB8284;
            afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x5b] =
                 afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3a];
            FUN_004c9ad0(uVar8,uVar14);
            *(uint *)(param_1 + 0x10a64) = 1;
          }
          goto LAB_0058bbb2;
        }
        if (*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) != *(int *)(param_1 + 0x10a78)) {
          FUN_004222d0();
          fStack_458 = (float)FUN_0040cf60(0x40e00000,0x41700000);
          iStack_428 = param_1;
          iStack_424 = param_1;
          fStack_14 = fStack_458;
          FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x10b08) * 0x30 + iStack_24,0x3f800000,
                       auStack_45c);
          pfVar12 = afStack_260 + 5;
          afStack_24c[0] = (float)uStack_78;
          afStack_260[(uint)bVar9 * -2 + 6] = afStack_260[(uint)bVar9 * -2 + 0x7b];
          afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
               afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x7c];
          FUN_00408d70(param_1,pfVar12);
          pfVar12 = afStack_260 + 8;
          afStack_240[0] = (float)uStack_384;
          afStack_260[(uint)bVar9 * -2 + 9] = afStack_3a4[(uint)bVar9 * -2 + 9];
          iVar4 = param_1;
          afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
               afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
          FUN_00488110(iVar4,pfVar12);
          FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x10b04) * 0x30 + iStack_24,0x3f800000,
                       auStack_45c);
          pfVar12 = afStack_3a4 + 2;
          afStack_3a4[2] = (float)uStack_36c;
          afStack_3a4[(uint)bVar9 * -2 + 3] = afStack_3a4[(uint)bVar9 * -2 + 0xf];
          afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
               afStack_3a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
          FUN_00408d70(param_1,pfVar12);
          pfVar12 = afStack_260 + 0x14;
          afStack_210[0] = (float)uStack_f0;
          afStack_260[(uint)bVar9 * -2 + 0x15] = afStack_260[(uint)bVar9 * -2 + 0x5d];
          iVar4 = param_1;
          afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
               afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x5e];
          FUN_00488110(iVar4,pfVar12);
          FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x10b00) * 0x30 + iStack_24,0x3f800000,
                       auStack_45c);
          pfVar12 = afStack_350 + 0x1d;
          auStack_2dc[0] = uStack_33c;
          afStack_350[(uint)bVar9 * -2 + 0x1e] = afStack_350[(uint)bVar9 * -2 + 6];
          afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f] =
               afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
          FUN_00408d70(param_1,pfVar12);
          pfVar12 = afStack_260 + 0x1a;
          afStack_1f8[0] = (float)uStack_15c;
          afStack_260[(uint)bVar9 * -2 + 0x1b] = afStack_260[(uint)bVar9 * -2 + 0x42];
          iVar4 = param_1;
          afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c] =
               afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x43];
          FUN_00488110(iVar4,pfVar12);
        }
        if ((*(int *)(param_1 + 0x10a78) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0x114))(),
           iVar4 != 0)) {
          FUN_00503620(param_1 + 0x2b4,7,1);
        }
LAB_0058c173:
        if (*(int *)(param_1 + 0x10a78) != *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
          FUN_004222d0();
          fStack_3e0 = (float)FUN_0040cf60(0x40e00000,0x41700000);
          iStack_3b0 = param_1;
          iStack_3ac = param_1;
          fStack_14 = fStack_3e0;
          FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x10b08) * 0x30 + param_1 + 0x1134,
                       0x3ecccccd,auStack_3e4);
          pfVar12 = afStack_350 + 0x29;
          auStack_2ac[0] = uStack_18c;
          afStack_350[(uint)bVar9 * -2 + 0x2a] = afStack_260[(uint)bVar9 * -2 + 0x36];
          afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b] =
               afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x37];
          FUN_00408d70(param_1,pfVar12);
          pfVar12 = afStack_350 + 0x2c;
          auStack_2a0[0] = uStack_120;
          afStack_350[(uint)bVar9 * -2 + 0x2d] = afStack_260[(uint)bVar9 * -2 + 0x51];
          iVar4 = param_1;
          afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e] =
               afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x52];
          FUN_00488110(iVar4,pfVar12);
        }
        if ((*(int *)(param_1 + 0x10a78) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0x114))(),
           iVar4 != 0)) {
          FUN_00503620(param_1 + 0x2b4,7,1);
        }
        goto LAB_0058bbb2;
      }
      if (0xe < uStack_1c) {
        if (0xf < uStack_1c) {
          if (uStack_1c != 0x13) goto LAB_0058bbb2;
          goto LAB_0058bb9a;
        }
        goto LAB_0058c6d9;
      }
LAB_0058c0f5:
      iVar4 = FUN_00488970(param_1,param_2);
      if (iVar4 == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
        iVar4 = *(int *)(param_1 + 0x10a78);
        if (iVar4 == 0) goto LAB_0058bbb2;
        if (*(int *)(param_1 + 0x10b24) != 0) {
          fStack_27c = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_278 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_274 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_324 = fStack_27c;
          afStack_350[(uint)bVar9 * -2 + 0xc] = afStack_350[(uint)bVar9 * -2 + 0x36];
          afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
               afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x37];
          fStack_34 = SQRT(fStack_31c * fStack_31c +
                           fStack_324 * fStack_324 + fStack_320 * fStack_320);
          if ((*(float *)(param_1 + 0x10a70) < fStack_34) || ((float)_DAT_005ee702 < fStack_34)) {
            *(uint *)(param_1 + 0x10a78) = 0;
            goto LAB_0058bbb2;
          }
        }
        iVar4 = FUN_0040c8f0(*(uint *)(param_1 + 0x10b24),_DAT_026535b0);
        if ((iVar4 != 0) && (uStack_1c == 0xe)) goto LAB_0058c6b6;
        if (*(int *)(param_1 + 0x10a78) == 0) goto LAB_0058bbb2;
        iVar4 = FUN_0040d060();
        if (iVar4 != 0) {
          FUN_0058d060();
        }
        if (uStack_1c == 0xe) {
          FUN_00503620(param_1 + 0x2b4,0xf,1);
          goto LAB_0058bbb2;
        }
      }
      else if (uStack_1c == 0xe) {
        FUN_00503620(param_1 + 0x2b4,0xf,1);
        goto LAB_0058bbb2;
      }
      FUN_00503620(param_1 + 0x2b4,1,1);
    }
    goto LAB_0058bbb2;
  }
  uVar1 = *(uint *)(param_1 + 0x27ac);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) {
LAB_0058bb87:
        uVar13 = 0x10000000f;
      }
      else {
        uVar13 = 0x100000001;
      }
    }
    else {
LAB_0058be7b:
      uVar13 = 0x100000000;
    }
LAB_0058bb92:
    FUN_00503620(param_1 + 0x2b4,uVar13);
  }
  else {
    if (uVar1 < 3) {
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) goto LAB_0058bb87;
      if (*(float *)(param_1 + 0x2598) <= ABS(*(float *)(param_1 + 0x2578))) {
        uVar13 = 0x100000001;
      }
      else {
        uVar13 = 0x100000008;
      }
      goto LAB_0058bb92;
    }
    if (uVar1 != 3) goto LAB_0058be7b;
    FUN_00503620(param_1 + 0x2b4,0,1);
    FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
  }
LAB_0058bb9a:
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
LAB_0058bbb2:
  if ((uStack_1c == 0x13) && (*(int *)(param_1 + 0x2828) != 0)) {
    iVar4 = FUN_00550b70();
    if (iVar4 == 0) {
      uVar8 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"werewolf-eat.wav");
      *(uint *)(param_1 + 0x10b20) = uVar8;
    }
  }
  else {
    FUN_00551050();
  }
  fStack_28 = 1.0;
  if (*(int *)(param_1 + 0x10af8) == 0) {
    fStack_28 = 0.75;
  }
  dVar3 = _DAT_005ee73a;
  if ((uStack_1c != 0xe) && (uStack_1c != 0xf)) {
    dVar3 = _DAT_005ee732;
  }
  *(float *)(param_1 + 0x3434) = fStack_28 * (float)dVar3;
  if (0.0 < *(float *)(param_1 + 0x10a74)) {
    *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
  }
  iVar4 = FUN_005035c0();
  iVar4 = *(int *)(iVar4 + 0x24);
  if (((((iVar4 != 0xd) && (iVar4 != 0)) && (iVar4 != 0xe)) && (iVar4 != 0x14)) ||
     (*(int *)(param_1 + 0xdc) != 0)) {
    if ((*(int *)(param_1 + 0x10a78) != 0) &&
       (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xfc))(),
       iVar4 == param_1)) {
      FUN_00537e30(0x01E661B8,*(uint *)(param_1 + 0x10a78));
    }
    FUN_00423a10(param_1,param_2);
    fStack_12c = *(float *)(param_1 + 0x2588) * param_2;
    fStack_128 = *(float *)(param_1 + 0x258c) * param_2;
    fStack_124 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_84 = fStack_12c;
    afStack_260[(uint)bVar9 * -2 + 0x78] = afStack_260[(uint)bVar9 * -2 + 0x4e];
    afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x79] =
         afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x4f];
    fStack_150 = fStack_84 + *(float *)(param_1 + 0x2508);
    fStack_14c = fStack_80 + *(float *)(param_1 + 0x250c);
    fStack_148 = fStack_7c + *(float *)(param_1 + 0x2510);
    fStack_288 = fStack_150;
    afStack_350[(uint)bVar9 * -2 + 0x33] = afStack_260[(uint)bVar9 * -2 + 0x45];
    afStack_350[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34] =
         afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x46];
    fStack_138 = fStack_288 + *(float *)(param_1 + 0x257c);
    fStack_134 = fStack_284 + *(float *)(param_1 + 0x2580);
    fStack_130 = fStack_280 + *(float *)(param_1 + 0x2584);
    afStack_174[0] = fStack_138;
    afStack_260[(uint)bVar9 * -2 + 0x3c] = afStack_260[(uint)bVar9 * -2 + 0x4b];
    afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3d] =
         afStack_260[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x4c];
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x250c);
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    FUN_00423a60(param_1,afStack_260 + 0x3b);
  }
  FUN_00424470();
  FUN_00544f00();
  FUN_00429e90(param_1,param_2);
  FUN_0058dd00();
  *(float *)(param_1 + 0x10b3c) = param_2 * (float)_DAT_005ee742 + *(float *)(param_1 + 0x10b3c);
  return;
}
