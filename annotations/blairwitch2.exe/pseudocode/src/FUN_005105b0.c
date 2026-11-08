// Name: FUN_005105b0
// Address: 005105b0
// Address Range: [[005105b0, 005108cb]]
// Convention: unknown
// Signature: void FUN_005105b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_005105b0(int param_1,float param_2)

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
  iVar2 = FUN_004244b0(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  FUN_0042a7a0(param_1,param_2);
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  local_90 = param_2 * *(float *)(param_1 + 0x24344);
  local_14 = 0;
  while (0.0 < local_90) {
    uVar3 = FUN_005030c0(param_1 + 0x2b4,&stack0xffffff70);
    FUN_0042aa00(param_1,uVar3);
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
  if ((((1 < iVar2) && (*(int *)(param_1 + 0x70) == 1)) && (*(int *)(param_1 + 0x24340) == 0)) &&
     (*(int *)(param_1 + 0xdc) == 0)) {
    FUN_005469a0(param_1 + 0x2b4,0);
    puVar6 = &stack0xffffffe0;
    uStack_20 = uStack_44;
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffffe8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    FUN_00408d70(param_1,puVar6);
    uVar8 = 0;
    puVar6 = &stack0xffffffa4;
    uStack_5c = uStack_68;
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff9c + (uint)bVar5 * -8);
    uVar3 = 0x01CB8284;
    *(uint *)(&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffa0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    FUN_004c9ad0(uVar3,puVar6,uVar8);
    *(uint *)(param_1 + 0x24340) = 1;
    local_14 = 1;
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x24344));
  iVar2 = FUN_004287f0(param_1,param_2);
  if (iVar2 == 0) goto LAB_00510740;
  uVar1 = *(uint *)(param_1 + 0x27ac);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00510712:
      pcVar7 = &DAT_005e151e;
    }
    else {
LAB_005108c0:
      pcVar7 = "STAND";
    }
    FUN_005036b0(param_1 + 0x2b4,pcVar7,1);
  }
  else {
    iVar2 = param_1 + 0x2b4;
    if (uVar1 < 3) {
      uVar3 = FUN_00503860(iVar2,&DAT_005e151a,0);
      iVar4 = FUN_00502fa0(uVar3);
      if (iVar4 < 0) goto LAB_00510712;
      FUN_00503620(iVar2,iVar4,1);
    }
    else {
      if (uVar1 != 3) goto LAB_005108c0;
      FUN_005036b0(iVar2,"STAND",1);
      FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
    }
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
LAB_00510740:
  FUN_00423a10(param_1,param_2);
  fStack_38 = *(float *)(param_1 + 0x2588) * param_2;
  fStack_34 = *(float *)(param_1 + 0x258c) * param_2;
  fStack_30 = *(float *)(param_1 + 0x2590) * param_2;
  fStack_80 = fStack_38;
  *(uint *)((int)&stack0xffffff84 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_50 = fStack_80 + *(float *)(param_1 + 0x257c);
  fStack_4c = fStack_7c + *(float *)(param_1 + 0x2580);
  fStack_48 = fStack_78 + *(float *)(param_1 + 0x2584);
  fStack_8c = fStack_50;
  (&stack0xffffff78)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff7c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_2c = fStack_8c + *(float *)(param_1 + 0x2508);
  fStack_28 = fStack_88 + *(float *)(param_1 + 0x250c);
  fStack_24 = fStack_84 + *(float *)(param_1 + 0x2510);
  fStack_74 = fStack_2c;
  *(uint *)((int)&stack0xffffff90 + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffff94 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  *(uint *)(param_1 + 0x2584) = 0;
  *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
  *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
  *(uint *)(param_1 + 0x2510) = 0;
  *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
  *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x2510);
  FUN_00423a60(param_1,&stack0xffffff8c);
  FUN_00424470(param_1);
  FUN_00544f00(param_1 + 0x2b4);
  FUN_00429420(param_1,param_2,local_14);
  FUN_00429e90(param_1,param_2);
  return;
}
