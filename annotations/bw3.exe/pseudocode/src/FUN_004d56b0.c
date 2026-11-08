// Name: FUN_004d56b0
// Address: 004d56b0
// Address Range: [[004d56b0, 004d5f04]]
// Convention: unknown
// Signature: void FUN_004d56b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d56b0(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_114c [997];
  float *pfVar7;
  uint uVar8;
  byte auStack_1a0 [4];
  uint uStack_19c;
  int iStack_16c;
  int iStack_168;
  uint uStack_164;
  float afStack_160 [5];
  float afStack_14c [3];
  float fStack_140;
  float afStack_13c [5];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float fStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float afStack_f8 [3];
  float afStack_ec [3];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float afStack_c8 [3];
  float afStack_bc [3];
  uint uStack_b0;
  float afStack_a4 [3];
  uint uStack_98;
  uint uStack_8c;
  uint uStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_50;
  uint uStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_34 = param_2 * *(float *)(param_1 + 0xcdcc);
  iVar3 = param_1 + 0x158;
  while (0.0 < fStack_34) {
    uVar8 = FUN_004fbb70(iVar3,afStack_13c + 0x42);
    FUN_00433fb0(param_1,uVar8);
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  iVar4 = FUN_004fc070(iVar3);
  iVar4 = *(int *)(iVar4 + 0x24);
  iStack_18 = iVar4;
  iVar5 = FUN_00431660(param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar4) {
    case 0:
    case 6:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar3 = *(int *)(param_1 + 0xcde4);
      iStack_20 = param_1 + 0x158;
      if (iVar3 == 0) {
        iVar3 = FUN_00489ff0(param_1,param_2);
        if (iVar3 != 0) {
          FUN_004fc0d0(iStack_20,1,1);
        }
      }
      else {
        fStack_74 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_70 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_6c = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_128 = fStack_74;
        afStack_13c[(uint)bVar6 * -2 + 6] = afStack_13c[(uint)bVar6 * -2 + 0x33];
        afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x34];
        fStack_38 = SQRT(fStack_120 * fStack_120 + fStack_128 * fStack_128 + fStack_124 * fStack_124
                        );
        fStack_28 = fStack_38;
        if (fStack_38 < 0x40000000) {
          FUN_00576250(afStack_13c + 5);
          uStack_44 = uStack_80;
          afStack_13c[(uint)bVar6 * -2 + 0x3f] = afStack_13c[(uint)bVar6 * -2 + 0x30];
          afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x40] =
               afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31];
          fStack_14 = (float)FUN_0040cfa0(fStack_40 - *(float *)(param_1 + 0x34));
          if (ABS(fStack_14) < (float)_DAT_005c53d1) {
            if (iStack_18 == 0) {
              uVar8 = 2;
            }
            else {
              uVar8 = 8;
            }
            FUN_004fc0d0(iStack_20,uVar8,1);
            iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd054));
            if (iVar3 == 0) {
              uVar8 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                (param_1,"hotdemon-attack.wav");
              *(uint *)(param_1 + 0xd054) = uVar8;
            }
          }
        }
        if (fStack_28 < *(float *)(param_1 + 0xcddc)) {
          if (_DAT_005e1908 <= fStack_28) {
            FUN_004fc0d0(param_1 + 0x158,7,1);
            *(uint *)(param_1 + 0xcde0) = 0;
          }
          else {
            FUN_004fc0d0(param_1 + 0x158,1,1);
            *(uint *)(param_1 + 0xcde0) = 0;
          }
        }
      }
      break;
    case 1:
    case 7:
    case 0xf:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      fVar2 = 0x40000000;
      iStack_1c = param_1 + 0x158;
      if (*(int *)(param_1 + 0xcde4) == 0) {
        iVar3 = FUN_00489ff0(param_1,param_2);
        if (iVar3 == 0) {
          if (iStack_18 == 1) {
            FUN_004fc0d0(iStack_1c,0,1);
          }
          else {
            FUN_004fc0d0(iStack_1c,6,1);
          }
        }
        else {
          FUN_004fc0d0(iStack_1c,1,1);
        }
      }
      else {
        fStack_2c = 0x40000000;
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_14c[0] = 0.0;
        afStack_14c[1] = 0.0;
        afStack_14c[2] = fVar2;
        uVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xcde4),afStack_160 + 5,0x3f000000,0x3e32b8c2);
        iVar3 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar8);
        if (-1 < iVar3) {
          iVar3 = *(int *)(param_1 + 0xcde4);
          fStack_104 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
          fStack_100 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
          fStack_fc = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
          afStack_13c[2] = fStack_104;
          afStack_13c[(uint)bVar6 * -2 + 3] = afStack_13c[(uint)bVar6 * -2 + 0xf];
          afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
          fStack_24 = SQRT(afStack_13c[4] * afStack_13c[4] + afStack_13c[2] * afStack_13c[2]);
          afStack_13c[3] = 0.0;
          fStack_30 = fStack_24;
          if ((_DAT_005e1908 < fStack_24) && (iStack_18 != 7)) {
            *(uint *)(param_1 + 0xcde0) = 0;
            FUN_004fc0d0(iStack_1c,7,1);
          }
          if ((fStack_30 <= fStack_2c) && (*(float *)(param_1 + 0xcde0) <= 0.0)) {
            iVar3 = *(int *)(param_1 + 0xcde4);
            fStack_d4 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_d0 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_cc = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_a4[0] = fStack_d4;
            afStack_13c[(uint)bVar6 * -2 + 0x27] = afStack_13c[(uint)bVar6 * -2 + 0x1b];
            afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28] =
                 afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
            FUN_00576250(afStack_13c + 0x26);
            uStack_11c = uStack_50;
            afStack_13c[(uint)bVar6 * -2 + 9] = afStack_13c[(uint)bVar6 * -2 + 0x3c];
            afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
                 afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3d];
            fStack_14 = (float)FUN_0040cfa0(fStack_118 - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005c53d1) {
              if (iStack_18 == 7) {
                uVar8 = 8;
              }
              else {
                uVar8 = 2;
              }
              FUN_004fc0d0(param_1 + 0x158,uVar8,1);
              iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd054));
              if (iVar3 == 0) {
                uVar8 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                  (param_1,"hotdemon-attack.wav");
                *(uint *)(param_1 + 0xd054) = uVar8;
              }
              *(uint *)(param_1 + 0xcde0) = 0x40000000;
            }
          }
          if (*(float *)(param_1 + 0xcddc) < fStack_30) {
            if (iStack_18 == 7) {
              FUN_004fc0d0(param_1 + 0x158,6,1);
              *(uint *)(param_1 + 0xcde0) = 0;
            }
            else {
              FUN_004fc0d0(param_1 + 0x158,0,1);
              *(uint *)(param_1 + 0xcde0) = 0;
            }
          }
        }
      }
      break;
    case 2:
    case 8:
      FUN_0042abb0(auStack_1a0);
      uStack_19c = *(uint *)(param_1 + 0xce5c);
      iStack_16c = param_1;
      iStack_168 = param_1;
      FUN_00583260(&DAT_02cfd900,_DAT_01d5baf4 * 0x30 + param_1 + 0xfd8,0x3ecccccd,auStack_1a0);
      pfVar7 = afStack_13c + 0x11;
      afStack_f8[0] = (float)uStack_164;
      afStack_13c[(uint)bVar6 * -2 + 0x12] = afStack_160[(uint)bVar6 * -2];
      afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
           afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      FUN_00408b80(param_1,pfVar7);
      pfVar7 = afStack_13c + 0x14;
      afStack_ec[0] = (float)uStack_b0;
      afStack_13c[(uint)bVar6 * -2 + 0x15] = afStack_13c[(uint)bVar6 * -2 + 0x24];
      iVar3 = param_1;
      afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25];
      FUN_004893f0(iVar3,pfVar7);
      break;
    case 5:
    case 0xb:
      if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_0054dbd0(param_1 + 0x158,0);
        pfVar7 = afStack_160 + 2;
        afStack_160[2] = (float)uStack_98;
        afStack_160[(uint)bVar6 * -2 + 3] = afStack_13c[(uint)bVar6 * -2 + 0x2a];
        afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
        FUN_00408b80(param_1,pfVar7);
        uVar8 = 0;
        afStack_bc[0] = (float)uStack_8c;
        afStack_13c[(uint)bVar6 * -2 + 0x21] = afStack_13c[(uint)bVar6 * -2 + 0x2d];
        afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22] =
             afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e];
        FUN_004cec40(0x01D22E44,afStack_13c + 0x20,uVar8);
        *(uint *)(param_1 + 0xcdd0) = 1;
      }
    }
    goto switchD_004d5efe_caseD_3;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004d5785:
      uVar8 = 1;
    }
    else {
LAB_004d594b:
      uVar8 = 0;
    }
    FUN_004fc0d0(param_1 + 0x158,uVar8,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004d5785;
    if (uVar1 != 3) goto LAB_004d594b;
    FUN_004fc0d0(iVar3,0,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_004d5efe_caseD_3:
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  iVar3 = FUN_0042ccf0(param_1);
  if (iVar3 != 0) {
    FUN_0042c1e0(param_1,param_2);
    fStack_140 = *(float *)(param_1 + 0x2518) * param_2;
    afStack_13c[0] = *(float *)(param_1 + 0x251c) * param_2;
    afStack_13c[1] = *(float *)(param_1 + 0x2520) * param_2;
    fStack_68 = fStack_140;
    afStack_13c[(uint)bVar6 * -2 + 0x36] = afStack_13c[(uint)bVar6 * -2];
    afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x37] =
         afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    fStack_110 = fStack_68 + *(float *)(param_1 + 0x250c);
    fStack_10c = fStack_64 + *(float *)(param_1 + 0x2510);
    fStack_108 = fStack_60 + *(float *)(param_1 + 0x2514);
    fStack_5c = fStack_110;
    afStack_13c[(uint)bVar6 * -2 + 0x39] = afStack_13c[(uint)bVar6 * -2 + 0xc];
    afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3a] =
         afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    fStack_e0 = fStack_5c + *(float *)(param_1 + 0x249c);
    fStack_dc = fStack_58 + *(float *)(param_1 + 0x24a0);
    fStack_d8 = fStack_54 + *(float *)(param_1 + 0x24a4);
    afStack_c8[0] = fStack_e0;
    afStack_13c[(uint)bVar6 * -2 + 0x1e] = afStack_13c[(uint)bVar6 * -2 + 0x18];
    afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
         afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042c230(param_1,afStack_13c + 0x1d);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  return;
}
