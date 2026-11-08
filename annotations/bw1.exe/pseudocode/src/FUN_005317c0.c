// Name: FUN_005317c0
// Address: 005317c0
// Address Range: [[005317c0, 00531adb]]
// Convention: unknown
// Signature: void FUN_005317c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_005317c0(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1074 [1014];
  uint *puVar6;
  char *pcVar7;
  uint uVar8;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint uStack_68;
  uint uStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  uint local_14;
  
  bVar5 = 0;
  iVar2 = FUN_0042e1a0(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  FUN_00434790(param_1,param_2);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  local_90 = param_2 * *(float *)(param_1 + 0x1fab4);
  local_14 = 0;
  while (0.0 < local_90) {
    uVar3 = FUN_00524270(param_1 + 0x158,&stack0xffffff70);
    FUN_00434a80(param_1,uVar3);
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if ((((1 < iVar2) && (*(int *)(param_1 + 0x70) == 1)) && (*(int *)(param_1 + 0x1fab0) == 0)) &&
     (*(int *)(param_1 + 0xdc) == 0)) {
    FUN_00569040(param_1 + 0x158,0);
    puVar6 = &stack0xffffffe0;
    uStack_20 = uStack_44;
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffffe8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    FUN_00408b40(param_1,puVar6);
    uVar8 = 0;
    puVar6 = &stack0xffffffa4;
    uStack_5c = uStack_68;
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff9c + (uint)bVar5 * -8);
    uVar3 = 0x01CD0E3C;
    *(uint *)(&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffa0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    FUN_004e62e0(uVar3,puVar6,uVar8);
    *(uint *)(param_1 + 0x1fab0) = 1;
    local_14 = 1;
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0x1fab4));
  iVar2 = FUN_00432240(param_1,param_2);
  if (iVar2 == 0) goto LAB_00531950;
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00531922:
      pcVar7 = &DAT_005ec779;
    }
    else {
LAB_00531ad0:
      pcVar7 = "STAND";
    }
    FUN_00524850(param_1 + 0x158,pcVar7,1);
  }
  else {
    iVar2 = param_1 + 0x158;
    if (uVar1 < 3) {
      uVar3 = FUN_00524a00(iVar2,&DAT_005ec775,0);
      iVar4 = FUN_00524150(uVar3);
      if (iVar4 < 0) goto LAB_00531922;
      FUN_005247c0(iVar2,iVar4,1);
    }
    else {
      if (uVar1 != 3) goto LAB_00531ad0;
      FUN_00524850(iVar2,"STAND",1);
      FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
    }
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
LAB_00531950:
  FUN_0042d700(param_1,param_2);
  fStack_38 = *(float *)(param_1 + 0x2518) * param_2;
  fStack_34 = *(float *)(param_1 + 0x251c) * param_2;
  fStack_30 = *(float *)(param_1 + 0x2520) * param_2;
  fStack_80 = fStack_38;
  *(uint *)((int)&stack0xffffff84 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_50 = fStack_80 + *(float *)(param_1 + 0x250c);
  fStack_4c = fStack_7c + *(float *)(param_1 + 0x2510);
  fStack_48 = fStack_78 + *(float *)(param_1 + 0x2514);
  fStack_8c = fStack_50;
  (&stack0xffffff78)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff7c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_2c = fStack_8c + *(float *)(param_1 + 0x249c);
  fStack_28 = fStack_88 + *(float *)(param_1 + 0x24a0);
  fStack_24 = fStack_84 + *(float *)(param_1 + 0x24a4);
  fStack_74 = fStack_2c;
  *(uint *)((int)&stack0xffffff90 + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffff94 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  *(uint *)(param_1 + 0x2514) = 0;
  *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
  *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(float *)(param_1 + 0x24a0) = *(float *)(param_1 + 0x24a4);
  *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a4);
  FUN_0042d750(param_1,&stack0xffffff8c);
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00432f10(param_1,param_2,local_14);
  FUN_00433e80(param_1,param_2);
  return;
}
