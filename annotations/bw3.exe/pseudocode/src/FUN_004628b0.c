// Name: FUN_004628b0
// Address: 004628b0
// Address Range: [[004628b0, 00463459]]
// Convention: unknown
// Signature: void FUN_004628b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004628b0(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  float afStackY_11a8 [997];
  float *pfVar7;
  byte auStack_1fc [4];
  uint uStack_1f8;
  int iStack_1c8;
  int iStack_1c4;
  uint uStack_1c0;
  float afStack_1bc [4];
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float afStack_190 [3];
  uint uStack_184;
  float afStack_180 [5];
  float afStack_16c [3];
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  uint uStack_154;
  float afStack_148 [3];
  float afStack_13c [3];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  uint uStack_124;
  uint uStack_118;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  uint uStack_f4;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [3];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float afStack_c4 [3];
  float afStack_b8 [3];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_54;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  FUN_00433c60(param_1,param_2);
  FUN_00432330(param_1,param_2,0);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_44 = param_2 * *(float *)(param_1 + 0xcdcc);
  while (0.0 < fStack_44) {
    uVar4 = FUN_004fbb70(param_1 + 0x158,afStack_180 + 0x4f);
    FUN_00433fb0(param_1,uVar4);
  }
  iVar3 = FUN_004fc070(param_1 + 0x158);
  iVar3 = *(int *)(iVar3 + 0x24);
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  iStack_28 = iVar3;
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  if (iVar3 == 8) {
    *(float *)(param_1 + 0x2528) = *(float *)(param_1 + 0x2528) * (float)_DAT_005bbc44;
  }
  iVar3 = FUN_00431660(param_1,param_2);
  if (iVar3 == 0) {
    switch(iStack_28) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_19c = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
      fStack_198 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
      fStack_194 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
      fStack_100 = fStack_19c;
      afStack_180[(uint)bVar6 * -2 + 0x21] = afStack_1bc[(uint)bVar6 * -2 + 9];
      afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22] =
           afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      FUN_00576250(afStack_180 + 0x20);
      fVar2 = fStack_f8 * fStack_f8 + fStack_100 * fStack_100 + fStack_fc * fStack_fc;
      uStack_1c0 = afStack_180[2];
      afStack_1bc[(uint)bVar6 * -2] = afStack_180[(uint)bVar6 * -2 + 3];
      afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      fStack_34 = (float)(((int)fVar2 >> 1) + _DAT_01d1a0a4);
      fStack_40 = fVar2;
      fStack_2c = fStack_34;
      fStack_14 = (float)FUN_0040cfa0(afStack_1bc[0] - *(float *)(param_1 + 0x34));
      if (ABS(fStack_14) < (float)_DAT_005bbc54) {
        if ((0.0 < *(float *)(param_1 + 0xcde0)) &&
           (fStack_2c < _DAT_005de5b8 + (float)_DAT_005bbc5c)) break;
        if ((*(float *)(param_1 + 0xcde0) <= 0.0) && (fStack_34 <= _DAT_005de5b8)) {
          iVar3 = FUN_0040cea0(0,100);
          if (iVar3 < 0x32) {
            uVar4 = 0xb;
          }
          else {
            uVar4 = 0xc;
          }
          FUN_004fc0d0(param_1 + 0x158,uVar4,1);
          *(uint *)(param_1 + 0xcde0) = 0x40200000;
          break;
        }
      }
      iVar3 = FUN_00489ff0(param_1,param_2);
      iStack_1c = param_1 + 0x158;
      if (iVar3 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        iVar3 = *(int *)(param_1 + 0xcde4);
        if (iVar3 != 0) {
          fStack_70 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_6c = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_68 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_1a8 = fStack_70;
          afStack_1bc[(uint)bVar6 * -2 + 6] = afStack_180[(uint)bVar6 * -2 + 0x45];
          afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
               afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x46];
          fStack_3c = fStack_1a0 * fStack_1a0 + fStack_1a8 * fStack_1a8 + fStack_1a4 * fStack_1a4;
          fStack_24 = (float)(((int)fStack_3c >> 1) + _DAT_01d1a0a4);
          if (fStack_24 < _DAT_005de5c4) {
            iVar3 = FUN_0040cea0(0,100);
            if (iVar3 < 0x21) {
              uVar4 = 5;
            }
            else if (iVar3 < 0x42) {
              uVar4 = 6;
            }
            else {
              uVar4 = 7;
            }
          }
          else {
            uVar4 = 8;
          }
          FUN_004fc0d0(iStack_1c,uVar4,1);
          iVar3 = FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xd05c));
          if (iVar3 == 0) {
            uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog5.wav");
            *(uint *)(param_1 + 0xd05c) = uVar4;
          }
        }
      }
      else {
        iVar3 = FUN_0040cea0(0,100);
        if (iVar3 < 0x21) {
          FUN_004fc0d0(iStack_1c,5,1);
        }
        else if (iVar3 < 0x42) {
          FUN_004fc0d0(iStack_1c,6,1);
        }
        else {
          FUN_004fc0d0(iStack_1c,7,1);
        }
      }
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar3 = *(int *)(param_1 + 0xcde4);
      if (iVar3 == 0) {
        iVar5 = FUN_00489ff0(param_1,param_2);
        iVar3 = param_1 + 0x158;
        if (iVar5 == 0) {
          iVar5 = FUN_0040cea0(0,100);
          if (iVar5 < 0x14) {
            FUN_004fc0d0(iVar3,0,1);
          }
          else if (iVar5 < 0x28) {
            FUN_004fc0d0(iVar3,1,1);
          }
          else if (iVar5 < 0x3c) {
            FUN_004fc0d0(iVar3,2,1);
          }
          else if (iVar5 < 0x50) {
            FUN_004fc0d0(iVar3,3,1);
          }
          else {
            FUN_004fc0d0(iVar3,4,1);
          }
        }
        else {
          iVar5 = FUN_0040cea0(0,100);
          if (iVar5 < 0x21) {
            FUN_004fc0d0(iVar3,5,1);
          }
          else if (iVar5 < 0x42) {
            FUN_004fc0d0(iVar3,6,1);
          }
          else {
            FUN_004fc0d0(iVar3,7,1);
          }
        }
      }
      else {
        fStack_a0 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
        fStack_9c = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
        fStack_98 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
        fStack_64 = fStack_a0;
        afStack_180[(uint)bVar6 * -2 + 0x48] = afStack_180[(uint)bVar6 * -2 + 0x39];
        afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x49] =
             afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3a];
        if ((_DAT_005de5c4 <
             SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60)) &&
           (((iStack_28 == 5 || (iStack_28 == 6)) || (iStack_28 == 7)))) {
          FUN_004fc0d0(param_1 + 0x158,8,1);
        }
        afStack_190[2] = _DAT_005de5b8 + (float)_DAT_005bbc4c;
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_190[0] = 0.0;
        afStack_190[1] = 0.0;
        fStack_30 = afStack_190[2];
        uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xcde4),afStack_1bc + 0xb,0x3fc00000,0x3e32b8c2);
        iVar3 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar4);
        iStack_20 = param_1 + 0x158;
        if (iVar3 < 0) {
          FUN_00441ff0(PTR_DAT_005f1690,"%s gave up chase - I'm confused\n",param_1);
          FUN_004fc0d0(iStack_20,0,1);
        }
        else if (iVar3 < 1) {
          iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_e8 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_e4 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_e0 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
          afStack_1bc[2] = fStack_e8;
          afStack_1bc[(uint)bVar6 * -2 + 3] = afStack_180[(uint)bVar6 * -2 + 0x27];
          afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28];
          FUN_00576250(afStack_1bc + 2);
          fVar2 = afStack_1bc[2] * afStack_1bc[2];
          uStack_184 = uStack_154;
          afStack_180[(uint)bVar6 * -2] = afStack_180[(uint)bVar6 * -2 + 0xc];
          afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
          fStack_38 = fStack_1ac * fStack_1ac + fVar2 + afStack_1bc[3] * afStack_1bc[3];
          fStack_18 = (float)(((int)fStack_38 >> 1) + _DAT_01d1a0a4);
          fStack_14 = (float)FUN_0040cfa0(afStack_180[0] - *(float *)(param_1 + 0x34));
          if (((ABS(fStack_14) < (float)_DAT_005bbc54) && (*(float *)(param_1 + 0xcde0) <= 0.0)) &&
             (fStack_18 <= _DAT_005de5b8)) {
            iVar3 = FUN_0040cea0(0,100);
            if (iVar3 < 0x32) {
              uVar4 = 0xb;
            }
            else {
              uVar4 = 0xc;
            }
            FUN_004fc0d0(iStack_20,uVar4,1);
            *(uint *)(param_1 + 0xcde0) = 0x40200000;
          }
        }
        else {
          iVar3 = *(int *)(param_1 + 0xcde4);
          fStack_88 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_84 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_80 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
          afStack_dc[0] = fStack_88;
          afStack_180[(uint)bVar6 * -2 + 0x2a] = afStack_180[(uint)bVar6 * -2 + 0x3f];
          afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b] =
               afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x40];
          FUN_00576250(afStack_180 + 0x29);
          uStack_58 = uStack_7c;
          afStack_180[(uint)bVar6 * -2 + 0x4b] = afStack_180[(uint)bVar6 * -2 + 0x42];
          afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x4c] =
               afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x43];
          fStack_14 = (float)FUN_0040cfa0(fStack_54 - *(float *)(param_1 + 0x34));
          if (ABS(fStack_14) < (float)_DAT_005bbc54) {
            iVar3 = FUN_0040cea0(0,100);
            if (0.0 < *(float *)(param_1 + 0xcde0)) {
              FUN_004fc0d0(iStack_20,0,1);
            }
            else {
              if (_DAT_005de5b8 < fStack_30) {
                if (iVar3 < 0x32) {
                  uVar4 = 9;
                }
                else {
                  uVar4 = 10;
                }
                FUN_004fc0d0(iStack_20,uVar4,1);
              }
              *(uint *)(param_1 + 0xcde0) = 0x40200000;
            }
          }
        }
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      FUN_0042abb0(auStack_1fc);
      uStack_1f8 = *(uint *)(param_1 + 0xce5c);
      iStack_1c8 = param_1;
      iStack_1c4 = param_1;
      FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd058) * 0x30 + param_1 + 0xfd8,0x3f333333,
                   auStack_1fc);
      pfVar7 = afStack_180 + 0x2f;
      afStack_c4[0] = (float)uStack_94;
      afStack_180[(uint)bVar6 * -2 + 0x30] = afStack_180[(uint)bVar6 * -2 + 0x3c];
      afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31] =
           afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3d];
      FUN_00408b80(param_1,pfVar7);
      pfVar7 = afStack_180 + 0x32;
      afStack_b8[0] = (float)uStack_f4;
      afStack_180[(uint)bVar6 * -2 + 0x33] = afStack_180[(uint)bVar6 * -2 + 0x24];
      iVar3 = param_1;
      afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x34] =
           afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25];
      FUN_004893f0(iVar3,pfVar7);
      iVar3 = FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xd05c));
      if (iVar3 == 0) {
        uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog5.wav");
        *(uint *)(param_1 + 0xd05c) = uVar4;
      }
      break;
    case 0x13:
    case 0x14:
    case 0x15:
      if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_0054dbd0(param_1 + 0x158,0);
        pfVar7 = afStack_180 + 0x11;
        afStack_13c[0] = (float)uStack_124;
        afStack_180[(uint)bVar6 * -2 + 0x12] = afStack_180[(uint)bVar6 * -2 + 0x18];
        afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
             afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
        FUN_00408b80(param_1,pfVar7);
        uVar4 = 0;
        afStack_148[0] = (float)uStack_118;
        afStack_180[(uint)bVar6 * -2 + 0xf] = afStack_180[(uint)bVar6 * -2 + 0x1b];
        afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
             afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
        FUN_004cec40(0x01D22E44,afStack_180 + 0xe,uVar4);
        *(uint *)(param_1 + 0xcdd0) = 1;
      }
    }
    goto switchD_00463453_caseD_d;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004629d9:
      uVar4 = 5;
    }
    else {
LAB_00462bcc:
      uVar4 = 0;
    }
    FUN_004fc0d0(param_1 + 0x158,uVar4,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004629d9;
    if (uVar1 != 3) goto LAB_00462bcc;
    FUN_004fc0d0(param_1 + 0x158,0,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_00463453_caseD_d:
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  iVar3 = FUN_0042ccf0(param_1);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0xcde4);
    if ((iVar3 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3), iVar3 == param_1)) {
      FUN_0053ec10(0x01ED78C8,*(uint *)(param_1 + 0xcde4));
    }
    FUN_0042c1e0(param_1,param_2);
    fStack_10c = *(float *)(param_1 + 0x2518) * param_2;
    fStack_108 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_104 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_ac = fStack_10c;
    afStack_180[(uint)bVar6 * -2 + 0x36] = afStack_180[(uint)bVar6 * -2 + 0x1e];
    afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x37] =
         afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
    fStack_160 = fStack_ac + *(float *)(param_1 + 0x250c);
    fStack_15c = fStack_a8 + *(float *)(param_1 + 0x2510);
    fStack_158 = fStack_a4 + *(float *)(param_1 + 0x2514);
    fStack_130 = fStack_160;
    afStack_180[(uint)bVar6 * -2 + 0x15] = afStack_180[(uint)bVar6 * -2 + 9];
    afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
         afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    fStack_d0 = fStack_130 + *(float *)(param_1 + 0x249c);
    fStack_cc = fStack_12c + *(float *)(param_1 + 0x24a0);
    fStack_c8 = fStack_128 + *(float *)(param_1 + 0x24a4);
    afStack_16c[0] = fStack_d0;
    afStack_180[(uint)bVar6 * -2 + 6] = afStack_180[(uint)bVar6 * -2 + 0x2d];
    afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042c230(param_1,afStack_180 + 5);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  return;
}
