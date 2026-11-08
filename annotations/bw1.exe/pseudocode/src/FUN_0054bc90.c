// Name: FUN_0054bc90
// Address: 0054bc90
// Address Range: [[0054bc90, 0054c9b2]]
// Convention: unknown
// Signature: void FUN_0054bc90(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054bc90(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1200 [982];
  float *pfVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  byte auStack_290 [4];
  float fStack_28c;
  int iStack_25c;
  int iStack_258;
  byte auStack_254 [4];
  float fStack_250;
  uint uStack_218;
  float afStack_214 [5];
  float fStack_200;
  float afStack_1fc [5];
  float afStack_1e8 [3];
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  uint uStack_1c4;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  uint uStack_1a0;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float afStack_188 [3];
  uint uStack_17c;
  float afStack_178 [5];
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  uint uStack_158;
  uint uStack_14c;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float afStack_128 [3];
  float fStack_11c;
  float afStack_110 [3];
  float afStack_104 [3];
  uint uStack_f8;
  float afStack_f4 [4];
  float fStack_e4;
  float fStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  uint uStack_bc;
  float afStack_b0 [3];
  uint uStack_a4;
  float afStack_98 [3];
  uint uStack_8c;
  float fStack_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float afStack_68 [3];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float afStack_50 [3];
  int iStack_44;
  float afStack_40 [3];
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar4 = FUN_0042e1a0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  afStack_40[0] = param_2 * *(float *)(param_1 + 0xc1d0);
  iStack_24 = param_1 + 0x158;
LAB_0054bcec:
  if (0.0 < afStack_40[0]) {
    uVar9 = FUN_00524270(iStack_24,afStack_40);
    switch(uVar9) {
    case 100:
      iVar4 = *(int *)(param_1 + 0xc1e8);
      iStack_20 = 1;
      if ((((iVar4 != 0) &&
           (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar4 == 0)) &&
          (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))
                             (*(int *)(param_1 + 0xc1e8)), iVar4 == 0)) &&
         (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xe8))
                            (*(int *)(param_1 + 0xc1e8),param_1,0), iVar4 != 0)) {
        afStack_214[4] = 0x40800000;
        afStack_214[2] = 0.0;
        afStack_214[3] = 0.0;
        FUN_00408b40(param_1,afStack_214 + 2);
        fStack_200 = fStack_11c;
        afStack_1fc[(uint)bVar6 * -2] = afStack_178[(uint)bVar6 * -2 + 0x18];
        afStack_1fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
        fVar2 = fStack_200 - *(float *)(*(int *)(param_1 + 0xc1e8) + 0x20);
        fVar3 = afStack_1fc[1] - *(float *)(*(int *)(param_1 + 0xc1e8) + 0x28);
        if ((float)_DAT_005f0411 < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
          iStack_20 = 0;
        }
        iVar4 = *(int *)(param_1 + 0xc1e8);
        if (((ABS(afStack_1fc[0] - *(float *)(iVar4 + 0x24)) <= (float)_DAT_005f0419) &&
            ((iStack_20 == 0 ||
             (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xec))(iVar4,param_1,0), iVar4 != 0))))
           && (iStack_20 != 0)) break;
      }
      FUN_005247c0(iStack_24,0,1);
      break;
    case 0x65:
      (**(code **)(*(int *)(param_1 + 0x154) + 0xf8))(param_1);
      break;
    case 0x66:
      if (*(int *)(param_1 + 0xc1e8) != 0) {
        FUN_0042c010(auStack_254);
        fStack_250 = (float)FUN_0040cc00(0x3f800000,0x40a00000);
        fStack_14 = fStack_250;
        (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x108))
                  (*(int *)(param_1 + 0xc1e8),auStack_254);
      }
      break;
    case 0x67:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"wing?.wav");
      break;
    case 0x68:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"sentinel-fall.wav");
      break;
    default:
      FUN_00434a80(param_1,uVar9);
    }
    goto LAB_0054bcec;
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
  iVar4 = FUN_00524770(iStack_24);
  iVar4 = *(int *)(iVar4 + 0x24);
  iVar5 = FUN_00432240(param_1,param_2);
  if (iVar5 == 0) {
    if ((iVar4 == 10) || (iVar4 == 0xb)) {
      *(uint *)(param_1 + 0x2ff0) = 0x3f000000;
      switch(iVar4) {
      case 0:
        goto switchD_0054c14a_caseD_0;
      case 1:
        goto switchD_0054c14a_caseD_1;
      case 2:
        goto switchD_0054c14a_caseD_2;
      case 3:
        goto switchD_0054c14a_caseD_3;
      case 4:
        goto switchD_0054c14a_caseD_4;
      default:
        goto switchD_0054c14a_caseD_5;
      case 9:
        goto switchD_0054c14a_caseD_9;
      case 10:
        goto switchD_0054c14a_caseD_a;
      case 0xe:
      case 0xf:
        goto switchD_0054c14a_caseD_e;
      }
    }
    *(uint *)(param_1 + 0x2ff0) = 0x40000000;
    switch(iVar4) {
    case 0:
switchD_0054c14a_caseD_0:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar4 = *(int *)(param_1 + 0xc1e8);
      if (iVar4 == 0) {
        iVar4 = FUN_004a0fe0(param_1,param_2);
        if (iVar4 == 0) {
          FUN_005247c0(param_1 + 0x158,1,1);
        }
        else {
          FUN_005247c0(param_1 + 0x158,2,1);
        }
      }
      else {
        fStack_1d0 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_1cc = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_1c8 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_c8 = fStack_1d0;
        afStack_f4[(uint)bVar6 * -2 + 0xc] = afStack_1fc[(uint)bVar6 * -2 + 0xc];
        afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
             afStack_1fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        fStack_e0 = fStack_c8;
        afStack_f4[(uint)bVar6 * -2 + 6] = afStack_f4[(uint)bVar6 * -2 + 0xc];
        afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        fStack_d4 = fStack_e0;
        afStack_f4[(uint)bVar6 * -2 + 9] = afStack_f4[(uint)bVar6 * -2 + 6];
        afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        fStack_34 = fStack_cc * fStack_cc + fStack_d4 * fStack_d4 + fStack_d0 * fStack_d0;
        if (SQRT(fStack_34) <= _DAT_00604e54) {
          FUN_005247c0(param_1 + 0x158,2,1);
        }
        else {
          FUN_005247c0(param_1 + 0x158,3,1);
        }
      }
      break;
    case 1:
switchD_0054c14a_caseD_1:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      if (*(int *)(param_1 + 0xc1e8) != 0) {
        FUN_005247c0(param_1 + 0x158,0,1);
      }
      break;
    case 2:
switchD_0054c14a_caseD_2:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      fVar2 = 0x40800000;
      iStack_2c = param_1 + 0x158;
      if (*(int *)(param_1 + 0xc1e8) == 0) {
        iVar4 = FUN_004a0fe0(param_1,param_2);
        if (iVar4 == 0) {
          FUN_005247c0(iStack_2c,0,1);
        }
        else {
          FUN_005247c0(iStack_2c,2,1);
        }
      }
      else {
        fStack_1c = 0x40800000;
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_104[0] = 0.0;
        afStack_104[2] = fVar2;
        afStack_104[1] = 0.0;
        uVar9 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xc1e8),afStack_178 + 0x1d,0x3f000000,0x3e32b8c2);
        iVar4 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar9);
        if (-1 < iVar4) {
          iVar4 = *(int *)(param_1 + 0xc1e8);
          fStack_5c = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
          fStack_58 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
          fStack_54 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
          fStack_80 = fStack_5c;
          afStack_f4[(uint)bVar6 * -2 + 0x1e] = afStack_f4[(uint)bVar6 * -2 + 0x27];
          afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
               afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28];
          fStack_30 = SQRT(fStack_78 * fStack_78 + fStack_80 * fStack_80);
          uStack_7c = 0;
          fStack_18 = fStack_30;
          if (_DAT_00604e54 < fStack_30) {
            FUN_005247c0(iStack_2c,3,1);
          }
          if ((fStack_18 <= fStack_1c) && (*(float *)(param_1 + 0xc1e4) <= 0.0)) {
            iVar4 = *(int *)(param_1 + 0xc1e8);
            fStack_1ac = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_1a8 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_1a4 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_128[0] = fStack_1ac;
            afStack_178[(uint)bVar6 * -2 + 0x15] = afStack_1fc[(uint)bVar6 * -2 + 0x15];
            afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
                 afStack_1fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
            FUN_005a7520(afStack_178 + 0x14);
            uStack_218 = afStack_1fc[2];
            afStack_214[(uint)bVar6 * -2] = afStack_1fc[(uint)bVar6 * -2 + 3];
            afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_1fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            fStack_14 = (float)FUN_0040cd60(afStack_214[0] - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005f0409) {
              iVar4 = FUN_0040cd00(0x3f000000);
              if (iVar4 == 0) {
                FUN_005247c0(param_1 + 0x158,10,1);
                *(uint *)(param_1 + 0xc26c) = 0x40a00000;
              }
              else {
                FUN_005247c0(param_1 + 0x158,4,1);
              }
              *(uint *)(param_1 + 0xc1e4) = 0x3f800000;
            }
          }
          if (*(float *)(param_1 + 0xc1e0) < fStack_18) {
            FUN_005247c0(param_1 + 0x158,0,1);
          }
        }
      }
      break;
    case 3:
switchD_0054c14a_caseD_3:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iStack_28 = param_1 + 0x158;
      if (*(int *)(param_1 + 0xc1e8) == 0) {
        FUN_005247c0(iStack_28,0,1);
      }
      else {
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_188[0] = 0.0;
        afStack_188[2] = 0x40800000;
        afStack_188[1] = 0.0;
        uVar9 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xc1e8),afStack_1fc + 0x1d,0x3f000000,0x3e32b8c2);
        FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar9);
        iVar4 = *(int *)(param_1 + 0xc1e8);
        fStack_140 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
        fStack_13c = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
        fStack_138 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
        fStack_134 = fStack_140;
        afStack_178[(uint)bVar6 * -2 + 0x12] = afStack_178[(uint)bVar6 * -2 + 0xf];
        afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
             afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
        if (_DAT_00604e54 <=
            SQRT(fStack_12c * fStack_12c + fStack_134 * fStack_134 + fStack_130 * fStack_130)) {
          iVar4 = FUN_0040cd00(0x3dcccccd);
          if (iVar4 != 0) {
            iVar4 = FUN_0040cd00(0x3f000000);
            if (iVar4 == 0) {
              FUN_005247c0(iStack_28,0xf,1);
            }
            else {
              FUN_005247c0(iStack_28,0xe,1);
            }
          }
        }
        else {
          iVar4 = FUN_0040cd00(0x3f000000);
          if (iVar4 == 0) {
            iVar4 = FUN_0040cd00(0x3f000000);
            if (iVar4 == 0) {
              FUN_005247c0(iStack_28,2,1);
            }
            else {
              FUN_005247c0(iStack_28,4,1);
            }
          }
          else {
            iVar4 = FUN_0040cd00(0x3f000000);
            if (iVar4 == 0) {
              FUN_005247c0(iStack_28,0xf,1);
            }
            else {
              FUN_005247c0(iStack_28,0xe,1);
            }
          }
        }
      }
      break;
    case 4:
switchD_0054c14a_caseD_4:
      FUN_0042c010(auStack_290);
      fStack_28c = (float)FUN_0040cc00(0x40e00000,0x41700000);
      iStack_25c = param_1;
      iStack_258 = param_1;
      iStack_44 = param_1 + 0xfd8;
      fStack_14 = fStack_28c;
      FUN_005b5080(&DAT_02c8af28,_DAT_01e82104 * 0x30 + iStack_44,0x3f800000,auStack_290);
      pfVar7 = afStack_178 + 0x1a;
      afStack_110[0] = (float)uStack_bc;
      afStack_178[(uint)bVar6 * -2 + 0x1b] = afStack_f4[(uint)bVar6 * -2 + 0xf];
      afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
           afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
      FUN_00408b40(param_1,pfVar7);
      pfVar7 = afStack_f4 + 0x23;
      afStack_68[0] = (float)uStack_a4;
      afStack_f4[(uint)bVar6 * -2 + 0x24] = afStack_f4[(uint)bVar6 * -2 + 0x15];
      iVar4 = param_1;
      afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
           afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
      FUN_004a0770(iVar4,pfVar7);
      fStack_28c = (float)FUN_0040cc00(0x41700000,0x41f00000);
      iStack_25c = param_1;
      iStack_258 = param_1;
      fStack_14 = fStack_28c;
      FUN_005b5080(&DAT_02c8af28,_DAT_01e820fc * 0x30 + iStack_44,0x3f800000,auStack_290);
      puVar8 = &uStack_f8;
      uStack_f8 = uStack_1a0;
      afStack_f4[(uint)bVar6 * -2] = afStack_1fc[(uint)bVar6 * -2 + 0x18];
      afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_1fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
      FUN_00408b40(param_1,puVar8);
      pfVar7 = afStack_f4 + 0x29;
      afStack_50[0] = (float)uStack_8c;
      afStack_f4[(uint)bVar6 * -2 + 0x2a] = afStack_f4[(uint)bVar6 * -2 + 0x1b];
      iVar4 = param_1;
      afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b] =
           afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
      FUN_004a0770(iVar4,pfVar7);
    default:
      break;
    case 9:
switchD_0054c14a_caseD_9:
      if ((*(int *)(param_1 + 0xc1d4) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_00569040(param_1 + 0x158,0);
        pfVar7 = afStack_f4 + 0x11;
        afStack_b0[0] = (float)uStack_158;
        afStack_f4[(uint)bVar6 * -2 + 0x12] = afStack_178[(uint)bVar6 * -2 + 9];
        afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
             afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        FUN_00408b40(param_1,pfVar7);
        uVar10 = 0;
        puVar8 = &uStack_17c;
        uStack_17c = uStack_14c;
        afStack_178[(uint)bVar6 * -2] = afStack_178[(uint)bVar6 * -2 + 0xc];
        uVar9 = 0x01CD0E3C;
        afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        FUN_004e62e0(uVar9,puVar8,uVar10);
        *(uint *)(param_1 + 0xc1d4) = 1;
      }
      break;
    case 10:
switchD_0054c14a_caseD_a:
      fVar2 = *(float *)(param_1 + 0xc26c) - param_2;
      *(float *)(param_1 + 0xc26c) = fVar2;
      if (fVar2 < 0.0) {
        FUN_005247c0(param_1 + 0x158,0xb,1);
      }
      break;
    case 0xe:
    case 0xf:
switchD_0054c14a_caseD_e:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar4 = *(int *)(param_1 + 0xc1e8);
      if (iVar4 == 0) {
        FUN_005247c0(param_1 + 0x158,0,1);
      }
      else {
        fStack_1dc = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_1d8 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_1d4 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        afStack_98[0] = fStack_1dc;
        afStack_f4[(uint)bVar6 * -2 + 0x18] = afStack_1fc[(uint)bVar6 * -2 + 9];
        afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
             afStack_1fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        FUN_005a7520(afStack_f4 + 0x17);
        afStack_178[2] = (float)uStack_1c4;
        afStack_178[(uint)bVar6 * -2 + 3] = afStack_1fc[(uint)bVar6 * -2 + 0xf];
        afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_1fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
        *(float *)(param_1 + 0x34) = afStack_178[3];
      }
    }
    goto switchD_0054c14a_caseD_5;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0054bd63:
      uVar9 = 2;
    }
    else {
LAB_0054c125:
      uVar9 = 0;
    }
    FUN_005247c0(param_1 + 0x158,uVar9,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0054bd63;
    if (uVar1 != 3) goto LAB_0054c125;
    FUN_005247c0(iStack_24,0,1);
    FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_0054c14a_caseD_5:
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  iVar4 = FUN_0042e120(param_1);
  if (iVar4 != 0) {
    FUN_0042d700(param_1,param_2);
    fStack_1b8 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_1b4 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_1b0 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_164 = fStack_1b8;
    afStack_178[(uint)bVar6 * -2 + 6] = afStack_1fc[(uint)bVar6 * -2 + 0x12];
    afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_1fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
    afStack_f4[2] = fStack_164 + *(float *)(param_1 + 0x250c);
    afStack_f4[3] = fStack_160 + *(float *)(param_1 + 0x2510);
    fStack_e4 = fStack_15c + *(float *)(param_1 + 0x2514);
    fStack_194 = afStack_f4[2];
    afStack_1fc[(uint)bVar6 * -2 + 0x1b] = afStack_f4[(uint)bVar6 * -2 + 3];
    afStack_1fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
         afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    fStack_74 = fStack_194 + *(float *)(param_1 + 0x249c);
    fStack_70 = fStack_190 + *(float *)(param_1 + 0x24a0);
    fStack_6c = fStack_18c + *(float *)(param_1 + 0x24a4);
    afStack_1e8[0] = fStack_74;
    afStack_1fc[(uint)bVar6 * -2 + 6] = afStack_f4[(uint)bVar6 * -2 + 0x21];
    afStack_1fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042d750(param_1,afStack_1fc + 5);
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80(param_1,param_2);
  return;
}
