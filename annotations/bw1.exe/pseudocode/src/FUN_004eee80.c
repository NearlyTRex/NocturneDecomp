// Name: FUN_004eee80
// Address: 004eee80
// Address Range: [[004eee80, 004eefc8]]
// Convention: unknown
// Signature: undefined4 FUN_004eee80(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004eee80(int param_1,float param_2)

{
  int iVar1;
  byte bVar2;
  float afStackY_1020 [1013];
  uint local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  uint local_8;
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0x1fe98) == 0) {
    return 0;
  }
  param_2 = *(float *)(param_1 + 0x1fe9c) - param_2;
  *(float *)(param_1 + 0x1fe9c) = param_2;
  if ((0.0 < param_2) && (*(float *)(param_1 + 0x2fe0) <= (float)_DAT_005e4f07)) {
    iVar1 = *(int *)(param_1 + 0x1fe98);
    local_2c = *(float *)(param_1 + 0x20) - *(float *)(iVar1 + 0x20);
    local_28 = *(float *)(param_1 + 0x24) - *(float *)(iVar1 + 0x24);
    local_24 = *(float *)(param_1 + 0x28) - *(float *)(iVar1 + 0x28);
    local_20 = local_2c;
    fStack_1c = local_28;
    fStack_18 = local_24;
    FUN_005a7520(&stack0xffffffe0);
    local_38 = local_14;
    *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xfffffff0 + (uint)bVar2 * 0xfffffffe * 4);
    *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    local_8 = FUN_0040cd60(local_34 - *(float *)(param_1 + 0x34));
    *(uint *)(param_1 + 0x2508) = local_8;
    if (*(float *)(param_1 + 0x2508) < -*(float *)(param_1 + 0x2528)) {
      *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x2528);
    }
    if (*(float *)(param_1 + 0x2528) < *(float *)(param_1 + 0x2508)) {
      *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x2528);
    }
    FUN_005247c0(param_1 + 0x158,2,1);
    return 1;
  }
  *(uint *)(param_1 + 0x1fe98) = 0;
  FUN_005247c0(param_1 + 0x158,0,1);
  return 0;
}
