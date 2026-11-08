// Name: FUN_004ff970
// Address: 004ff970
// Address Range: [[004ff970, 004ff9ef]]
// Convention: unknown
// Signature: undefined4 FUN_004ff970(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004ff970(int param_1,uint param_2)

{
  byte bVar1;
  float afStackY_1010 [1016];
  uint local_28;
  float local_20;
  uint local_1c;
  
  bVar1 = 0;
  if (*(int *)(param_1 + 0x80c) != 2) {
    FUN_00408bb0(param_1,param_2);
    local_28 = local_1c;
    *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if ((*(int *)(param_1 + 0x80c) != 0) || (local_20 <= 0.0)) {
      if ((*(int *)(param_1 + 0x80c) == 1) && (local_20 < 0.0)) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}
