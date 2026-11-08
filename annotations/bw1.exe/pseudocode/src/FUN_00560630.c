// Name: FUN_00560630
// Address: 00560630
// Address Range: [[00560630, 00560fdf]]
// Convention: unknown
// Signature: void FUN_00560630(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00560630(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  float afStackY_1100 [982];
  float *pfVar7;
  byte auStack_190 [4];
  float fStack_18c;
  int iStack_15c;
  int iStack_158;
  byte auStack_154 [4];
  float fStack_150;
  int iStack_120;
  int iStack_11c;
  float fStack_118;
  float afStack_114 [4];
  float fStack_104;
  float afStack_100 [3];
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [3];
  float fStack_d0;
  float afStack_cc [5];
  float afStack_b8 [3];
  float afStack_ac [3];
  uint uStack_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint uStack_88;
  uint uStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  uint uStack_40;
  float afStack_3c [2];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar2 = FUN_0042e1a0(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_00524770(param_1 + 0x158);
  fStack_18 = *(float *)(param_1 + 0x160);
  iStack_24 = *(int *)(iVar2 + 0x24);
  iVar2 = FUN_00524770(param_1 + 0x158);
  fStack_34 = (float)*(int *)(iVar2 + 100);
  FUN_00434790(param_1,param_2);
  FUN_00432f10(param_1,param_2,*(int *)(param_1 + 0xc1d4) == 1);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  afStack_3c[0] = param_2 * *(float *)(param_1 + 0xc1d0) * *(float *)(param_1 + 0xc288);
  while (0.0 < afStack_3c[0]) {
    uVar3 = FUN_00524270(param_1 + 0x158,afStack_3c);
    FUN_00434a80(param_1,uVar3);
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
  iVar2 = FUN_00432240(param_1,param_2);
  if (iVar2 == 0) {
    switch(iStack_24) {
    case 0:
      fVar6 = ((float10)fStack_18 * (float10)_DAT_005f18bd) / (float10)fStack_34;
      *(uint *)(param_1 + 0xc298) = 0;
      *(uint *)(param_1 + 0xc28c) = 3;
      FUN_005c03a0(param_1);
      *(int *)(param_1 + 0xc294) = (int)ROUND(fVar6);
      FUN_005610e0();
      break;
    case 1:
      iVar4 = FUN_004a0fe0(param_1,param_2);
      iVar2 = param_1 + 0x158;
      if (iVar4 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        if (*(int *)(param_1 + 0xc1e8) != 0) {
          iVar4 = FUN_0040cc60(0,0,1);
          FUN_005247c0(iVar2,iVar4 + 2);
          FUN_00560fe0(param_1);
        }
      }
      else {
        fStack_14 = (float)FUN_00525020(iVar2);
        if ((float)_DAT_005f18ad < fStack_14) {
          iVar4 = FUN_0040cc60(0,0,1);
          FUN_005247c0(iVar2,iVar4 + 2);
        }
      }
      break;
    case 2:
      FUN_0042c010(auStack_154);
      fStack_150 = (float)FUN_0040cc00(0x41700000,0x420c0000);
      iStack_120 = param_1;
      iStack_11c = param_1;
      fStack_14 = fStack_150;
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar2 = *(int *)(param_1 + 0xc1e8);
      iStack_20 = param_1 + 0x158;
      if (iVar2 == 0) {
        iVar4 = FUN_004a0fe0(param_1,param_2);
        iVar2 = iStack_20;
        if (iVar4 == 0) {
          iVar2 = FUN_0040cc60(0,0,1);
          FUN_005247c0(iStack_20,iVar2 + 1);
        }
        else {
          fStack_14 = (float)FUN_00525020(iStack_20);
          if ((float)_DAT_005f18ad < fStack_14) {
            iVar4 = FUN_0040cc60(0,0,1);
            FUN_005247c0(iVar2,iVar4 + 2);
          }
        }
        break;
      }
      fStack_64 = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20);
      fStack_60 = *(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24);
      fStack_5c = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28);
      fStack_e8 = fStack_64;
      afStack_114[(uint)bVar5 * -2 + 0xc] = afStack_cc[(uint)bVar5 * -2 + 0x1b];
      iVar2 = iStack_20;
      afStack_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
      fStack_2c = SQRT(fStack_e0 * fStack_e0 + fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4);
      fStack_1c = fStack_2c;
      if ((_DAT_00605348 < fStack_2c) && (iStack_24 == 2)) {
        if (*(float *)(param_1 + 0xc1e4) <= (float)_DAT_005f18a5) {
          fStack_14 = (float)FUN_00525020(iStack_20);
          if ((float)_DAT_005f18ad < fStack_14) {
            iVar4 = FUN_0040cc60(0,0,1);
            iVar2 = iStack_20;
            goto LAB_00560d8f;
          }
        }
        else {
          fStack_14 = (float)FUN_00525020(iStack_20);
          if ((float)_DAT_005f18ad < fStack_14) {
            iVar4 = FUN_0040cc60(0,0,1);
LAB_00560d8f:
            FUN_005247c0(iVar2,iVar4 + 2);
          }
        }
      }
      if (((_DAT_005f18b5 < fStack_2c) && (fStack_2c < _DAT_005f18b9)) &&
         (iVar2 = FUN_0040cc60(0,10), iVar2 == 5)) {
        FUN_005247c0(param_1 + 0x158,3,1);
        *(uint *)(param_1 + 0xc1e4) = 0x40200000;
      }
      afStack_dc[2] = (float)0x41000000;
      uStack_40 = 0x41000000;
      *(uint *)(param_1 + 0x24a4) = 0;
      *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
      *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
      afStack_dc[0] = 0.0;
      afStack_dc[1] = 0.0;
      uVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                        (*(int *)(param_1 + 0xc1e8),afStack_114 + 0xe,0x3f000000,0x3e32b8c2);
      iVar2 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar3);
      if (iVar2 < 0) {
        FUN_00445430(PTR_DAT_00611100,"%s gave up chase - I'm confused\n",param_1);
        FUN_005247c0(param_1 + 0x158,1,1);
      }
      else if ((0 < iVar2) && (*(float *)(param_1 + 0xc1e4) <= 0.0)) {
        FUN_005247c0(param_1 + 0x158,3,1);
        *(uint *)(param_1 + 0xc1e4) = 0x40200000;
      }
      break;
    case 3:
    case 4:
      FUN_0042c010(auStack_190);
      fStack_18c = (float)FUN_0040cc00(0x41700000,0x420c0000);
      iStack_15c = param_1;
      iStack_158 = param_1;
      fStack_14 = fStack_18c;
      FUN_005b5080(&DAT_02c8af28,*(int *)(param_1 + 0xc278) * 0x30 + param_1 + 0xfd8,0x40800000,
                   auStack_190);
      pfVar7 = afStack_cc + 5;
      afStack_b8[0] = (float)uStack_7c;
      afStack_cc[(uint)bVar5 * -2 + 6] = afStack_cc[(uint)bVar5 * -2 + 0x15];
      afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
      FUN_00408b40(param_1,pfVar7);
      pfVar7 = afStack_cc + 8;
      afStack_ac[0] = (float)uStack_a0;
      afStack_cc[(uint)bVar5 * -2 + 9] = afStack_cc[(uint)bVar5 * -2 + 0xc];
      iVar2 = param_1;
      afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
      FUN_004a0770(iVar2,pfVar7);
      FUN_004a1b70(0x01C51D80,"ScorpTailAttack");
      iVar2 = FUN_0057d9c0(0x02C82A60,*(uint *)(param_1 + 0xc27c));
      if (iVar2 == 0) {
        FUN_00561020(param_1);
      }
      break;
    case 6:
      FUN_004a1b70(0x01C51D80,"ScorpDying");
      fVar6 = ((float10)1 - (float10)fStack_18 / (float10)fStack_34) * (float10)_DAT_005f189d;
      *(uint *)(param_1 + 0xc28c) = 3;
      FUN_005c03a0();
      *(int *)(param_1 + 0xc294) = (int)ROUND(fVar6);
      break;
    case 7:
      if ((*(int *)(param_1 + 0xc1d4) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_00569040(param_1 + 0x158,0);
        pfVar7 = afStack_cc + 2;
        afStack_cc[2] = (float)uStack_88;
        afStack_cc[(uint)bVar5 * -2 + 3] = afStack_cc[(uint)bVar5 * -2 + 0x12];
        afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
        FUN_00408b40(param_1,pfVar7);
        *(uint *)(param_1 + 0xc1d4) = 1;
        *(uint *)(param_1 + 0xc294) = 0;
        *(uint *)(param_1 + 0xc28c) = 3;
      }
    }
    goto switchD_00560f6e_caseD_5;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00560768:
      fStack_14 = (float)FUN_00525020(param_1 + 0x158);
      if (fStack_14 <= (float)_DAT_005f18ad) goto LAB_005607a9;
      iVar2 = FUN_0040cc60(0,0,1);
      iVar2 = iVar2 + 2;
    }
    else {
LAB_005609e5:
      fStack_14 = (float)FUN_00525020(param_1 + 0x158);
      if (fStack_14 <= (float)_DAT_005f18ad) goto LAB_005607a9;
      iVar2 = FUN_0040cc60(0,0,1);
      iVar2 = iVar2 + 1;
    }
    FUN_005247c0(param_1 + 0x158,iVar2);
  }
  else {
    if (uVar1 < 3) goto LAB_00560768;
    if (uVar1 != 3) goto LAB_005609e5;
    FUN_005247c0(param_1 + 0x158,1,1);
    FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
  }
LAB_005607a9:
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_00560f6e_caseD_5:
  if (((iStack_24 != 6) && (iStack_24 != 7)) && (iStack_24 != 0)) {
    iVar2 = *(int *)(param_1 + 0xc1e8);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0xc28c) = 3;
      *(uint *)(param_1 + 0xc294) = 0;
    }
    else {
      fStack_94 = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20);
      fStack_90 = *(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24);
      fStack_8c = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28);
      fStack_118 = fStack_94;
      afStack_114[(uint)bVar5 * -2] = afStack_cc[(uint)bVar5 * -2 + 0xf];
      afStack_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
      fStack_30 = SQRT(afStack_114[1] * afStack_114[1] +
                       fStack_118 * fStack_118 + afStack_114[0] * afStack_114[0]);
      fStack_28 = *(float *)(param_1 + 0xc1e0) * _DAT_005f18c5;
      if (fStack_30 <= fStack_28) {
        fVar6 = ((float10)fStack_28 - (float10)fStack_30) / (float10)fStack_28;
        fVar6 = (fVar6 * (float10)_DAT_005f18c9 - fVar6 * fVar6) * (float10)_DAT_005f18cd;
        FUN_005c03a0();
        *(int *)(param_1 + 0xc294) = (int)ROUND(fVar6);
        *(uint *)(param_1 + 0xc28c) = 0;
        if (0xffdc < *(int *)(param_1 + 0xc294)) {
          *(uint *)(param_1 + 0xc294) = 0xffdc;
        }
      }
      else {
        *(uint *)(param_1 + 0xc294) = 0;
        *(uint *)(param_1 + 0xc28c) = 3;
      }
    }
  }
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  iVar2 = FUN_0042e120(param_1);
  if (iVar2 != 0) {
    FUN_0042d700(param_1,param_2);
    fStack_f4 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_f0 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_ec = *(float *)(param_1 + 0x2520) * param_2;
    fStack_58 = fStack_f4;
    afStack_cc[(uint)bVar5 * -2 + 0x1e] = afStack_114[(uint)bVar5 * -2 + 9];
    afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f] =
         afStack_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    fStack_70 = fStack_58 + *(float *)(param_1 + 0x250c);
    fStack_6c = fStack_54 + *(float *)(param_1 + 0x2510);
    fStack_68 = fStack_50 + *(float *)(param_1 + 0x2514);
    fStack_d0 = fStack_70;
    afStack_cc[(uint)bVar5 * -2] = afStack_cc[(uint)bVar5 * -2 + 0x18];
    afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
    afStack_114[2] = fStack_d0 + *(float *)(param_1 + 0x249c);
    afStack_114[3] = afStack_cc[0] + *(float *)(param_1 + 0x24a0);
    fStack_104 = afStack_cc[1] + *(float *)(param_1 + 0x24a4);
    afStack_100[0] = afStack_114[2];
    afStack_114[(uint)bVar5 * -2 + 6] = afStack_114[(uint)bVar5 * -2 + 3];
    afStack_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         afStack_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042d750(param_1,afStack_114 + 5);
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80(param_1,param_2);
  return;
}
