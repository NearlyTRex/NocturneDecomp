// Name: FUN_004768a0
// Address: 004768a0
// Address Range: [[004768a0, 00476fe6]]
// Convention: unknown
// Signature: void FUN_004768a0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004768a0(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_1104 [997];
  float *pfVar5;
  byte auStack_158 [4];
  float fStack_154;
  int iStack_124;
  int iStack_120;
  float fStack_11c;
  float afStack_118 [5];
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float afStack_ec [3];
  float fStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  float afStack_c8 [3];
  float afStack_bc [3];
  float afStack_b0 [3];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint uStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  uint uStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float afStack_44 [5];
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar4 = 0;
  iVar2 = FUN_0042e1a0(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  FUN_00434790(param_1,param_2);
  FUN_00432f10(param_1,param_2,0);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_24 = param_2 * *(float *)(param_1 + 0xc1d0);
  while (0.0 < fStack_24) {
    uVar3 = FUN_00524270(param_1 + 0x158,&fStack_24);
    FUN_00434a80(param_1,uVar3);
  }
  iVar2 = FUN_00524770(param_1 + 0x158);
  iVar2 = *(int *)(iVar2 + 0x24);
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  iStack_18 = iVar2;
  FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
  if (iVar2 == 2) {
    *(float *)(param_1 + 0x2528) = *(float *)(param_1 + 0x2528) * (float)_DAT_005da708;
  }
  iVar2 = FUN_00432240(param_1,param_2);
  if (iVar2 == 0) {
    switch(iStack_18) {
    case 0:
      iVar2 = FUN_004a0fe0(param_1,param_2);
      iStack_1c = param_1 + 0x158;
      if (iVar2 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        iVar2 = *(int *)(param_1 + 0xc1e8);
        if (iVar2 != 0) {
          fStack_80 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_7c = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_78 = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_104 = fStack_80;
          afStack_118[(uint)bVar4 * -2 + 6] = afStack_dc[(uint)bVar4 * -2 + 0x18];
          afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
               afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
          fStack_2c = fStack_fc * fStack_fc + fStack_104 * fStack_104 + fStack_100 * fStack_100;
          fStack_28 = (float)(((int)fStack_2c >> 1) + _DAT_01cc804c);
          if (fStack_28 < _DAT_005fee94) {
            uVar3 = 1;
          }
          else {
            uVar3 = 2;
          }
          FUN_005247c0(iStack_1c,uVar3,1);
          iVar2 = FUN_0057d9c0(0x02C82A60,*(uint *)(param_1 + 0xc270));
          if (iVar2 == 0) {
            uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog5.wav");
            *(uint *)(param_1 + 0xc270) = uVar3;
          }
        }
      }
      else {
        FUN_005247c0(iStack_1c,1,1);
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar2 = *(int *)(param_1 + 0xc1e8);
      iStack_20 = param_1 + 0x158;
      if (iVar2 == 0) {
        iVar2 = FUN_004a0fe0(param_1,param_2);
        if (iVar2 == 0) {
          FUN_005247c0(iStack_20,0,1);
        }
        else {
          FUN_005247c0(iStack_20,1,1);
        }
      }
      else {
        afStack_dc[2] = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20);
        afStack_dc[3] = *(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24);
        fStack_cc = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28);
        fStack_f8 = afStack_dc[2];
        afStack_118[(uint)bVar4 * -2 + 9] = afStack_dc[(uint)bVar4 * -2 + 3];
        afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
             afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        if ((_DAT_005fee94 <
             SQRT(fStack_f0 * fStack_f0 + fStack_f8 * fStack_f8 + fStack_f4 * fStack_f4)) &&
           (iStack_18 == 1)) {
          FUN_005247c0(iStack_20,2,1);
        }
        afStack_ec[2] = (float)0x40400000;
        uStack_30 = 0x40400000;
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_ec[0] = 0.0;
        afStack_ec[1] = 0.0;
        uVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xc1e8),afStack_118 + 0xb,0x3f000000,0x3e32b8c2);
        iVar2 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar3);
        if (iVar2 < 0) {
          FUN_00445430(PTR_DAT_00611100,"%s gave up chase - I'm confused\n",param_1);
          FUN_005247c0(param_1 + 0x158,0,1);
        }
        else if ((0 < iVar2) && (*(float *)(param_1 + 0xc1e4) <= 0.0)) {
          fStack_14 = (float)FUN_0040cc00(0,0x3f800000);
          if ((float)_DAT_005da710 < fStack_14) {
            uVar3 = 3;
          }
          else {
            uVar3 = 4;
          }
          FUN_005247c0(param_1 + 0x158,uVar3,1);
          *(uint *)(param_1 + 0xc1e4) = 0x40200000;
        }
      }
      break;
    case 3:
    case 4:
      FUN_0042c010(auStack_158);
      fStack_154 = (float)FUN_0040cc00(0x40e00000,0x41700000);
      iStack_124 = param_1;
      iStack_120 = param_1;
      fStack_14 = fStack_154;
      FUN_005b5080(&DAT_02c8af28,param_1 + 0xfd8 + *(int *)(param_1 + 0xc26c) * 0x30,0x3f333333,
                   auStack_158);
      pfVar5 = afStack_dc + 0x26;
      afStack_44[0] = afStack_118[2];
      afStack_dc[(uint)bVar4 * -2 + 0x27] = afStack_118[(uint)bVar4 * -2 + 3];
      afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x28] =
           afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      FUN_00408b40(param_1,pfVar5);
      pfVar5 = afStack_dc + 0xb;
      afStack_b0[0] = (float)uStack_68;
      afStack_dc[(uint)bVar4 * -2 + 0xc] = afStack_dc[(uint)bVar4 * -2 + 0x1e];
      iVar2 = param_1;
      afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f];
      FUN_004a0770(iVar2,pfVar5);
      iVar2 = FUN_0057d9c0(0x02C82A60,*(uint *)(param_1 + 0xc270));
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog5.wav");
        *(uint *)(param_1 + 0xc270) = uVar3;
      }
      break;
    case 7:
      if ((*(int *)(param_1 + 0xc1d4) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_00569040(param_1 + 0x158,0);
        pfVar5 = afStack_dc + 8;
        afStack_bc[0] = (float)uStack_5c;
        afStack_dc[(uint)bVar4 * -2 + 9] = afStack_dc[(uint)bVar4 * -2 + 0x21];
        afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
             afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x22];
        FUN_00408b40(param_1,pfVar5);
        uVar3 = 0;
        afStack_c8[0] = (float)uStack_98;
        afStack_dc[(uint)bVar4 * -2 + 6] = afStack_dc[(uint)bVar4 * -2 + 0x12];
        afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
             afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
        FUN_004e62e0(0x01CD0E3C,afStack_dc + 5,uVar3);
        *(uint *)(param_1 + 0xc1d4) = 1;
      }
    }
    goto switchD_00476fe0_caseD_5;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004769c2:
      uVar3 = 1;
    }
    else {
LAB_00476b9c:
      uVar3 = 0;
    }
    FUN_005247c0(param_1 + 0x158,uVar3,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004769c2;
    if (uVar1 != 3) goto LAB_00476b9c;
    FUN_005247c0(param_1 + 0x158,0,1);
    FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_00476fe0_caseD_5:
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  iVar2 = FUN_0042e120(param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0xc1e8);
    if ((iVar2 != 0) &&
       (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2), iVar2 == param_1)) {
      FUN_00559250(0x01E82168,*(uint *)(param_1 + 0xc1e8));
    }
    FUN_0042d700(param_1,param_2);
    fStack_50 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_4c = *(float *)(param_1 + 0x251c) * param_2;
    fStack_48 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_8c = fStack_50;
    afStack_dc[(uint)bVar4 * -2 + 0x15] = afStack_dc[(uint)bVar4 * -2 + 0x24];
    afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16] =
         afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x25];
    fStack_74 = fStack_8c + *(float *)(param_1 + 0x250c);
    fStack_70 = fStack_88 + *(float *)(param_1 + 0x2510);
    fStack_6c = fStack_84 + *(float *)(param_1 + 0x2514);
    fStack_11c = fStack_74;
    afStack_118[(uint)bVar4 * -2] = afStack_dc[(uint)bVar4 * -2 + 0x1b];
    afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c];
    fStack_a4 = fStack_11c + *(float *)(param_1 + 0x249c);
    fStack_a0 = afStack_118[0] + *(float *)(param_1 + 0x24a0);
    fStack_9c = afStack_118[1] + *(float *)(param_1 + 0x24a4);
    fStack_e0 = fStack_a4;
    afStack_dc[(uint)bVar4 * -2] = afStack_dc[(uint)bVar4 * -2 + 0xf];
    afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042d750(param_1,&fStack_e0);
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80(param_1,param_2);
  return;
}
