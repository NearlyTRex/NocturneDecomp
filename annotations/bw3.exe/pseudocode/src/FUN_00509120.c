// Name: FUN_00509120
// Address: 00509120
// Address Range: [[00509120, 00509525]]
// Convention: unknown
// Signature: void FUN_00509120(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00509120(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1074 [1014];
  uint *puVar6;
  char *pcVar7;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  uint uStack_50;
  uint uStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint uStack_14;
  
  bVar5 = 0;
  iVar2 = FUN_0042cd70(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  if ((-1 < *(int *)(param_1 + 0x206b8)) || (*(int *)(param_1 + 0x206b8) == -1)) {
    FUN_00433c60(param_1,param_2);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_90 = param_2 * *(float *)(param_1 + 0x206b0);
  uStack_14 = 0;
  while (0.0 < fStack_90) {
    uVar3 = FUN_004fbb70(param_1 + 0x158,&stack0xffffff70);
    FUN_00433fb0(param_1,uVar3);
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if ((((1 < iVar2) && (*(int *)(param_1 + 0x70) == 1)) && (*(int *)(param_1 + 0x206ac) == 0)) &&
     (*(int *)(param_1 + 0xdc) == 0)) {
    FUN_0054dbd0(param_1 + 0x158,0);
    puVar6 = &stack0xffffffa4;
    uStack_5c = uStack_50;
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffb4 + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    FUN_00408b80(param_1,puVar6);
    uVar3 = 0;
    puVar6 = &stack0xffffff80;
    uStack_80 = uStack_44;
    *(uint *)((int)&stack0xffffff84 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    FUN_004cec40(0x01D22E44,puVar6,uVar3);
    *(uint *)(param_1 + 0x206ac) = 1;
    uStack_14 = 1;
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0x206b0));
  iVar4 = FUN_00431660(param_1,param_2);
  iVar2 = param_1 + 0x158;
  if (iVar4 == 0) {
    uVar3 = FUN_004fc320(iVar2);
    iVar2 = FUN_005a3d00(uVar3,"APPEAR");
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x206b8) < 1)) {
      *(uint *)(param_1 + 0x206b8) = 1;
      *(uint *)(param_1 + 0xfc) = 1;
      *(uint *)(param_1 + 0x206c0) = *(uint *)(param_1 + 0x206c4);
      *(uint *)(param_1 + 0xf8) = 0;
    }
    iVar2 = FUN_005a3d00(uVar3,"DISAPPEAR");
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x206b8) != 0)) {
      *(uint *)(param_1 + 0x206b8) = 0;
      *(uint *)(param_1 + 0xfc) = 1;
      *(uint *)(param_1 + 0xf8) = 0;
      *(uint *)(param_1 + 0x206c0) = *(uint *)(param_1 + 0x206c4);
    }
    goto LAB_005092c8;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0050929a:
      pcVar7 = &DAT_005cb59c;
    }
    else {
LAB_0050947c:
      pcVar7 = "STAND";
    }
    FUN_004fc160(param_1 + 0x158,pcVar7,1);
  }
  else if (uVar1 < 3) {
    uVar3 = FUN_004fc310(iVar2,&DAT_005cb598,0);
    iVar4 = FUN_004fba50(uVar3);
    if (iVar4 < 0) goto LAB_0050929a;
    FUN_004fc0d0(iVar2,iVar4,1);
  }
  else {
    if (uVar1 != 3) goto LAB_0050947c;
    FUN_004fc160(iVar2,"@STAND" + 1,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
LAB_005092c8:
  if (0.0 < *(float *)(param_1 + 0x206c0)) {
    *(float *)(param_1 + 0x206c0) = *(float *)(param_1 + 0x206c0) - param_2;
  }
  if (*(float *)(param_1 + 0x206c0) < 0.0) {
    *(uint *)(param_1 + 0x206c0) = 0;
  }
  FUN_0042c1e0(param_1,param_2);
  fStack_68 = *(float *)(param_1 + 0x2518) * param_2;
  fStack_64 = *(float *)(param_1 + 0x251c) * param_2;
  fStack_60 = *(float *)(param_1 + 0x2520) * param_2;
  fStack_20 = fStack_68;
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffa0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_2c = fStack_20 + *(float *)(param_1 + 0x250c);
  fStack_28 = fStack_1c + *(float *)(param_1 + 0x2510);
  fStack_24 = fStack_18 + *(float *)(param_1 + 0x2514);
  fStack_8c = fStack_2c;
  (&stack0xffffff78)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff7c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_38 = fStack_8c + *(float *)(param_1 + 0x249c);
  fStack_34 = fStack_88 + *(float *)(param_1 + 0x24a0);
  fStack_30 = fStack_84 + *(float *)(param_1 + 0x24a4);
  fStack_74 = fStack_38;
  *(uint *)((int)&stack0xffffff90 + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffff94 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  *(uint *)(param_1 + 0x2514) = 0;
  *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
  *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
  FUN_0042c230(param_1,&stack0xffffff8c);
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00432330(param_1,param_2,uStack_14);
  FUN_00433350(param_1,param_2);
  return;
}
