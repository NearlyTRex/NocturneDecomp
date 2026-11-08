// Name: FUN_004f3f50
// Address: 004f3f50
// Address Range: [[004f3f50, 004f408c]]
// Convention: unknown
// Signature: void FUN_004f3f50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f3f50(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1010 [1009];
  char *pcVar6;
  uint uStack_28;
  uint uStack_1c;
  
  bVar5 = 0;
  FUN_00573a80(*(uint *)(param_1 + 0xc268));
  if (*(int *)(param_2 + 0x28) == 8) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005e56da;
    FUN_00408b40(param_1,param_2 + 0x1c);
    iVar4 = 0;
    uStack_1c = uStack_28;
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffdc + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    do {
      iVar4 = iVar4 + 1;
      FUN_004b59e0(0x01C57074,&stack0xffffffe4,0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  FUN_004f3cb0(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  iVar4 = param_1 + 0x158;
  *(float *)(param_1 + 0x2538) = fVar1;
  if (0.0 < fVar1) {
    FUN_005247c0(iVar4,5,1);
    iVar4 = FUN_005735a0(*(uint *)(param_1 + 0xc26c));
    if (iVar4 != 0) goto LAB_004f4052;
    pcVar6 = "imp-hurt?.wav";
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_00524770(iVar4);
    if ((*(int *)(iVar2 + 0x24) == 6) || (*(int *)(iVar2 + 0x24) == 7)) goto LAB_004f4052;
    FUN_005247c0(iVar4,6,1);
    FUN_00573a80(*(uint *)(param_1 + 0xc26c));
    pcVar6 = "imp-die?.wav";
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,pcVar6);
  *(uint *)(param_1 + 0xc26c) = uVar3;
LAB_004f4052:
  FUN_004a0f00(param_1,param_2);
  return;
}
