// Name: FUN_00501530
// Address: 00501530
// Address Range: [[00501530, 00501c55]]
// Convention: unknown
// Signature: void FUN_00501530(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00501530(int param_1,float param_2)

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
  if (*(int *)(param_1 + 0x25638) == 4) {
    return;
  }
  iVar3 = FUN_004244b0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  fVar2 = *(float *)(param_1 + 0x10a60) - param_2;
  *(float *)(param_1 + 0x10a60) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0x10a60) = 0;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  fStack_1b60 = param_2;
  while (0.0 < fStack_1b60) {
    uVar4 = FUN_005030c0(param_1 + 0x2b4,&fStack_1b60);
    FUN_0042aa00(param_1,uVar4);
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2);
  iVar3 = FUN_004287f0(param_1,param_2);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x10a64) == 2) {
      FUN_00501c60(param_1,param_2);
    }
    iVar3 = FUN_005035c0(param_1 + 0x2b4);
    uVar7 = *(uint *)(iVar3 + 0x24);
    if ((((uVar7 == 0) || (uVar7 < 2)) || (uVar7 == 2)) && (*(int *)(param_1 + 0x2570) != 0)) {
      uVar7 = (uint)(*(int *)(param_1 + 0x10a68) != 0);
      if (*(int *)(param_1 + 0x10a6c) != 0) {
        uVar7 = 2;
      }
      if (*(int *)(param_1 + 0x10a80) != 0) {
        if (*(int *)(param_1 + 0x278f8) == 0) {
          FUN_00502280(param_1);
        }
        *(uint *)(param_1 + 0x10a80) = 0;
      }
      *(float *)(param_1 + 0x2578) = *(float *)(param_1 + 0x10a90) * *(float *)(param_1 + 0x2598);
      iVar3 = FUN_005035c0(param_1 + 0x2b4);
      if (uVar7 != *(uint *)(iVar3 + 0x24)) goto LAB_00501615;
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x27ac);
    if (uVar7 < 2) {
      if (uVar7 == 1) goto LAB_00501614;
LAB_005018a5:
      uVar7 = 0;
    }
    else {
      if (2 < uVar7) {
        if (uVar7 == 3) {
          FUN_00503620(param_1 + 0x2b4,0,1);
          FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
          goto LAB_0050161d;
        }
        goto LAB_005018a5;
      }
LAB_00501614:
      uVar7 = 1;
    }
LAB_00501615:
    FUN_00503620(param_1 + 0x2b4,uVar7,1);
  }
LAB_0050161d:
  if (*(int *)(param_1 + 0x276c) == 0) {
    FUN_00423a10(param_1,param_2);
    afStack_10a8[0x3fd] = *(float *)(param_1 + 0x2588) * param_2;
    afStack_10a8[0x3fe] = *(float *)(param_1 + 0x258c) * param_2;
    afStack_10a8[0x3ff] = *(float *)(param_1 + 0x2590) * param_2;
    afStack_10a8[0x406] = afStack_10a8[0x3fd];
    afStack_10a8[(uint)bVar6 * -2 + 0x407] = afStack_10a8[(uint)bVar6 * -2 + 0x3fe];
    afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x408] =
         afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3ff];
    afStack_10a8[0x403] = *(float *)(param_1 + 0x2508) + *(float *)(param_1 + 0x257c);
    afStack_10a8[0x404] = *(float *)(param_1 + 0x250c) + *(float *)(param_1 + 0x2580);
    afStack_10a8[0x405] = *(float *)(param_1 + 0x2510) + *(float *)(param_1 + 0x2584);
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
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x250c);
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    FUN_00423a60(param_1,afStack_10a8 + 0x400);
    goto LAB_005017f4;
  }
  if (*(int *)(param_1 + 0x2770) == 0) {
    FUN_00408de0(param_1,*(int *)(param_1 + 0x276c) + 0x20);
    afStack_10a8[0x3fa] = afStack_10a8[0x41b];
    afStack_10a8[(uint)bVar6 * -2 + 0x3fb] = afStack_10a8[(uint)bVar6 * -2 + 0x41c];
    afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3fc] =
         afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x41d];
    FUN_005838f0(afStack_10a8 + 0x3fa);
    afStack_10a8[0x40f] = afStack_10a8[0x409];
    afStack_10a8[(uint)bVar6 * -2 + 0x410] = afStack_10a8[(uint)bVar6 * -2 + 0x40a];
    afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x411] =
         afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x40b];
    fStack_14 = (float)FUN_0040d0c0(afStack_10a8[0x410]);
    fStack_18 = fStack_14;
    if (fStack_14 < _DAT_005df235) {
      fStack_18 = fStack_14 + _DAT_005df239;
    }
    if (_DAT_005df23d < fStack_18) {
      fStack_18 = fStack_18 + _DAT_005df241;
    }
    fStack_1c = param_2 * _DAT_005df239;
    fStack_20 = -fStack_1c;
    if (fStack_18 < fStack_20) {
      fStack_18 = fStack_20;
    }
    if (fStack_1c < fStack_18) {
      fStack_18 = fStack_1c;
    }
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_18;
    FUN_00408ae0(param_1);
  }
  iStack_30 = *(int *)(param_1 + 0x276c);
  fStack_14 = *(float *)(iStack_30 + 0x2b0);
  iStack_28 = param_1 + 0x2b4;
  FUN_00546a90(iStack_28,0);
  fVar2 = fStack_14;
  iVar3 = iStack_30;
  afStack_10a8[0x415] = afStack_10a8[0x412];
  afStack_10a8[(uint)bVar6 * -2 + 0x416] = afStack_10a8[(uint)bVar6 * -2 + 0x413];
  afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x417] =
       afStack_10a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x414];
  iVar3 = (**(code **)((int)fVar2 + 0x118))(iVar3,param_1,afStack_10a8 + 0x415);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0x276c) = 0;
LAB_005017e1:
    iVar3 = param_1 + 0x2b4;
  }
  else {
    if (*(int *)(param_1 + 0x276c) == 0) goto LAB_005017e1;
    iVar3 = iStack_28;
    if (*(int *)(param_1 + 0x10a74) == 0) goto LAB_005017f4;
  }
  FUN_00503620(iVar3,0,1);
LAB_005017f4:
  FUN_00424470(param_1);
  FUN_00544f00(param_1 + 0x2b4);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
  FUN_00429e90(param_1,param_2);
  if (*(int *)(param_1 + 0x278f8) == 0) {
    if (*(int *)(param_1 + 0x278f4) == 0) {
      iVar3 = FUN_0048e340(0x01C38BC0,param_1 + 0x27964);
      if (iVar3 != 0) {
        FUN_00502280(param_1);
        return;
      }
    }
    else {
      iVar3 = FUN_0048e340(0x01C38BC0,param_1 + 0x27900);
      if (iVar3 != 0) {
        FUN_00502280(param_1);
        return;
      }
    }
  }
  else {
    uVar4 = FUN_005035c0(param_1 + 0x2b4);
    FUN_00503950(param_1 + 0x25640,uVar4,*(uint *)(param_1 + 700));
    FUN_00544ee0(param_1 + 0x25640);
    param_2 = *(float *)(param_1 + 0x278fc) + param_2;
    *(float *)(param_1 + 0x278fc) = param_2;
    if (_DAT_005fa3d8 < param_2) {
      if (*(int *)(param_1 + 0x278f4) == 0) {
        pcVar5 = "moloch_h.dfm";
        *(uint *)(param_1 + 0x278f4) = 1;
        pcStack_24 = "moloch_d.dfm";
      }
      else {
        pcVar5 = "moloch_d.dfm";
        *(uint *)(param_1 + 0x278f4) = 0;
        pcStack_24 = "moloch_h.dfm";
      }
      iVar3 = param_1 + 0x25640;
      *(uint *)(param_1 + 0x278f8) = 0;
      *(uint *)(param_1 + 0x278fc) = 0;
      FUN_00548620(iVar3,auStack_1b5c);
      fStack_14 = (float)FUN_005035c0(iVar3);
      iVar1 = param_1 + 0x2b4;
      uStack_2c = *(uint *)(param_1 + 0x25648);
      FUN_005478b0(iVar1,pcVar5);
      FUN_00547480(iVar1);
      FUN_00503950(iVar1,fStack_14,uStack_2c);
      FUN_005478b0(iVar3,pcStack_24);
      FUN_00547480(iVar3);
      param_1 = param_1 + 0x279c8;
      FUN_005b6f80(param_1,0,iVar1);
      FUN_005b6f80(param_1,1,iVar3);
      FUN_005b71d0(param_1);
      return;
    }
  }
  return;
}
