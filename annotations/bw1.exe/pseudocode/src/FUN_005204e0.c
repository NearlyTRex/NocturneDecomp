// Name: FUN_005204e0
// Address: 005204e0
// Address Range: [[005204e0, 00520c05]]
// Convention: unknown
// Signature: void FUN_005204e0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005204e0(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  uint uVar7;
  float fStack_1b60;
  byte auStack_1b5c [2740];
  float afStack_10a8 [1054];
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  char *pcStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  if (*(int *)(param_1 + 0x1ffa8) == 4) {
    return;
  }
  iVar3 = FUN_0042e1a0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  fVar2 = *(float *)(param_1 + 0xc1d0) - param_2;
  *(float *)(param_1 + 0xc1d0) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0xc1d0) = 0;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_1b60 = param_2;
  while (0.0 < fStack_1b60) {
    uVar4 = FUN_00524270(param_1 + 0x158,&fStack_1b60);
    FUN_00434a80(param_1,uVar4);
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2);
  iVar3 = FUN_00432240(param_1,param_2);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0xc1d4) == 2) {
      FUN_00520c10(param_1,param_2);
    }
    iVar3 = FUN_00524770(param_1 + 0x158);
    uVar7 = *(uint *)(iVar3 + 0x24);
    if ((((uVar7 == 0) || (uVar7 < 2)) || (uVar7 == 2)) && (*(int *)(param_1 + 0x2500) != 0)) {
      uVar7 = (uint)(*(int *)(param_1 + 0xc1d8) != 0);
      if (*(int *)(param_1 + 0xc1dc) != 0) {
        uVar7 = 2;
      }
      if (*(int *)(param_1 + 0xc1f0) != 0) {
        if (*(int *)(param_1 + 0x22354) == 0) {
          FUN_00521230(param_1);
        }
        *(uint *)(param_1 + 0xc1f0) = 0;
      }
      *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0xc200) * *(float *)(param_1 + 0x2528);
      iVar3 = FUN_00524770(param_1 + 0x158);
      if (uVar7 != *(uint *)(iVar3 + 0x24)) goto LAB_005205c5;
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x273c);
    if (uVar7 < 2) {
      if (uVar7 == 1) goto LAB_005205c4;
LAB_00520855:
      uVar7 = 0;
    }
    else {
      if (2 < uVar7) {
        if (uVar7 == 3) {
          FUN_005247c0(param_1 + 0x158,0,1);
          FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
          goto LAB_005205cd;
        }
        goto LAB_00520855;
      }
LAB_005205c4:
      uVar7 = 1;
    }
LAB_005205c5:
    FUN_005247c0(param_1 + 0x158,uVar7,1);
  }
LAB_005205cd:
  if (*(int *)(param_1 + 0x26fc) == 0) {
    FUN_0042d700(param_1,param_2);
    afStack_10a8[0x3fd] = *(float *)(param_1 + 0x2518) * param_2;
    afStack_10a8[0x3fe] = *(float *)(param_1 + 0x251c) * param_2;
    afStack_10a8[0x3ff] = *(float *)(param_1 + 0x2520) * param_2;
    afStack_10a8[0x406] = afStack_10a8[0x3fd];
    afStack_10a8[(uint)bVar6 * -2 + 0x407] = afStack_10a8[(uint)bVar6 * -2 + 0x3fe];
    afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x408] =
         afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3ff];
    afStack_10a8[0x403] = *(float *)(param_1 + 0x249c) + *(float *)(param_1 + 0x250c);
    afStack_10a8[0x404] = *(float *)(param_1 + 0x24a0) + *(float *)(param_1 + 0x2510);
    afStack_10a8[0x405] = *(float *)(param_1 + 0x24a4) + *(float *)(param_1 + 0x2514);
    afStack_10a8[0x40c] = afStack_10a8[0x403];
    afStack_10a8[(uint)bVar6 * -2 + 0x40d] = afStack_10a8[(uint)bVar6 * -2 + 0x404];
    afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x40e] =
         afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x405];
    afStack_10a8[0x418] = afStack_10a8[0x40c] + afStack_10a8[0x406];
    afStack_10a8[0x419] = afStack_10a8[0x40d] + afStack_10a8[0x407];
    afStack_10a8[0x41a] = afStack_10a8[0x40e] + afStack_10a8[0x408];
    afStack_10a8[0x400] = afStack_10a8[0x40c] + afStack_10a8[0x406];
    afStack_10a8[(uint)bVar6 * -2 + 0x401] = afStack_10a8[(uint)bVar6 * -2 + 0x419];
    afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x402] =
         afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x41a];
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    FUN_0042d750(param_1,afStack_10a8 + 0x400);
    goto LAB_005207a4;
  }
  if (*(int *)(param_1 + 0x2700) == 0) {
    FUN_00408bb0(param_1,*(int *)(param_1 + 0x26fc) + 0x20);
    afStack_10a8[0x3fa] = afStack_10a8[0x41b];
    afStack_10a8[(uint)bVar6 * -2 + 0x3fb] = afStack_10a8[(uint)bVar6 * -2 + 0x41c];
    afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3fc] =
         afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x41d];
    FUN_005a7520(afStack_10a8 + 0x3fa);
    afStack_10a8[0x40f] = afStack_10a8[0x409];
    afStack_10a8[(uint)bVar6 * -2 + 0x410] = afStack_10a8[(uint)bVar6 * -2 + 0x40a];
    afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x411] =
         afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x40b];
    fStack_14 = (float)FUN_0040cd60(afStack_10a8[0x410]);
    fStack_18 = fStack_14;
    if (fStack_14 < _DAT_005ea282) {
      fStack_18 = fStack_14 + _DAT_005ea286;
    }
    if (_DAT_005ea28a < fStack_18) {
      fStack_18 = fStack_18 + _DAT_005ea28e;
    }
    fStack_1c = param_2 * _DAT_005ea286;
    fStack_20 = -fStack_1c;
    if (fStack_18 < fStack_20) {
      fStack_18 = fStack_20;
    }
    if (fStack_1c < fStack_18) {
      fStack_18 = fStack_1c;
    }
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_18;
    FUN_004088b0(param_1);
  }
  iStack_30 = *(int *)(param_1 + 0x26fc);
  fStack_14 = *(float *)(iStack_30 + 0x154);
  iStack_28 = param_1 + 0x158;
  FUN_00569130(iStack_28,0);
  fVar2 = fStack_14;
  iVar3 = iStack_30;
  afStack_10a8[0x415] = afStack_10a8[0x412];
  afStack_10a8[(uint)bVar6 * -2 + 0x416] = afStack_10a8[(uint)bVar6 * -2 + 0x413];
  afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x417] =
       afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x414];
  iVar3 = (**(code **)((int)fVar2 + 0x110))(iVar3,param_1,afStack_10a8 + 0x415);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0x26fc) = 0;
LAB_00520791:
    iVar3 = param_1 + 0x158;
  }
  else {
    if (*(int *)(param_1 + 0x26fc) == 0) goto LAB_00520791;
    iVar3 = iStack_28;
    if (*(int *)(param_1 + 0xc1e4) == 0) goto LAB_005207a4;
  }
  FUN_005247c0(iVar3,0,1);
LAB_005207a4:
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  FUN_00433e80(param_1,param_2);
  if (*(int *)(param_1 + 0x22354) == 0) {
    if (*(int *)(param_1 + 0x22350) == 0) {
      iVar3 = FUN_004a6c30(0x01C51D80,param_1 + 0x223c0);
      if (iVar3 != 0) {
        FUN_00521230(param_1);
        return;
      }
    }
    else {
      iVar3 = FUN_004a6c30(0x01C51D80,param_1 + 0x2235c);
      if (iVar3 != 0) {
        FUN_00521230(param_1);
        return;
      }
    }
  }
  else {
    uVar4 = FUN_00524770(param_1 + 0x158);
    FUN_00524ae0(param_1 + 0x1ffac,uVar4,*(uint *)(param_1 + 0x160));
    FUN_00567580(param_1 + 0x1ffac);
    param_2 = *(float *)(param_1 + 0x22358) + param_2;
    *(float *)(param_1 + 0x22358) = param_2;
    if (_DAT_00603ef8 < param_2) {
      if (*(int *)(param_1 + 0x22350) == 0) {
        pcVar5 = "moloch_h.dfm";
        *(uint *)(param_1 + 0x22350) = 1;
        pcStack_24 = "moloch_d.dfm";
      }
      else {
        pcVar5 = "moloch_d.dfm";
        *(uint *)(param_1 + 0x22350) = 0;
        pcStack_24 = "moloch_h.dfm";
      }
      iVar3 = param_1 + 0x1ffac;
      *(uint *)(param_1 + 0x22354) = 0;
      *(uint *)(param_1 + 0x22358) = 0;
      FUN_0056acc0(iVar3,auStack_1b5c);
      fStack_14 = (float)FUN_00524770(iVar3);
      iVar1 = param_1 + 0x158;
      uStack_2c = *(uint *)(param_1 + 0x1ffb4);
      FUN_00569f50(iVar1,pcVar5);
      FUN_00569b20(iVar1);
      FUN_00524ae0(iVar1,fStack_14,uStack_2c);
      FUN_00569f50(iVar3,pcStack_24);
      FUN_00569b20(iVar3);
      param_1 = param_1 + 0x22424;
      FUN_005230c0(param_1,0,iVar1);
      FUN_005230c0(param_1,1,iVar3);
      FUN_00523310(param_1);
      return;
    }
  }
  return;
}
