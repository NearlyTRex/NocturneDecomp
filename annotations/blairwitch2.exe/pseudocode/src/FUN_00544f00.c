// Name: FUN_00544f00
// Address: 00544f00
// Address Range: [[00544f00, 00544f42]]
// Convention: unknown
// Signature: void FUN_00544f00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00544f00(int param_1)

{
  FUN_00544f80(param_1,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),0xffffffff);
  if (*(float *)(param_1 + 0x14) <= (float)_DAT_005e72cf) {
    return;
  }
  FUN_00545a60(param_1,*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c),
               *(uint *)(param_1 + 0x14),0xffffffff,&LAB_00544cc0);
  return;
}
