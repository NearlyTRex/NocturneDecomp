// Name: FUN_0054c130
// Address: 0054c130
// Address Range: [[0054c130, 0054c172]]
// Convention: unknown
// Signature: void FUN_0054c130(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054c130(int param_1)

{
  FUN_0054c1b0(param_1,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),0xffffffff);
  if (*(float *)(param_1 + 0x14) <= (float)_DAT_005d1fcc) {
    return;
  }
  FUN_0054cc90(param_1,*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c),
               *(uint *)(param_1 + 0x14),0xffffffff,&LAB_0054bef0);
  return;
}
