// Name: FUN_00531380
// Address: 00531380
// Address Range: [[00531380, 005320ab]]
// Convention: unknown
// Signature: void FUN_00531380(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00531380(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1200 [982];
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  byte auStack_290 [4];
  float fStack_28c;
  int iStack_25c;
  int iStack_258;
  byte auStack_254 [4];
  float fStack_250;
  float fStack_218;
  float afStack_214 [5];
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint uStack_1e8;
  float afStack_1dc [3];
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  uint uStack_1b8;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float afStack_194 [3];
  uint uStack_188;
  uint uStack_184;
  float fStack_180;
  uint uStack_17c;
  float afStack_178 [5];
  float afStack_164 [3];
  float afStack_158 [3];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint uStack_140;
  float afStack_134 [3];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float afStack_110 [3];
  float afStack_104 [3];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float afStack_ec [3];
  uint uStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  uint uStack_c8;
  float fStack_bc;
  uint uStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float afStack_98 [3];
  float afStack_8c [3];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  uint uStack_5c;
  uint uStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  int iStack_40;
  float afStack_3c [2];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  afStack_3c[0] = param_2 * *(float *)(param_1 + 0xcdcc);
  iStack_1c = param_1 + 0x158;
LAB_005313e3:
  if (0.0 < afStack_3c[0]) {
    uVar8 = FUN_004fbb70(iStack_1c,afStack_3c);
    switch(uVar8) {
    case 100:
      iVar4 = *(int *)(param_1 + 0xcde4);
      iStack_18 = 1;
      if ((((iVar4 != 0) &&
           (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar4 == 0)) &&
          (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf4))
                             (*(int *)(param_1 + 0xcde4)), iVar4 == 0)) &&
         (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xe8))
                            (*(int *)(param_1 + 0xcde4),param_1,0), iVar4 != 0)) {
        afStack_ec[2] = 0x40800000;
        afStack_ec[0] = 0.0;
        afStack_ec[1] = 0.0;
        FUN_00408b80(param_1,afStack_178 + 0x23);
        fStack_14c = fStack_bc;
        afStack_178[(uint)bVar6 * -2 + 0xc] = afStack_dc[(uint)bVar6 * -2 + 9];
        afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
             afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        fVar2 = fStack_14c - *(float *)(*(int *)(param_1 + 0xcde4) + 0x20);
        fVar3 = fStack_144 - *(float *)(*(int *)(param_1 + 0xcde4) + 0x28);
        if ((float)_DAT_005d00a2 < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
          iStack_18 = 0;
        }
        iVar4 = *(int *)(param_1 + 0xcde4);
        if (((ABS(fStack_148 - *(float *)(iVar4 + 0x24)) <= (float)_DAT_005d00aa) &&
            ((iStack_18 == 0 ||
             (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xec))(iVar4,param_1,0), iVar4 != 0))))
           && (iStack_18 != 0)) break;
      }
      FUN_004fc0d0(iStack_1c,0,1);
      break;
    case 0x65:
      (**(code **)(*(int *)(param_1 + 0x154) + 0xf8))(param_1);
      break;
    case 0x66:
      if (*(int *)(param_1 + 0xcde4) != 0) {
        FUN_0042abb0(auStack_254);
        fStack_250 = (float)FUN_0040ce40(0x3f800000,0x40a00000);
        fStack_14 = fStack_250;
        (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0x108))
                  (*(int *)(param_1 + 0xcde4),auStack_254);
      }
      break;
    case 0x67:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"wing?.wav");
      break;
    case 0x68:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"sentinel-fall.wav");
      break;
    default:
      FUN_00433fb0(param_1,uVar8);
    }
    goto LAB_005313e3;
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  iVar4 = FUN_004fc070(iStack_1c);
  iVar4 = *(int *)(iVar4 + 0x24);
  iVar5 = FUN_00431660(param_1,param_2);
  if (iVar5 == 0) {
    if ((iVar4 == 10) || (iVar4 == 0xb)) {
      *(uint *)(param_1 + 0x3270) = 0x3f000000;
      switch(iVar4) {
      case 0:
        goto switchD_00531823_caseD_0;
      case 1:
        goto switchD_00531823_caseD_1;
      case 2:
        goto switchD_00531823_caseD_2;
      case 3:
        goto switchD_00531823_caseD_3;
      case 4:
        goto switchD_00531823_caseD_4;
      default:
        goto switchD_00531823_caseD_5;
      case 9:
        goto switchD_00531823_caseD_9;
      case 10:
        goto switchD_00531823_caseD_a;
      case 0xe:
      case 0xf:
        goto switchD_00531823_caseD_e;
      }
    }
    *(uint *)(param_1 + 0x3270) = 0x40000000;
    switch(iVar4) {
    case 0:
switchD_00531823_caseD_0:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar4 = *(int *)(param_1 + 0xcde4);
      if (iVar4 == 0) {
        iVar4 = FUN_00489ff0(param_1,param_2);
        if (iVar4 == 0) {
          FUN_004fc0d0(param_1 + 0x158,1,1);
        }
        else {
          FUN_004fc0d0(param_1 + 0x158,2,1);
        }
      }
      else {
        fStack_128 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_124 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_120 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_68 = fStack_128;
        afStack_dc[(uint)bVar6 * -2 + 0x1e] = afStack_178[(uint)bVar6 * -2 + 0x15];
        afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
             afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
        fStack_74 = fStack_68;
        afStack_dc[(uint)bVar6 * -2 + 0x1b] = afStack_dc[(uint)bVar6 * -2 + 0x1e];
        afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
             afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
        fStack_1f4 = fStack_74;
        afStack_214[(uint)bVar6 * -2 + 9] = afStack_dc[(uint)bVar6 * -2 + 0x1b];
        afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
        fStack_24 = fStack_1ec * fStack_1ec + fStack_1f4 * fStack_1f4 + fStack_1f0 * fStack_1f0;
        if (SQRT(fStack_24) <= _DAT_005e3a14) {
          FUN_004fc0d0(param_1 + 0x158,2,1);
        }
        else {
          FUN_004fc0d0(param_1 + 0x158,3,1);
        }
      }
      break;
    case 1:
switchD_00531823_caseD_1:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      if (*(int *)(param_1 + 0xcde4) != 0) {
        FUN_004fc0d0(param_1 + 0x158,0,1);
      }
      break;
    case 2:
switchD_00531823_caseD_2:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      fVar2 = 0x40800000;
      iStack_28 = param_1 + 0x158;
      if (*(int *)(param_1 + 0xcde4) == 0) {
        iVar4 = FUN_00489ff0(param_1,param_2);
        if (iVar4 == 0) {
          FUN_004fc0d0(iStack_28,0,1);
        }
        else {
          FUN_004fc0d0(iStack_28,2,1);
        }
      }
      else {
        fStack_2c = 0x40800000;
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        uStack_188 = 0;
        fStack_180 = fVar2;
        uStack_184 = 0;
        uVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xcde4),&uStack_188,0x3f000000,0x3e32b8c2);
        iVar4 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar8);
        if (-1 < iVar4) {
          iVar4 = *(int *)(param_1 + 0xcde4);
          fStack_a4 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
          fStack_a0 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
          fStack_9c = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
          fStack_218 = fStack_a4;
          afStack_214[(uint)bVar6 * -2] = afStack_dc[(uint)bVar6 * -2 + 0xf];
          afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
          fStack_34 = SQRT(afStack_214[1] * afStack_214[1] + fStack_218 * fStack_218);
          afStack_214[0] = 0.0;
          fStack_30 = fStack_34;
          if (_DAT_005e3a14 < fStack_34) {
            FUN_004fc0d0(iStack_28,3,1);
          }
          if ((fStack_30 <= fStack_2c) && (*(float *)(param_1 + 0xcde0) <= 0.0)) {
            iVar4 = *(int *)(param_1 + 0xcde4);
            fStack_1a0 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_19c = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_198 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_110[0] = fStack_1a0;
            afStack_178[(uint)bVar6 * -2 + 0x1b] = afStack_214[(uint)bVar6 * -2 + 0x1e];
            afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
                 afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
            FUN_00576250(afStack_178 + 0x1a);
            uStack_e0 = uStack_1e8;
            afStack_dc[(uint)bVar6 * -2] = afStack_214[(uint)bVar6 * -2 + 0xc];
            afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
            fStack_14 = (float)FUN_0040cfa0(afStack_dc[0] - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005d009a) {
              iVar4 = FUN_0040cf40(0x3f000000);
              if (iVar4 == 0) {
                FUN_004fc0d0(param_1 + 0x158,10,1);
                *(uint *)(param_1 + 0xd058) = 0x40a00000;
              }
              else {
                FUN_004fc0d0(param_1 + 0x158,4,1);
              }
              *(uint *)(param_1 + 0xcde0) = 0x3f800000;
            }
          }
          if (*(float *)(param_1 + 0xcddc) < fStack_30) {
            FUN_004fc0d0(param_1 + 0x158,0,1);
          }
        }
      }
      break;
    case 3:
switchD_00531823_caseD_3:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iStack_20 = param_1 + 0x158;
      if (*(int *)(param_1 + 0xcde4) == 0) {
        FUN_004fc0d0(iStack_20,0,1);
      }
      else {
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_194[0] = 0.0;
        afStack_194[2] = 0x40800000;
        afStack_194[1] = 0.0;
        uVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xcde4),afStack_214 + 0x20,0x3f000000,0x3e32b8c2);
        FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar8);
        iVar4 = *(int *)(param_1 + 0xcde4);
        fStack_1ac = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
        fStack_1a8 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
        fStack_1a4 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
        fStack_1d0 = fStack_1ac;
        afStack_214[(uint)bVar6 * -2 + 0x12] = afStack_214[(uint)bVar6 * -2 + 0x1b];
        afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
             afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
        if (_DAT_005e3a14 <=
            SQRT(fStack_1c8 * fStack_1c8 + fStack_1d0 * fStack_1d0 + fStack_1cc * fStack_1cc)) {
          iVar4 = FUN_0040cf40(0x3dcccccd);
          if (iVar4 != 0) {
            iVar4 = FUN_0040cf40(0x3f000000);
            if (iVar4 == 0) {
              FUN_004fc0d0(iStack_20,0xf,1);
            }
            else {
              FUN_004fc0d0(iStack_20,0xe,1);
            }
          }
        }
        else {
          iVar4 = FUN_0040cf40(0x3f000000);
          if (iVar4 == 0) {
            iVar4 = FUN_0040cf40(0x3f000000);
            if (iVar4 == 0) {
              FUN_004fc0d0(iStack_20,2,1);
            }
            else {
              FUN_004fc0d0(iStack_20,4,1);
            }
          }
          else {
            iVar4 = FUN_0040cf40(0x3f000000);
            if (iVar4 == 0) {
              FUN_004fc0d0(iStack_20,0xf,1);
            }
            else {
              FUN_004fc0d0(iStack_20,0xe,1);
            }
          }
        }
      }
      break;
    case 4:
switchD_00531823_caseD_4:
      FUN_0042abb0(auStack_290);
      fStack_28c = (float)FUN_0040ce40(0x40e00000,0x41700000);
      iStack_25c = param_1;
      iStack_258 = param_1;
      iStack_40 = param_1 + 0xfd8;
      fStack_14 = fStack_28c;
      FUN_00583260(&DAT_02cfd900,_DAT_01ed7864 * 0x30 + iStack_40,0x3f800000,auStack_290);
      pfVar7 = afStack_178 + 0x1d;
      afStack_104[0] = (float)uStack_b0;
      afStack_178[(uint)bVar6 * -2 + 0x1e] = afStack_dc[(uint)bVar6 * -2 + 0xc];
      afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
           afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
      FUN_00408b80(param_1,pfVar7);
      pfVar7 = afStack_dc + 0x11;
      afStack_98[0] = (float)uStack_1b8;
      afStack_dc[(uint)bVar6 * -2 + 0x12] = afStack_214[(uint)bVar6 * -2 + 0x18];
      iVar4 = param_1;
      afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
           afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
      FUN_004893f0(iVar4,pfVar7);
      fStack_28c = (float)FUN_0040ce40(0x41700000,0x41f00000);
      iStack_25c = param_1;
      iStack_258 = param_1;
      fStack_14 = fStack_28c;
      FUN_00583260(&DAT_02cfd900,_DAT_01ed785c * 0x30 + iStack_40,0x3f800000,auStack_290);
      pfVar7 = afStack_dc + 0x14;
      afStack_8c[0] = (float)uStack_c8;
      afStack_dc[(uint)bVar6 * -2 + 0x15] = afStack_dc[(uint)bVar6 * -2 + 6];
      afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      FUN_00408b80(param_1,pfVar7);
      pfVar7 = afStack_178 + 0x11;
      afStack_134[0] = (float)uStack_17c;
      afStack_178[(uint)bVar6 * -2 + 0x12] = afStack_178[(uint)bVar6 * -2];
      iVar4 = param_1;
      afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
           afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      FUN_004893f0(iVar4,pfVar7);
    default:
      break;
    case 9:
switchD_00531823_caseD_9:
      if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_0054dbd0(param_1 + 0x158,0);
        pfVar7 = afStack_178 + 5;
        afStack_164[0] = (float)uStack_11c;
        afStack_178[(uint)bVar6 * -2 + 6] = afStack_178[(uint)bVar6 * -2 + 0x18];
        afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
        FUN_00408b80(param_1,pfVar7);
        uVar9 = 0;
        pfVar7 = afStack_178 + 2;
        afStack_178[2] = (float)uStack_140;
        afStack_178[(uint)bVar6 * -2 + 3] = afStack_178[(uint)bVar6 * -2 + 0xf];
        uVar8 = 0x01D22E44;
        afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
        FUN_004cec40(uVar8,pfVar7,uVar9);
        *(uint *)(param_1 + 0xcdd0) = 1;
      }
      break;
    case 10:
switchD_00531823_caseD_a:
      fVar2 = *(float *)(param_1 + 0xd058) - param_2;
      *(float *)(param_1 + 0xd058) = fVar2;
      if (fVar2 < 0.0) {
        FUN_004fc0d0(param_1 + 0x158,0xb,1);
      }
      break;
    case 0xe:
    case 0xf:
switchD_00531823_caseD_e:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar4 = *(int *)(param_1 + 0xcde4);
      if (iVar4 == 0) {
        FUN_004fc0d0(param_1 + 0x158,0,1);
      }
      else {
        fStack_80 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_7c = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_78 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        afStack_158[0] = fStack_80;
        afStack_178[(uint)bVar6 * -2 + 9] = afStack_dc[(uint)bVar6 * -2 + 0x18];
        afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
        FUN_00576250(afStack_178 + 8);
        uStack_5c = afStack_214[2];
        afStack_dc[(uint)bVar6 * -2 + 0x21] = afStack_214[(uint)bVar6 * -2 + 3];
        afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22] =
             afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        *(uint *)(param_1 + 0x34) = uStack_58;
      }
    }
    goto switchD_00531823_caseD_5;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0053145a:
      uVar8 = 2;
    }
    else {
LAB_005317fe:
      uVar8 = 0;
    }
    FUN_004fc0d0(param_1 + 0x158,uVar8,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0053145a;
    if (uVar1 != 3) goto LAB_005317fe;
    FUN_004fc0d0(iStack_1c,0,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_00531823_caseD_5:
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  iVar4 = FUN_0042ccf0(param_1);
  if (iVar4 != 0) {
    FUN_0042c1e0(param_1,param_2);
    fStack_1c4 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_1c0 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_1bc = *(float *)(param_1 + 0x2520) * param_2;
    fStack_200 = fStack_1c4;
    afStack_214[(uint)bVar6 * -2 + 6] = afStack_214[(uint)bVar6 * -2 + 0x15];
    afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
    fStack_f8 = fStack_200 + *(float *)(param_1 + 0x250c);
    fStack_f4 = fStack_1fc + *(float *)(param_1 + 0x2510);
    fStack_f0 = fStack_1f8 + *(float *)(param_1 + 0x2514);
    fStack_50 = fStack_f8;
    afStack_dc[(uint)bVar6 * -2 + 0x24] = afStack_178[(uint)bVar6 * -2 + 0x21];
    afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
         afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
    afStack_dc[2] = fStack_50 + *(float *)(param_1 + 0x249c);
    afStack_dc[3] = fStack_4c + *(float *)(param_1 + 0x24a0);
    fStack_cc = fStack_48 + *(float *)(param_1 + 0x24a4);
    afStack_1dc[0] = afStack_dc[2];
    afStack_214[(uint)bVar6 * -2 + 0xf] = afStack_dc[(uint)bVar6 * -2 + 3];
    afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
         afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042c230(param_1,afStack_214 + 0xe);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  return;
}
