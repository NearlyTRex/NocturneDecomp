// Name: FUN_00412f40
// Address: 00412f40
// Address Range: [[00412f40, 00413c61]]
// Convention: unknown
// Signature: void FUN_00412f40(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412f40(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1228 [997];
  uint *puVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte auStack_27c [4];
  float fStack_278;
  int iStack_248;
  int iStack_244;
  uint uStack_240;
  float afStack_23c [4];
  float fStack_22c;
  uint uStack_228;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float afStack_1f8 [3];
  float fStack_1ec;
  uint uStack_1e0;
  float fStack_1dc;
  float afStack_1d4 [4];
  float afStack_1c4 [4];
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float afStack_18c [3];
  uint uStack_180;
  uint uStack_174;
  float afStack_168 [3];
  float fStack_15c;
  uint uStack_158;
  float fStack_154;
  float afStack_150 [3];
  float afStack_144 [3];
  uint uStack_138;
  uint uStack_12c;
  uint uStack_120;
  float fStack_11c;
  float fStack_114;
  uint uStack_110;
  uint uStack_10c;
  float afStack_108 [4];
  float afStack_f8 [4];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float afStack_d8 [3];
  float afStack_cc [3];
  uint uStack_c0;
  uint uStack_b4;
  float afStack_a8 [3];
  uint uStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float afStack_84 [3];
  float afStack_78 [3];
  float afStack_6c [3];
  uint uStack_60;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  float *pfStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar3 = FUN_004244b0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  fStack_54 = param_2 * *(float *)(param_1 + 0x10a60);
  while (0.0 < fStack_54) {
    uVar9 = FUN_005030c0(param_1 + 0x2b4,afStack_98 + 0x11);
    FUN_0042aa00(param_1,uVar9);
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
  iVar3 = param_1 + 0x2b4;
  iVar4 = FUN_005035c0(iVar3);
  iVar4 = *(int *)(iVar4 + 0x24);
  iStack_1c = iVar4;
  iVar5 = FUN_004287f0(param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar4) {
    case 0:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      if (*(int *)(param_1 + 0x10a78) == 0) {
        iVar4 = FUN_00488970(param_1,param_2);
        if (iVar4 != 0) {
          FUN_00503620(iVar3,1,1);
        }
      }
      else {
        iVar3 = FUN_0040d060(0x3e800000);
        if ((iVar3 != 0) &&
           (iVar3 = FUN_0040c840(*(uint *)(param_1 + 0x10a78),"CHero"), iVar3 != 0))
        {
          iVar4 = 0;
          iVar3 = 0;
          while ((iVar3 < *(int *)(0x01E661B8 + 0x150fec) &&
                 ((iVar5 = FUN_0040c8f0(*(uint *)(iVar4 + 0x150ff0 + 0x01E661B8),
                                        DAT_007bc820), iVar5 == 0 ||
                  (*(int *)(iVar5 + 0x10b94) == 0))))) {
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 4;
          }
          if (iVar3 == *(int *)(0x01E661B8 + 0x150fec)) {
            FUN_00503620(param_1 + 0x2b4,0xd,1);
            iVar3 = *(int *)(param_1 + 0x10a78);
            *(uint *)(param_1 + 0x10b94) = 1;
            if ((uint *)(param_1 + 0x10b9c) != (uint *)(iVar3 + 0x20)) {
              *(uint *)(param_1 + 0x10b9c) = *(uint *)(iVar3 + 0x20);
              *(uint *)(param_1 + 0x10ba0) = *(uint *)(iVar3 + 0x24);
              *(uint *)(param_1 + 0x10ba4) = *(uint *)(iVar3 + 0x28);
            }
            iStack_1c = 0xd;
            *(uint *)(param_1 + 0x10b98) = 0;
            (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"batman-disappear.wav")
            ;
            break;
          }
        }
        iVar3 = *(int *)(param_1 + 0x10a78);
        fStack_1b0 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_1ac = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_1a8 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_21c = fStack_1b0;
        afStack_23c[(uint)bVar6 * -2 + 9] = afStack_1c4[(uint)bVar6 * -2 + 6];
        afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        if (SQRT(fStack_214 * fStack_214 + fStack_21c * fStack_21c + fStack_218 * fStack_218) <
            0x40600000) {
          FUN_005838f0(afStack_23c + 8);
          uStack_120 = afStack_108[3];
          afStack_1c4[(uint)bVar6 * -2 + 0x2a] = afStack_f8[(uint)bVar6 * -2];
          afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b] =
               afStack_f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          fStack_14 = (float)FUN_0040d0c0(fStack_11c - *(float *)(param_1 + 0x34));
          if (ABS(fStack_14) < (float)_DAT_005cbb4e) {
            FUN_00503620(param_1 + 0x2b4,3,1);
          }
        }
        FUN_00412ec0(param_1);
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      fVar2 = 0x40600000;
      iStack_44 = param_1 + 0x2b4;
      if (*(int *)(param_1 + 0x10a78) == 0) {
        iVar3 = FUN_00488970(param_1,param_2);
        if (iVar3 == 0) {
          FUN_00503620(iStack_44,0,1);
        }
        else {
          FUN_00503620(iStack_44,1,1);
        }
      }
      else {
        fStack_48 = 0x40600000;
        *(uint *)(param_1 + 0x2510) = 0;
        *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
        *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
        afStack_a8[0] = 0.0;
        afStack_a8[2] = fVar2;
        afStack_a8[1] = 0.0;
        uVar9 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                          (*(int *)(param_1 + 0x10a78),afStack_f8 + 0x14,0x3f000000,0x3e32b8c2);
        iVar3 = FUN_00423000(param_1,*(int *)(param_1 + 0x10a78) + 0x20,uVar9);
        if (-1 < iVar3) {
          iVar3 = *(int *)(param_1 + 0x10a78);
          afStack_f8[2] = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
          afStack_f8[3] = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
          fStack_e8 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
          fStack_15c = afStack_f8[2];
          afStack_1c4[(uint)bVar6 * -2 + 0x1b] = afStack_f8[(uint)bVar6 * -2 + 3];
          afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
               afStack_f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          fStack_18 = SQRT(fStack_154 * fStack_154 + fStack_15c * fStack_15c);
          uStack_158 = 0;
          fStack_50 = fStack_18;
          if ((fStack_18 <= fStack_48) && (*(float *)(param_1 + 0x10a74) <= 0.0)) {
            fStack_210 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_20c = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_208 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_168[0] = fStack_210;
            afStack_1c4[(uint)bVar6 * -2 + 0x18] = afStack_23c[(uint)bVar6 * -2 + 0xc];
            afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
                 afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
            FUN_005838f0(afStack_1c4 + 0x17);
            uStack_1e0 = uStack_60;
            afStack_23c[(uint)bVar6 * -2 + 0x18] = afStack_98[(uint)bVar6 * -2 + 0xf];
            afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
                 afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
            fStack_14 = (float)FUN_0040d0c0(fStack_1dc - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005cbb4e) {
              FUN_00503620(iStack_44,3,1);
              *(uint *)(param_1 + 0x10a74) = 0x3f800000;
              iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10bac));
              if ((iVar3 == 0) &&
                 (iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10bb0)), iVar3 == 0)) {
                uVar9 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                                  (param_1,"batman-attack?.wav");
                *(uint *)(param_1 + 0x10bb0) = uVar9;
              }
            }
          }
          if (*(float *)(param_1 + 0x10a70) < fStack_50) {
            FUN_00503620(param_1 + 0x2b4,0,1);
          }
        }
      }
      break;
    case 3:
      FUN_004222d0(auStack_27c);
      fStack_278 = (float)FUN_0040cf60(0x40e00000,0x41700000);
      iStack_248 = param_1;
      iStack_244 = param_1;
      fStack_14 = fStack_278;
      FUN_00591530(&DAT_0265370c,DAT_007bc7c0 * 0x30 + param_1 + 0x1134,0x3ecccccd,auStack_27c);
      pfVar8 = afStack_98 + 5;
      afStack_84[0] = (float)uStack_228;
      afStack_98[(uint)bVar6 * -2 + 6] = afStack_23c[(uint)bVar6 * -2 + 6];
      afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      FUN_00408d70(param_1,pfVar8);
      pfVar8 = afStack_98 + 8;
      afStack_78[0] = (float)uStack_240;
      afStack_98[(uint)bVar6 * -2 + 9] = afStack_23c[(uint)bVar6 * -2];
      iVar3 = param_1;
      afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      FUN_00488110(iVar3,pfVar8);
      break;
    case 8:
      if ((*(int *)(param_1 + 0x10a64) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_005469a0(iVar3,0);
        pfVar8 = afStack_1c4 + 0x20;
        afStack_144[0] = (float)uStack_138;
        afStack_1c4[(uint)bVar6 * -2 + 0x21] = afStack_1c4[(uint)bVar6 * -2 + 0x24];
        afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22] =
             afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25];
        FUN_00408d70(param_1,pfVar8);
        uVar11 = 0;
        pfVar8 = afStack_1c4 + 0x1d;
        afStack_150[0] = (float)uStack_12c;
        afStack_1c4[(uint)bVar6 * -2 + 0x1e] = afStack_1c4[(uint)bVar6 * -2 + 0x27];
        uVar9 = 0x01CB8284;
        afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
             afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28];
        FUN_004c9ad0(uVar9,pfVar8,uVar11);
        *(uint *)(param_1 + 0x10a64) = 1;
      }
      break;
    case 9:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      if ((*(int *)(param_1 + 0x10a78) != 0) ||
         (iVar3 = FUN_0048e340(0x01C38BC0,param_1 + 0x10af8), iVar3 != 0)) {
        FUN_00503620(param_1 + 0x2b4,0xb,1);
        iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10bac));
        if ((iVar3 == 0) &&
           ((iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10bb0)), iVar3 == 0 &&
            (iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10ba8)), iVar3 == 0)))) {
          uVar9 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                            (param_1,"batman-alert.wav");
          *(uint *)(param_1 + 0x10ba8) = uVar9;
        }
      }
      break;
    case 0xb:
      if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2574) + 1.0) {
        FUN_00503620(iVar3,0xc,1);
      }
      break;
    case 0xd:
      switch(*(uint *)(param_1 + 0x10b94)) {
      case 0:
        FUN_00503620(iVar3,0,1);
        break;
      case 1:
        fVar2 = *(float *)(param_1 + 0x10b98) + param_2;
        *(float *)(param_1 + 0x10b98) = fVar2;
        if (0x3F800000 < fVar2) {
          *(uint *)(param_1 + 0x10b94) = 2;
          *(float *)(param_1 + 0x10b98) = 0x3F800000;
        }
        afStack_108[0] = 0.0;
        afStack_108[1] = 3.0;
        afStack_108[2] = 0.0;
        iStack_34 = FUN_00547890(param_1 + 0x2b4);
        iStack_20 = 0;
        iVar3 = param_1 + 0x2b4;
        if (0 < *(int *)(iStack_34 + 0x1d1f8)) {
          do {
            iStack_3c = iVar3;
            FUN_00546a90(iStack_3c,iStack_20);
            pfVar8 = afStack_f8 + 0xb;
            afStack_cc[0] = (float)uStack_c0;
            afStack_f8[(uint)bVar6 * -2 + 0xc] = afStack_f8[(uint)bVar6 * -2 + 0xf];
            afStack_f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
                 afStack_f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
            FUN_00408d70(param_1,pfVar8);
            uVar11 = 0xffff;
            pfVar8 = afStack_1c4 + 0x2f;
            uVar9 = 0x3f000000;
            afStack_1f8[0] = (float)uStack_b4;
            afStack_23c[(uint)bVar6 * -2 + 0x12] = afStack_f8[(uint)bVar6 * -2 + 0x12];
            afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
                 afStack_f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
            iVar4 = iStack_20 + 1;
            FUN_0049d230(0x01C3DEB4,afStack_23c + 0x11,uVar9,pfVar8,uVar11);
            iVar3 = iStack_3c;
            iStack_20 = iVar4;
          } while (iVar4 < *(int *)(iStack_34 + 0x1d1f8));
        }
        break;
      case 2:
        iStack_4c = 1;
        pfStack_28 = (float *)(param_1 + 0x10b9c);
        iStack_2c = 0;
        for (iStack_30 = 0; fVar2 = 0x3F800000, iStack_30 < *(int *)(0x01E661B8 + 0x14f0a8);
            iStack_30 = iStack_30 + 1) {
          iVar3 = *(int *)(0x01E661B8 + iStack_2c + 0x14f0ac);
          if (((iVar3 != 0) && (iVar3 != param_1)) &&
             (iVar4 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3), iVar4 < 1)) {
            afStack_98[2] = *(float *)(iVar3 + 0x20) - *pfStack_28;
            afStack_98[3] = *(float *)(iVar3 + 0x24) - pfStack_28[1];
            fStack_88 = *(float *)(iVar3 + 0x28) - pfStack_28[2];
            fStack_198 = afStack_98[2];
            afStack_1c4[(uint)bVar6 * -2 + 0xc] = afStack_98[(uint)bVar6 * -2 + 3];
            afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
                 afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            if (SQRT(fStack_190 * fStack_190 + fStack_198 * fStack_198 + fStack_194 * fStack_194) <
                (float)_DAT_005cbb56) goto switchD_004135d2_default;
          }
          iStack_2c = iStack_2c + 4;
        }
        if (iStack_4c != 0) {
          *(uint *)(param_1 + 0x10b94) = 3;
          *(float *)(param_1 + 0x10b98) = fVar2;
          *(float *)(param_1 + 0x20) = *pfStack_28;
          *(float *)(param_1 + 0x24) = pfStack_28[1];
          *(float *)(param_1 + 0x28) = pfStack_28[2];
          iVar3 = *(int *)(param_1 + 0x10a78);
          if (iVar3 != 0) {
            fStack_204 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_200 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_1fc = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_6c[0] = fStack_204;
            afStack_98[(uint)bVar6 * -2 + 0xc] = afStack_23c[(uint)bVar6 * -2 + 0xf];
            afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
                 afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
            FUN_005838f0(afStack_98 + 0xb);
            fStack_114 = fStack_1ec;
            afStack_1c4[(uint)bVar6 * -2 + 0x2d] = afStack_23c[(uint)bVar6 * -2 + 0x15];
            afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e] =
                 afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
            if ((float *)(param_1 + 0x30) != afStack_1c4 + 0x2c) {
              *(float *)(param_1 + 0x30) = fStack_114;
              *(uint *)(param_1 + 0x34) = uStack_110;
              *(uint *)(param_1 + 0x38) = uStack_10c;
            }
            *(uint *)(param_1 + 0x38) = 0;
            *(uint *)(param_1 + 0x30) = 0;
          }
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"batman-disappear.wav");
        }
        break;
      case 3:
        afStack_1d4[0] = 0.0;
        afStack_1d4[1] = 3.0;
        afStack_1d4[2] = 0.0;
        iStack_38 = FUN_00547890(iVar3);
        iStack_24 = 0;
        if (0 < *(int *)(iStack_38 + 0x1d1f8)) {
          do {
            iStack_40 = iVar3;
            FUN_00546a90(iStack_40,iStack_24);
            pfVar8 = afStack_1c4 + 0xe;
            afStack_18c[0] = (float)uStack_180;
            afStack_1c4[(uint)bVar6 * -2 + 0xf] = afStack_1c4[(uint)bVar6 * -2 + 0x12];
            afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
                 afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
            FUN_00408d70(param_1,pfVar8);
            uVar10 = 0xffff;
            pfVar8 = afStack_23c + 0x1a;
            uVar11 = 0x3f000000;
            puVar7 = &uStack_9c;
            uStack_9c = uStack_174;
            afStack_98[(uint)bVar6 * -2] = afStack_1c4[(uint)bVar6 * -2 + 0x15];
            uVar9 = 0x01C3DEB4;
            afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
            FUN_0049d230(uVar9,puVar7,uVar11,pfVar8,uVar10);
            iStack_24 = iStack_24 + 1;
            iVar3 = iStack_40;
          } while (iStack_24 < *(int *)(iStack_38 + 0x1d1f8));
        }
        fVar2 = *(float *)(param_1 + 0x10b98) - param_2;
        *(float *)(param_1 + 0x10b98) = fVar2;
        if (fVar2 < 0.0) {
          *(uint *)(param_1 + 0x10b98) = 0;
          *(uint *)(param_1 + 0x10b94) = 0;
          FUN_00412ec0(param_1);
        }
      }
    }
    goto switchD_004135d2_default;
  }
  uVar1 = *(uint *)(param_1 + 0x27ac);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00413014:
      uVar9 = 1;
    }
    else {
LAB_00413214:
      uVar9 = 0;
    }
    FUN_00503620(param_1 + 0x2b4,uVar9,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00413014;
    if (uVar1 != 3) goto LAB_00413214;
    FUN_00503620(param_1 + 0x2b4,0,1);
    FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
switchD_004135d2_default:
  if (0.0 < *(float *)(param_1 + 0x10a74)) {
    *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
  }
  iVar3 = FUN_00424430(param_1);
  if ((iVar3 != 0) && (iStack_1c != 9)) {
    FUN_00423a10(param_1,param_2);
    afStack_23c[2] = *(float *)(param_1 + 0x2588) * param_2;
    afStack_23c[3] = *(float *)(param_1 + 0x258c) * param_2;
    fStack_22c = *(float *)(param_1 + 0x2590) * param_2;
    afStack_1c4[2] = afStack_23c[2];
    afStack_1c4[(uint)bVar6 * -2 + 3] = afStack_23c[(uint)bVar6 * -2 + 3];
    afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    fStack_e4 = afStack_1c4[2] + *(float *)(param_1 + 0x257c);
    fStack_e0 = afStack_1c4[3] + *(float *)(param_1 + 0x2580);
    fStack_dc = fStack_1b4 + *(float *)(param_1 + 0x2584);
    afStack_1d4[3] = fStack_e4;
    afStack_1c4[(uint)bVar6 * -2] = afStack_f8[(uint)bVar6 * -2 + 6];
    afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    fStack_1a4 = afStack_1d4[3] + *(float *)(param_1 + 0x2508);
    fStack_1a0 = afStack_1c4[0] + *(float *)(param_1 + 0x250c);
    fStack_19c = afStack_1c4[1] + *(float *)(param_1 + 0x2510);
    afStack_d8[0] = fStack_1a4;
    afStack_f8[(uint)bVar6 * -2 + 9] = afStack_1c4[(uint)bVar6 * -2 + 9];
    afStack_f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_1c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    *(uint *)(param_1 + 0x2510) = 0;
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x2510);
    FUN_00423a60(param_1,afStack_f8 + 8);
  }
  if (iStack_1c != 0xd) {
    *(uint *)(param_1 + 0x10b94) = 0;
  }
  FUN_00424470(param_1);
  FUN_00544f00(param_1 + 0x2b4);
  FUN_00429e90(param_1,param_2);
  return;
}
