// Name: FUN_004f8cc0
// Address: 004f8cc0
// Address Range: [[004f8cc0, 004f9009]]
// Convention: unknown
// Signature: void FUN_004f8cc0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f8cc0(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1044 [1014];
  uint uVar6;
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
  float fStack_14;
  
  bVar5 = 0;
  iVar2 = FUN_0042cd70(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  FUN_00432330(param_1,param_2,0);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  iVar2 = param_1 + 0x158;
  fStack_60 = param_2;
  while (0.0 < fStack_60) {
    uVar3 = FUN_004fbb70(iVar2,&stack0xffffffa0);
    FUN_00433fb0(param_1,uVar3);
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2);
  iVar4 = FUN_004fc070(iVar2);
  uVar3 = *(uint *)(iVar4 + 0x24);
  iVar4 = FUN_00431660(param_1,param_2);
  if (iVar4 == 0) {
    switch(uVar3) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      fStack_14 = (float)FUN_004fc930(param_1 + 0x158);
      if ((float)_DAT_005c91ec < fStack_14) {
        uVar3 = FUN_0040cea0(0,4,1);
        FUN_004fc0d0(param_1 + 0x158,uVar3);
        iVar2 = FUN_0040cea0(0,5);
        if ((iVar2 == 5) &&
           (iVar2 = FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xcdd4)), iVar2 == 0)) {
          uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"cow?.wav");
          *(uint *)(param_1 + 0xcdd4) = uVar3;
        }
      }
    }
    goto switchD_004f9003_caseD_5;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004f8d8c:
      uVar6 = 1;
      uVar3 = 5;
    }
    else {
LAB_004f8f31:
      fStack_14 = (float)FUN_004fc930(param_1 + 0x158);
      if (fStack_14 <= (float)_DAT_005c91f4) goto LAB_004f8d9f;
      uVar6 = 1;
      uVar3 = FUN_0040cea0(0,4,1);
    }
    FUN_004fc0d0(param_1 + 0x158,uVar3,uVar6);
  }
  else {
    if (uVar1 < 3) goto LAB_004f8d8c;
    if (uVar1 != 3) goto LAB_004f8f31;
    fStack_14 = (float)FUN_004fc930(iVar2);
    if ((float)_DAT_005c91f4 < fStack_14) {
      uVar3 = FUN_0040cea0(0,4,1);
      FUN_004fc0d0(iVar2,uVar3);
      FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
    }
  }
LAB_004f8d9f:
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_004f9003_caseD_5:
  iVar2 = FUN_0042ccf0(param_1);
  if (iVar2 != 0) {
    FUN_0042c1e0(param_1,param_2);
    fStack_44 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_40 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_3c = *(float *)(param_1 + 0x2520) * param_2;
    fStack_5c = fStack_44;
    (&stack0xffffffa8)[(uint)bVar5 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_38 = fStack_5c + *(float *)(param_1 + 0x250c);
    fStack_34 = fStack_58 + *(float *)(param_1 + 0x2510);
    fStack_30 = fStack_54 + *(float *)(param_1 + 0x2514);
    fStack_50 = fStack_38;
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_20 = fStack_50 + *(float *)(param_1 + 0x249c);
    fStack_1c = fStack_4c + *(float *)(param_1 + 0x24a0);
    fStack_18 = fStack_48 + *(float *)(param_1 + 0x24a4);
    fStack_2c = fStack_20;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042c230(param_1,&stack0xffffffd4);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  return;
}
