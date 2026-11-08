// Name: FUN_004d2c50
// Address: 004d2c50
// Address Range: [[004d2c50, 004d2d98]]
// Convention: unknown
// Signature: undefined4 FUN_004d2c50(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004d2c50(int param_1,float param_2)

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
  if (*(int *)(param_1 + 0x24728) == 0) {
    return 0;
  }
  param_2 = *(float *)(param_1 + 0x2472c) - param_2;
  *(float *)(param_1 + 0x2472c) = param_2;
  if ((0.0 < param_2) && (*(float *)(param_1 + 0x304c) <= (float)_DAT_005da3a6)) {
    iVar1 = *(int *)(param_1 + 0x24728);
    local_2c = *(float *)(param_1 + 0x20) - *(float *)(iVar1 + 0x20);
    local_28 = *(float *)(param_1 + 0x24) - *(float *)(iVar1 + 0x24);
    local_24 = *(float *)(param_1 + 0x28) - *(float *)(iVar1 + 0x28);
    local_20 = local_2c;
    fStack_1c = local_28;
    fStack_18 = local_24;
    FUN_005838f0(&stack0xffffffe0);
    local_38 = local_14;
    *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xfffffff0 + (uint)bVar2 * 0xfffffffe * 4);
    *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    local_8 = FUN_0040d0c0(local_34 - *(float *)(param_1 + 0x34));
    *(uint *)(param_1 + 0x2578) = local_8;
    if (*(float *)(param_1 + 0x2578) < -*(float *)(param_1 + 0x2598)) {
      *(uint *)(param_1 + 0x2578) = *(uint *)(param_1 + 0x2598);
    }
    if (*(float *)(param_1 + 0x2598) < *(float *)(param_1 + 0x2578)) {
      *(uint *)(param_1 + 0x2578) = *(uint *)(param_1 + 0x2598);
    }
    FUN_00503620(param_1 + 0x2b4,2,1);
    return 1;
  }
  *(uint *)(param_1 + 0x24728) = 0;
  FUN_00503620(param_1 + 0x2b4,0,1);
  return 0;
}
