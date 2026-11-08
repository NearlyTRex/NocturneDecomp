// Name: FUN_00412ba0
// Address: 00412ba0
// Address Range: [[00412ba0, 00413961]]
// Convention: unknown
// Signature: void FUN_00412ba0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412ba0(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1228 [982];
  float *pfVar7;
  uint *puVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte auStack_2b8 [4];
  uint uStack_2b4;
  int iStack_284;
  int iStack_280;
  byte auStack_27c [4];
  float fStack_278;
  int iStack_248;
  int iStack_244;
  uint uStack_240;
  float afStack_23c [5];
  float afStack_228 [3];
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float afStack_210 [3];
  uint uStack_204;
  uint uStack_1f8;
  uint uStack_1ec;
  uint uStack_1e0;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  float afStack_1bc [3];
  uint uStack_1b0;
  float fStack_1ac;
  uint uStack_1a4;
  uint uStack_198;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float afStack_174 [3];
  float afStack_168 [4];
  float afStack_158 [5];
  float fStack_144;
  uint uStack_140;
  float fStack_13c;
  float afStack_138 [3];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float afStack_120 [3];
  uint uStack_114;
  float fStack_110;
  float afStack_108 [3];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float afStack_f0 [4];
  float afStack_e0 [5];
  uint uStack_cc;
  uint uStack_c0;
  float afStack_b4 [3];
  float afStack_a8 [3];
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int iStack_48;
  float fStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  float *pfStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar3 = FUN_0042e1a0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_54 = param_2 * *(float *)(param_1 + 0xc1d0);
  while (0.0 < fStack_54) {
    uVar10 = FUN_00524270(param_1 + 0x158,afStack_98 + 0x11);
    FUN_00434a80(param_1,uVar10);
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
  if ((((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2e4) * 4) == 0) &&
       (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2dc) * 4) == 0)) ||
      (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2d0) * 4) == 0)) &&
     ((0.0 <= *(float *)(param_1 + 0xc268) &&
      (fVar2 = *(float *)(param_1 + 0xc268) + param_2, *(float *)(param_1 + 0xc268) = fVar2,
      (float)_DAT_005d3ac1 <= fVar2)))) {
    FUN_0042c010(auStack_2b8);
    uStack_2b4 = 0x461c3f9a;
    iStack_284 = param_1;
    iStack_280 = param_1;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x108))(param_1,auStack_2b8);
    *(uint *)(param_1 + 0xc268) = 0xbf800000;
  }
  iVar3 = param_1 + 0x158;
  iVar4 = FUN_00524770(iVar3);
  iVar4 = *(int *)(iVar4 + 0x24);
  iStack_18 = iVar4;
  iVar5 = FUN_00432240(param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar4) {
    case 0:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      if (*(int *)(param_1 + 0xc1e8) == 0) {
        iVar4 = FUN_004a0fe0(param_1,param_2);
        if (iVar4 != 0) {
          FUN_005247c0(iVar3,1,1);
        }
      }
      else {
        iVar3 = FUN_0040cd00(0x3e800000);
        if ((iVar3 != 0) &&
           (iVar3 = FUN_0040c550(*(uint *)(param_1 + 0xc1e8),"CHero"), iVar3 != 0)) {
          iVar4 = 0;
          iVar3 = 0;
          while ((iVar3 < *(int *)(0x01E82168 + 0x150fec) &&
                 ((iVar5 = FUN_0040c600(*(uint *)(iVar4 + 0x150ff0 + 0x01E82168),
                                        DAT_007c3820), iVar5 == 0 || (*(int *)(iVar5 + 0xc308) == 0)
                  )))) {
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 4;
          }
          if (iVar3 == *(int *)(0x01E82168 + 0x150fec)) {
            FUN_005247c0(param_1 + 0x158,0xd,1);
            iVar3 = *(int *)(param_1 + 0xc1e8);
            *(uint *)(param_1 + 0xc308) = 1;
            if ((uint *)(param_1 + 0xc310) != (uint *)(iVar3 + 0x20)) {
              *(uint *)(param_1 + 0xc310) = *(uint *)(iVar3 + 0x20);
              *(uint *)(param_1 + 0xc314) = *(uint *)(iVar3 + 0x24);
              *(uint *)(param_1 + 0xc318) = *(uint *)(iVar3 + 0x28);
            }
            iStack_18 = 0xd;
            *(uint *)(param_1 + 0xc30c) = 0;
            (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"batman-disappear.wav")
            ;
            break;
          }
        }
        iVar3 = *(int *)(param_1 + 0xc1e8);
        fStack_fc = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_f8 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_f4 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_1d4 = fStack_fc;
        afStack_23c[(uint)bVar6 * -2 + 0x1b] = afStack_158[(uint)bVar6 * -2 + 0x18];
        afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
             afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
        if (SQRT(fStack_1cc * fStack_1cc + fStack_1d4 * fStack_1d4 + fStack_1d0 * fStack_1d0) <
            0x40600000) {
          FUN_005a7520(afStack_23c + 0x1a);
          uStack_114 = uStack_1e0;
          afStack_158[(uint)bVar6 * -2 + 0x12] = afStack_23c[(uint)bVar6 * -2 + 0x18];
          afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
               afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
          fStack_14 = (float)FUN_0040cd60(fStack_110 - *(float *)(param_1 + 0x34));
          if (ABS(fStack_14) < (float)_DAT_005d3ac9) {
            FUN_005247c0(param_1 + 0x158,3,1);
          }
        }
        FUN_00412b20(param_1);
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      fVar2 = 0x40600000;
      iStack_40 = param_1 + 0x158;
      if (*(int *)(param_1 + 0xc1e8) == 0) {
        iVar3 = FUN_004a0fe0(param_1,param_2);
        if (iVar3 == 0) {
          FUN_005247c0(iStack_40,0,1);
        }
        else {
          FUN_005247c0(iStack_40,1,1);
        }
      }
      else {
        fStack_44 = 0x40600000;
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_a8[0] = 0.0;
        afStack_a8[2] = fVar2;
        afStack_a8[1] = 0.0;
        uVar10 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                           (*(int *)(param_1 + 0xc1e8),afStack_e0 + 0xe,0x3f000000,0x3e32b8c2);
        iVar3 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar10);
        if (-1 < iVar3) {
          iVar3 = *(int *)(param_1 + 0xc1e8);
          fStack_6c = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
          fStack_68 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
          fStack_64 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
          fStack_144 = fStack_6c;
          afStack_158[(uint)bVar6 * -2 + 6] = afStack_98[(uint)bVar6 * -2 + 0xc];
          afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
               afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
          fStack_50 = SQRT(fStack_13c * fStack_13c + fStack_144 * fStack_144);
          uStack_140 = 0;
          fStack_4c = fStack_50;
          if ((fStack_50 <= fStack_44) && (*(float *)(param_1 + 0xc1e4) <= 0.0)) {
            fStack_12c = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_128 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_124 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_1bc[0] = fStack_12c;
            afStack_23c[(uint)bVar6 * -2 + 0x21] = afStack_158[(uint)bVar6 * -2 + 0xc];
            afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22] =
                 afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
            FUN_005a7520(afStack_23c + 0x20);
            uStack_1b0 = uStack_198;
            afStack_23c[(uint)bVar6 * -2 + 0x24] = afStack_23c[(uint)bVar6 * -2 + 0x2a];
            afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
                 afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
            fStack_14 = (float)FUN_0040cd60(fStack_1ac - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005d3ac9) {
              FUN_005247c0(iStack_40,3,1);
              *(uint *)(param_1 + 0xc1e4) = 0x3f800000;
              iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc320));
              if ((iVar3 == 0) &&
                 (iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc324)), iVar3 == 0)) {
                uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                   (param_1,"batman-attack?.wav");
                *(uint *)(param_1 + 0xc324) = uVar10;
              }
            }
          }
          if (*(float *)(param_1 + 0xc1e0) < fStack_4c) {
            FUN_005247c0(param_1 + 0x158,0,1);
          }
        }
      }
      break;
    case 3:
      FUN_0042c010(auStack_27c);
      fStack_278 = (float)FUN_0040cc00(0x40e00000,0x41700000);
      iStack_248 = param_1;
      iStack_244 = param_1;
      fStack_14 = fStack_278;
      FUN_005b5080(&DAT_02c8af28,DAT_007c37c0 * 0x30 + param_1 + 0xfd8,0x3ecccccd,auStack_27c);
      puVar8 = &uStack_240;
      uStack_240 = uStack_204;
      afStack_23c[(uint)bVar6 * -2] = afStack_23c[(uint)bVar6 * -2 + 0xf];
      afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
      FUN_00408b40(param_1,puVar8);
      pfVar9 = afStack_158 + 0x14;
      afStack_108[0] = (float)uStack_1ec;
      afStack_158[(uint)bVar6 * -2 + 0x15] = afStack_23c[(uint)bVar6 * -2 + 0x15];
      iVar3 = param_1;
      afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
      FUN_004a0770(iVar3,pfVar9);
      break;
    case 8:
      if ((*(int *)(param_1 + 0xc1d4) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_00569040(iVar3,0);
        pfVar9 = afStack_158 + 8;
        afStack_138[0] = (float)uStack_1f8;
        afStack_158[(uint)bVar6 * -2 + 9] = afStack_23c[(uint)bVar6 * -2 + 0x12];
        afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
        FUN_00408b40(param_1,pfVar9);
        uVar12 = 0;
        pfVar9 = afStack_23c + 0xb;
        afStack_210[0] = (float)uStack_cc;
        afStack_23c[(uint)bVar6 * -2 + 0xc] = afStack_e0[(uint)bVar6 * -2 + 6];
        uVar10 = 0x01CD0E3C;
        afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
             afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        FUN_004e62e0(uVar10,pfVar9,uVar12);
        *(uint *)(param_1 + 0xc1d4) = 1;
      }
      break;
    case 9:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      if ((*(int *)(param_1 + 0xc1e8) != 0) ||
         (iVar3 = FUN_004a6c30(0x01C51D80,param_1 + 0xc26c), iVar3 != 0)) {
        FUN_005247c0(param_1 + 0x158,0xb,1);
        iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc320));
        if ((iVar3 == 0) &&
           ((iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc324)), iVar3 == 0 &&
            (iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc31c)), iVar3 == 0)))) {
          uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                             (param_1,"batman-alert.wav");
          *(uint *)(param_1 + 0xc31c) = uVar10;
        }
      }
      break;
    case 0xb:
      if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2504) + 1.0) {
        FUN_005247c0(iVar3,0xc,1);
      }
      break;
    case 0xd:
      switch(*(uint *)(param_1 + 0xc308)) {
      case 0:
        FUN_005247c0(iVar3,0,1);
        break;
      case 1:
        fVar2 = *(float *)(param_1 + 0xc30c) + param_2;
        *(float *)(param_1 + 0xc30c) = fVar2;
        if (0x3F800000 < fVar2) {
          *(uint *)(param_1 + 0xc308) = 2;
          *(float *)(param_1 + 0xc30c) = 0x3F800000;
        }
        afStack_f0[0] = 0.0;
        afStack_f0[1] = 3.0;
        afStack_f0[2] = 0.0;
        iStack_34 = FUN_00569f30(param_1 + 0x158);
        iStack_20 = 0;
        iVar3 = param_1 + 0x158;
        if (0 < *(int *)(iStack_34 + 0x1de78)) {
          do {
            iStack_30 = iVar3;
            FUN_00569130(iStack_30,iStack_20);
            pfVar9 = afStack_e0 + 0xb;
            afStack_b4[0] = afStack_168[3];
            afStack_e0[(uint)bVar6 * -2 + 0xc] = afStack_158[(uint)bVar6 * -2];
            afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
                 afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            FUN_00408b40(param_1,pfVar9);
            uVar12 = 0xffff;
            pfVar9 = afStack_158 + 0x1a;
            uVar10 = 0x3f000000;
            afStack_174[0] = afStack_158[2];
            afStack_23c[(uint)bVar6 * -2 + 0x33] = afStack_158[(uint)bVar6 * -2 + 3];
            afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x34] =
                 afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            iVar4 = iStack_20 + 1;
            FUN_004b5b30(0x01C57074,afStack_23c + 0x32,uVar10,pfVar9,uVar12);
            iVar3 = iStack_30;
            iStack_20 = iVar4;
          } while (iVar4 < *(int *)(iStack_34 + 0x1de78));
        }
        break;
      case 2:
        iStack_2c = 0;
        iStack_48 = 1;
        pfStack_24 = (float *)(param_1 + 0xc310);
        for (iStack_28 = 0; fVar2 = 0x3F800000, iStack_28 < *(int *)(0x01E82168 + 0x14f0a8);
            iStack_28 = iStack_28 + 1) {
          iVar3 = *(int *)(0x01E82168 + iStack_2c + 0x14f0ac);
          if (((iVar3 != 0) && (iVar3 != param_1)) &&
             (iVar4 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), iVar4 < 1)) {
            fStack_9c = *(float *)(iVar3 + 0x20) - *pfStack_24;
            afStack_98[0] = *(float *)(iVar3 + 0x24) - pfStack_24[1];
            afStack_98[1] = *(float *)(iVar3 + 0x28) - pfStack_24[2];
            fStack_21c = fStack_9c;
            afStack_23c[(uint)bVar6 * -2 + 9] = afStack_98[(uint)bVar6 * -2];
            afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
                 afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            if (SQRT(fStack_214 * fStack_214 + fStack_21c * fStack_21c + fStack_218 * fStack_218) <
                (float)_DAT_005d3ad1) goto switchD_004132d2_default;
          }
          iStack_2c = iStack_2c + 4;
        }
        if (iStack_48 != 0) {
          *(uint *)(param_1 + 0xc308) = 3;
          *(float *)(param_1 + 0xc30c) = fVar2;
          *(float *)(param_1 + 0x20) = *pfStack_24;
          *(float *)(param_1 + 0x24) = pfStack_24[1];
          *(float *)(param_1 + 0x28) = pfStack_24[2];
          iVar3 = *(int *)(param_1 + 0xc1e8);
          if (iVar3 != 0) {
            afStack_f0[3] = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            afStack_e0[0] = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            afStack_e0[1] = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_e0[2] = afStack_f0[3];
            afStack_e0[(uint)bVar6 * -2 + 3] = afStack_e0[(uint)bVar6 * -2];
            afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                 afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            FUN_005a7520(afStack_e0 + 2);
            fStack_1c8 = fStack_180;
            afStack_23c[(uint)bVar6 * -2 + 0x1e] = afStack_23c[(uint)bVar6 * -2 + 0x30];
            afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
                 afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31];
            if ((float *)(param_1 + 0x30) != afStack_23c + 0x1d) {
              *(float *)(param_1 + 0x30) = fStack_1c8;
              *(uint *)(param_1 + 0x34) = uStack_1c4;
              *(uint *)(param_1 + 0x38) = uStack_1c0;
            }
            *(uint *)(param_1 + 0x38) = 0;
            *(uint *)(param_1 + 0x30) = 0;
          }
          (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"batman-disappear.wav");
        }
        break;
      case 3:
        afStack_168[0] = 0.0;
        afStack_168[1] = 3.0;
        afStack_168[2] = 0.0;
        iStack_3c = FUN_00569f30(iVar3);
        iStack_1c = 0;
        if (0 < *(int *)(iStack_3c + 0x1de78)) {
          do {
            iStack_38 = iVar3;
            FUN_00569130(iStack_38,iStack_1c);
            pfVar9 = afStack_158 + 0xe;
            afStack_120[0] = (float)uStack_1a4;
            afStack_158[(uint)bVar6 * -2 + 0xf] = afStack_23c[(uint)bVar6 * -2 + 0x27];
            afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
                 afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28];
            FUN_00408b40(param_1,pfVar9);
            uVar11 = 0xffff;
            pfVar9 = afStack_23c + 0x35;
            uVar12 = 0x3f000000;
            pfVar7 = afStack_23c + 2;
            afStack_23c[2] = (float)uStack_c0;
            afStack_23c[(uint)bVar6 * -2 + 3] = afStack_e0[(uint)bVar6 * -2 + 9];
            uVar10 = 0x01C57074;
            afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                 afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
            FUN_004b5b30(uVar10,pfVar7,uVar12,pfVar9,uVar11);
            iStack_1c = iStack_1c + 1;
            iVar3 = iStack_38;
          } while (iStack_1c < *(int *)(iStack_3c + 0x1de78));
        }
        fVar2 = *(float *)(param_1 + 0xc30c) - param_2;
        *(float *)(param_1 + 0xc30c) = fVar2;
        if (fVar2 < 0.0) {
          *(uint *)(param_1 + 0xc30c) = 0;
          *(uint *)(param_1 + 0xc308) = 0;
          FUN_00412b20(param_1);
        }
      }
    }
    goto switchD_004132d2_default;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00412c9d:
      uVar10 = 1;
    }
    else {
LAB_00412f1d:
      uVar10 = 0;
    }
    FUN_005247c0(param_1 + 0x158,uVar10,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00412c9d;
    if (uVar1 != 3) goto LAB_00412f1d;
    FUN_005247c0(param_1 + 0x158,0,1);
    FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_004132d2_default:
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  iVar3 = FUN_0042e120(param_1);
  if ((iVar3 != 0) && (iStack_18 != 9)) {
    FUN_0042d700(param_1,param_2);
    fStack_84 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_80 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_7c = *(float *)(param_1 + 0x2520) * param_2;
    afStack_98[2] = fStack_84;
    afStack_98[(uint)bVar6 * -2 + 3] = afStack_98[(uint)bVar6 * -2 + 6];
    afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    fStack_18c = afStack_98[2] + *(float *)(param_1 + 0x250c);
    fStack_188 = afStack_98[3] + *(float *)(param_1 + 0x2510);
    fStack_184 = fStack_88 + *(float *)(param_1 + 0x2514);
    fStack_60 = fStack_18c;
    afStack_98[(uint)bVar6 * -2 + 0xf] = afStack_23c[(uint)bVar6 * -2 + 0x2d];
    afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
         afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e];
    fStack_78 = fStack_60 + *(float *)(param_1 + 0x249c);
    fStack_74 = fStack_5c + *(float *)(param_1 + 0x24a0);
    fStack_70 = fStack_58 + *(float *)(param_1 + 0x24a4);
    afStack_228[0] = fStack_78;
    afStack_23c[(uint)bVar6 * -2 + 6] = afStack_98[(uint)bVar6 * -2 + 9];
    afStack_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042d750(param_1,afStack_23c + 5);
  }
  if (iStack_18 != 0xd) {
    *(uint *)(param_1 + 0xc308) = 0;
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80(param_1,param_2);
  return;
}
