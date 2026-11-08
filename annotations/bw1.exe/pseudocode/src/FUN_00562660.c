// Name: FUN_00562660
// Address: 00562660
// Address Range: [[00562660, 0056279d]]
// Convention: unknown
// Signature: void FUN_00562660(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00562660(int param_1)

{
  int iVar1;
  uint *puVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_100c [995];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  FUN_004688e0(param_1 + 0x158);
  FUN_00408850(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar2 = (uint *)&stack0xffffffac;
  pfVar3 = &stack0xffffff94;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = (float)*puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  if (&stack0xffffffc4 != &stack0xffffff94) {
    fStack_3c = fStack_6c;
    fStack_38 = fStack_68;
    fStack_34 = fStack_64;
  }
  if (&stack0xffffffd0 != &stack0xffffffa0) {
    fStack_30 = fStack_60;
    fStack_2c = fStack_5c;
    fStack_28 = fStack_58;
  }
  fStack_18 = fStack_30 - fStack_3c;
  fStack_14 = fStack_2c - fStack_38;
  fStack_10 = fStack_28 - fStack_34;
  fStack_24 = fStack_30 - fStack_3c;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  puVar2 = (uint *)(param_1 + 0x20);
  FUN_0041dac0(param_1 + 0x358,puVar2,param_1 + 0x30,&stack0xffffffdc,
               *(uint *)(param_1 + 0x2d8));
  if ((uint *)(param_1 + 0x5b4) != puVar2) {
    *(uint *)(param_1 + 0x5b4) = *puVar2;
    *(uint *)(param_1 + 0x5b8) = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x5bc) = *(uint *)(param_1 + 0x28);
  }
  if ((uint *)(param_1 + 0x5c0) != (uint *)(param_1 + 0x30)) {
    *(uint *)(param_1 + 0x5c0) = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x5c4) = *(uint *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x5c8) = *(uint *)(param_1 + 0x38);
  }
  if (*(int *)(param_1 + 0x2d4) != 1) {
    return;
  }
  *(uint *)(param_1 + 0x5ac) = 0;
  return;
}
