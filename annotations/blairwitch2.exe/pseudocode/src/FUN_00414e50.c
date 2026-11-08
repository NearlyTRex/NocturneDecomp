// Name: FUN_00414e50
// Address: 00414e50
// Address Range: [[00414e50, 00415114]]
// Convention: unknown
// Signature: void FUN_00414e50(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00414e50(int param_1,float param_2)

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
  iVar2 = FUN_004244b0(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  fStack_60 = param_2 * *(float *)(param_1 + 0x10a60);
  iVar2 = param_1 + 0x2b4;
  while (0.0 < fStack_60) {
    uVar5 = FUN_005030c0(iVar2,&stack0xffffffa0);
    FUN_0042aa00(param_1,uVar5);
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2);
  FUN_005035c0(iVar2);
  iVar3 = FUN_004287f0(param_1,param_2);
  if (iVar3 == 0) goto LAB_00414f21;
  uVar1 = *(uint *)(param_1 + 0x27ac);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00414ef6:
      uVar5 = 1;
    }
    else {
LAB_004150fa:
      uVar5 = 0;
    }
    FUN_00503620(param_1 + 0x2b4,uVar5,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00414ef6;
    if (uVar1 != 3) goto LAB_004150fa;
    FUN_00503620(iVar2,0,1);
    FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
LAB_00414f21:
  if (0.0 < *(float *)(param_1 + 0x10a74)) {
    *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
  }
  iVar2 = FUN_00424430(param_1);
  if (iVar2 != 0) {
    FUN_00423a10(param_1,param_2);
    fStack_50 = *(float *)(param_1 + 0x2588) * param_2;
    fStack_4c = *(float *)(param_1 + 0x258c) * param_2;
    fStack_48 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_38 = fStack_50;
    *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffb4 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    fStack_5c = fStack_38 + *(float *)(param_1 + 0x257c);
    fStack_58 = fStack_34 + *(float *)(param_1 + 0x2580);
    fStack_54 = fStack_30 + *(float *)(param_1 + 0x2584);
    fStack_20 = fStack_5c;
    *(float *)((int)&stack0xffffffe4 + (uint)bVar4 * -8) =
         (&stack0xffffffa8)[(uint)bVar4 * 0xfffffffe];
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffac + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    fStack_44 = fStack_20 + *(float *)(param_1 + 0x2508);
    fStack_40 = fStack_1c + *(float *)(param_1 + 0x250c);
    fStack_3c = fStack_18 + *(float *)(param_1 + 0x2510);
    fStack_2c = fStack_44;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x250c);
    FUN_00423a60(param_1,&stack0xffffffd4);
  }
  FUN_00424470(param_1);
  FUN_00544f00(param_1 + 0x2b4);
  FUN_00429e90(param_1,param_2);
  iVar2 = FUN_0048e340(0x01C38BC0,param_1 + 0x118a8);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x10c78) = 0;
    *(uint *)(param_1 + 0x10c74) = 1;
  }
  if ((*(int *)(param_1 + 0x10c74) != 0) &&
     (param_2 = *(float *)(param_1 + 0x10c78) + param_2, *(float *)(param_1 + 0x10c78) = param_2,
     0x40800000 < param_2)) {
    *(float *)(param_1 + 0x10c78) = 0x40800000;
    return;
  }
  return;
}
