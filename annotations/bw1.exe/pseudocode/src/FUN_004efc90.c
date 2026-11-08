// Name: FUN_004efc90
// Address: 004efc90
// Address Range: [[004efc90, 004f04ee]]
// Convention: unknown
// Signature: void FUN_004efc90(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004efc90(int param_1,float param_2)

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
  float fStack_19c;
  int iStack_16c;
  int iStack_168;
  uint uStack_164;
  float afStack_160 [4];
  float fStack_150;
  uint uStack_14c;
  float fStack_140;
  uint uStack_13c;
  float fStack_138;
  float afStack_134 [3];
  float fStack_128;
  float afStack_124 [4];
  float fStack_114;
  uint uStack_110;
  float afStack_104 [3];
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
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  uint uStack_98;
  uint uStack_8c;
  float fStack_88;
  uint uStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  float fStack_64;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar3 = FUN_0042e1a0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_34 = param_2 * *(float *)(param_1 + 0xc1d0);
  iVar3 = param_1 + 0x158;
  while (0.0 < fStack_34) {
    uVar8 = FUN_00524270(iVar3,afStack_124 + 0x3c);
    FUN_00434a80(param_1,uVar8);
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
  iVar4 = FUN_00524770(iVar3);
  iVar4 = *(int *)(iVar4 + 0x24);
  iStack_1c = iVar4;
  iVar5 = FUN_00432240(param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar4) {
    case 0:
    case 6:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar3 = *(int *)(param_1 + 0xc1e8);
      iStack_24 = param_1 + 0x158;
      if (iVar3 == 0) {
        iVar3 = FUN_004a0fe0(param_1,param_2);
        if (iVar3 != 0) {
          FUN_005247c0(iStack_24,1,1);
        }
      }
      else {
        fStack_50 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_4c = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_48 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_128 = fStack_50;
        afStack_124[(uint)bVar6 * -2] = afStack_124[(uint)bVar6 * -2 + 0x36];
        afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x37];
        fStack_38 = SQRT(afStack_124[1] * afStack_124[1] +
                         fStack_128 * fStack_128 + afStack_124[0] * afStack_124[0]);
        fStack_2c = fStack_38;
        if (fStack_38 < 0x40000000) {
          FUN_005a7520(&fStack_128);
          uStack_8c = uStack_80;
          afStack_124[(uint)bVar6 * -2 + 0x27] = afStack_124[(uint)bVar6 * -2 + 0x2a];
          afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28] =
               afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
          fStack_14 = (float)FUN_0040cd60(fStack_88 - *(float *)(param_1 + 0x34));
          if (ABS(fStack_14) < (float)_DAT_005e51c2) {
            if (iStack_1c == 0) {
              uVar8 = 2;
            }
            else {
              uVar8 = 8;
            }
            FUN_005247c0(iStack_24,uVar8,1);
            iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc268));
            if (iVar3 == 0) {
              uVar8 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                (param_1,"hotdemon-attack.wav");
              *(uint *)(param_1 + 0xc268) = uVar8;
            }
          }
        }
        if (fStack_2c < *(float *)(param_1 + 0xc1e0)) {
          if (_DAT_00602308 <= fStack_2c) {
            FUN_005247c0(param_1 + 0x158,7,1);
            *(uint *)(param_1 + 0xc1e4) = 0;
          }
          else {
            FUN_005247c0(param_1 + 0x158,1,1);
            *(uint *)(param_1 + 0xc1e4) = 0;
          }
        }
      }
      break;
    case 1:
    case 7:
    case 0xf:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      fVar2 = 0x40000000;
      iStack_20 = param_1 + 0x158;
      if (*(int *)(param_1 + 0xc1e8) == 0) {
        iVar3 = FUN_004a0fe0(param_1,param_2);
        if (iVar3 == 0) {
          if (iStack_1c == 1) {
            FUN_005247c0(iStack_20,0,1);
          }
          else {
            FUN_005247c0(iStack_20,6,1);
          }
        }
        else {
          FUN_005247c0(iStack_20,1,1);
        }
      }
      else {
        fStack_28 = 0x40000000;
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_134[0] = 0.0;
        afStack_134[1] = 0.0;
        afStack_134[2] = fVar2;
        uVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xc1e8),afStack_160 + 0xb,0x3f000000,0x3e32b8c2);
        iVar3 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar8);
        if (-1 < iVar3) {
          iVar3 = *(int *)(param_1 + 0xc1e8);
          afStack_124[2] = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
          afStack_124[3] = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
          fStack_114 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
          fStack_140 = afStack_124[2];
          afStack_160[(uint)bVar6 * -2 + 9] = afStack_124[(uint)bVar6 * -2 + 3];
          afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
               afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          fStack_18 = SQRT(fStack_138 * fStack_138 + fStack_140 * fStack_140);
          uStack_13c = 0;
          fStack_30 = fStack_18;
          if ((_DAT_00602308 < fStack_18) && (iStack_1c != 7)) {
            *(uint *)(param_1 + 0xc1e4) = 0;
            FUN_005247c0(iStack_20,7,1);
          }
          if ((fStack_30 <= fStack_28) && (*(float *)(param_1 + 0xc1e4) <= 0.0)) {
            iVar3 = *(int *)(param_1 + 0xc1e8);
            fStack_74 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_70 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_6c = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_ec[0] = fStack_74;
            afStack_124[(uint)bVar6 * -2 + 0xf] = afStack_124[(uint)bVar6 * -2 + 0x2d];
            afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
                 afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e];
            FUN_005a7520(afStack_124 + 0xe);
            uStack_68 = uStack_44;
            afStack_124[(uint)bVar6 * -2 + 0x30] = afStack_124[(uint)bVar6 * -2 + 0x39];
            afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31] =
                 afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3a];
            fStack_14 = (float)FUN_0040cd60(fStack_64 - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005e51c2) {
              if (iStack_1c == 7) {
                uVar8 = 8;
              }
              else {
                uVar8 = 2;
              }
              FUN_005247c0(param_1 + 0x158,uVar8,1);
              iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc268));
              if (iVar3 == 0) {
                uVar8 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                  (param_1,"hotdemon-attack.wav");
                *(uint *)(param_1 + 0xc268) = uVar8;
              }
              *(uint *)(param_1 + 0xc1e4) = 0x40000000;
            }
          }
          if (*(float *)(param_1 + 0xc1e0) < fStack_30) {
            if (iStack_1c == 7) {
              FUN_005247c0(param_1 + 0x158,6,1);
              *(uint *)(param_1 + 0xc1e4) = 0;
            }
            else {
              FUN_005247c0(param_1 + 0x158,0,1);
              *(uint *)(param_1 + 0xc1e4) = 0;
            }
          }
        }
      }
      break;
    case 2:
    case 8:
      FUN_0042c010(auStack_1a0);
      fStack_19c = (float)FUN_0040cc00(0x40e00000,0x41700000);
      iStack_16c = param_1;
      iStack_168 = param_1;
      fStack_14 = fStack_19c;
      FUN_005b5080(&DAT_02c8af28,_DAT_01d06bd4 * 0x30 + param_1 + 0xfd8,0x3ecccccd,auStack_1a0);
      pfVar7 = afStack_124 + 8;
      afStack_104[0] = (float)uStack_110;
      afStack_124[(uint)bVar6 * -2 + 9] = afStack_124[(uint)bVar6 * -2 + 6];
      afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      FUN_00408b40(param_1,pfVar7);
      pfVar7 = afStack_124 + 0xb;
      afStack_f8[0] = (float)uStack_14c;
      afStack_124[(uint)bVar6 * -2 + 0xc] = afStack_160[(uint)bVar6 * -2 + 6];
      iVar3 = param_1;
      afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
           afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      FUN_004a0770(iVar3,pfVar7);
      break;
    case 5:
    case 0xb:
      if ((*(int *)(param_1 + 0xc1d4) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_00569040(param_1 + 0x158,0);
        pfVar7 = afStack_124 + 0x1a;
        afStack_bc[0] = (float)uStack_a4;
        afStack_124[(uint)bVar6 * -2 + 0x1b] = afStack_124[(uint)bVar6 * -2 + 0x21];
        afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
             afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
        FUN_00408b40(param_1,pfVar7);
        uVar8 = 0;
        uStack_164 = uStack_98;
        afStack_160[(uint)bVar6 * -2] = afStack_124[(uint)bVar6 * -2 + 0x24];
        afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25];
        FUN_004e62e0(0x01CD0E3C,&uStack_164,uVar8);
        *(uint *)(param_1 + 0xc1d4) = 1;
      }
    }
    goto switchD_004f04e8_caseD_3;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004efd5e:
      uVar8 = 1;
    }
    else {
LAB_004eff1b:
      uVar8 = 0;
    }
    FUN_005247c0(param_1 + 0x158,uVar8,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004efd5e;
    if (uVar1 != 3) goto LAB_004eff1b;
    FUN_005247c0(iVar3,0,1);
    FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_004f04e8_caseD_3:
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  iVar3 = FUN_0042e120(param_1);
  if (iVar3 != 0) {
    FUN_0042d700(param_1,param_2);
    fStack_5c = *(float *)(param_1 + 0x2518) * param_2;
    fStack_58 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_54 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_b0 = fStack_5c;
    afStack_124[(uint)bVar6 * -2 + 0x1e] = afStack_124[(uint)bVar6 * -2 + 0x33];
    afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
         afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x34];
    afStack_160[2] = fStack_b0 + *(float *)(param_1 + 0x250c);
    afStack_160[3] = fStack_ac + *(float *)(param_1 + 0x2510);
    fStack_150 = fStack_a8 + *(float *)(param_1 + 0x2514);
    fStack_d4 = afStack_160[2];
    afStack_124[(uint)bVar6 * -2 + 0x15] = afStack_160[(uint)bVar6 * -2 + 3];
    afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
         afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    fStack_e0 = fStack_d4 + *(float *)(param_1 + 0x249c);
    fStack_dc = fStack_d0 + *(float *)(param_1 + 0x24a0);
    fStack_d8 = fStack_cc + *(float *)(param_1 + 0x24a4);
    afStack_c8[0] = fStack_e0;
    afStack_124[(uint)bVar6 * -2 + 0x18] = afStack_124[(uint)bVar6 * -2 + 0x12];
    afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
         afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042d750(param_1,afStack_124 + 0x17);
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80(param_1,param_2);
  return;
}
