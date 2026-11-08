// Name: FUN_004f05b0
// Address: 004f05b0
// Address Range: [[004f05b0, 004f0777]]
// Convention: unknown
// Signature: void FUN_004f05b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f05b0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint auStackY_1010 [1009];
  uint uVar5;
  uint uStack_28;
  uint uStack_1c;
  
  bVar4 = 0;
  FUN_00573a80(*(uint *)(param_1 + 0xc268));
  if (*(int *)(param_2 + 0x28) == 8) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005e5212;
    FUN_00408b40(param_1,param_2 + 0x1c);
    iVar2 = 0;
    uStack_28 = uStack_1c;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    do {
      iVar2 = iVar2 + 1;
      FUN_004b59e0(0x01C57074,&stack0xffffffd8,0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  iVar2 = param_1 + 0x158;
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar3 = FUN_00524770(iVar2);
    iVar3 = *(int *)(iVar3 + 0x24);
    if ((((iVar3 != 4) && (iVar3 != 5)) && (iVar3 != 10)) && (iVar3 != 0xb)) {
      if (iVar3 < 6) {
        uVar5 = 4;
      }
      else {
        uVar5 = 10;
      }
      FUN_005247c0(iVar2,uVar5,1);
      FUN_00573a80(*(uint *)(param_1 + 0xc26c));
      uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"hotdemon-die.wav");
      *(uint *)(param_1 + 0xc26c) = uVar5;
      FUN_004a0f00(param_1,param_2);
      return;
    }
  }
  else {
    iVar2 = FUN_00524770(iVar2);
    if ((*(int *)(iVar2 + 0x24) < 6) || (*(int *)(iVar2 + 0x24) == 0xf)) {
      uVar5 = 3;
    }
    else {
      uVar5 = 9;
    }
    FUN_005247c0(param_1 + 0x158,uVar5,1);
    iVar2 = FUN_005735a0(*(uint *)(param_1 + 0xc26c));
    if (iVar2 == 0) {
      uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"hotdemon-hurt?.wav");
      *(uint *)(param_1 + 0xc26c) = uVar5;
      FUN_004a0f00(param_1,param_2);
      return;
    }
  }
  FUN_004a0f00(param_1,param_2);
  return;
}
