// Name: FUN_00429090
// Address: 00429090
// Address Range: [[00429090, 004291e3]]
// Convention: unknown
// Signature: void FUN_00429090(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429090(int param_1)

{
  int iVar1;
  byte bVar2;
  float afStackY_1014 [1012];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0xd070) == 0) {
    if (*(int *)(param_1 + 0xcde4) == 0) {
      iVar1 = FUN_0040cea0(0,3,1);
      FUN_004fc0d0(param_1 + 0x158,iVar1 + 3);
      return;
    }
    local_14 = (float)FUN_004fc930(param_1 + 0x158);
    if (local_14 <= (float)_DAT_005b7ec7) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0xcde4);
    local_20 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
    local_1c = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
    local_18 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
    local_2c = local_20;
    (&stack0xffffffd8)[(uint)bVar2 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if (&stack0xffffffc8 != &stack0xffffffd4) {
      local_38 = local_2c;
      local_34 = local_28;
      local_30 = local_24;
    }
    if ((_DAT_005dcf4c <= SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34)) ||
       (iVar1 = FUN_0040cea0(0,3), iVar1 != 1)) {
      iVar1 = FUN_0040cea0(0,3,1);
      iVar1 = iVar1 + 7;
    }
    else {
      iVar1 = FUN_0040cea0(0,3,1);
      iVar1 = iVar1 + 3;
    }
  }
  else {
    iVar1 = FUN_0040cea0(0,3,1);
    iVar1 = iVar1 + 7;
  }
  FUN_004fc0d0(param_1 + 0x158,iVar1);
  return;
}
