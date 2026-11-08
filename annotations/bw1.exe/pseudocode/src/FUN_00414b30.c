// Name: FUN_00414b30
// Address: 00414b30
// Address Range: [[00414b30, 00414df4]]
// Convention: unknown
// Signature: void FUN_00414b30(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00414b30(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1044 [1014];
  uint uVar5;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar4 = 0;
  iVar2 = FUN_0042e1a0(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_60 = param_2 * *(float *)(param_1 + 0xc1d0);
  iVar2 = param_1 + 0x158;
  while (0.0 < fStack_60) {
    uVar5 = FUN_00524270(iVar2,&stack0xffffffa0);
    FUN_00434a80(param_1,uVar5);
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2);
  FUN_00524770(iVar2);
  iVar3 = FUN_00432240(param_1,param_2);
  if (iVar3 == 0) goto LAB_00414c01;
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00414bd6:
      uVar5 = 1;
    }
    else {
LAB_00414dda:
      uVar5 = 0;
    }
    FUN_005247c0(param_1 + 0x158,uVar5,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00414bd6;
    if (uVar1 != 3) goto LAB_00414dda;
    FUN_005247c0(iVar2,0,1);
    FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
LAB_00414c01:
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  iVar2 = FUN_0042e120(param_1);
  if (iVar2 != 0) {
    FUN_0042d700(param_1,param_2);
    fStack_50 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_4c = *(float *)(param_1 + 0x251c) * param_2;
    fStack_48 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_38 = fStack_50;
    *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffb4 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    fStack_5c = fStack_38 + *(float *)(param_1 + 0x250c);
    fStack_58 = fStack_34 + *(float *)(param_1 + 0x2510);
    fStack_54 = fStack_30 + *(float *)(param_1 + 0x2514);
    fStack_20 = fStack_5c;
    *(float *)((int)&stack0xffffffe4 + (uint)bVar4 * -8) =
         (&stack0xffffffa8)[(uint)bVar4 * 0xfffffffe];
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffac + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    fStack_44 = fStack_20 + *(float *)(param_1 + 0x249c);
    fStack_40 = fStack_1c + *(float *)(param_1 + 0x24a0);
    fStack_3c = fStack_18 + *(float *)(param_1 + 0x24a4);
    fStack_2c = fStack_44;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042d750(param_1,&stack0xffffffd4);
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80(param_1,param_2);
  iVar2 = FUN_004a6c30(0x01C51D80,param_1 + 0xd018);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0xc3e8) = 0;
    *(uint *)(param_1 + 0xc3e4) = 1;
  }
  if ((*(int *)(param_1 + 0xc3e4) != 0) &&
     (param_2 = *(float *)(param_1 + 0xc3e8) + param_2, *(float *)(param_1 + 0xc3e8) = param_2,
     0x40800000 < param_2)) {
    *(float *)(param_1 + 0xc3e8) = 0x40800000;
    return;
  }
  return;
}
