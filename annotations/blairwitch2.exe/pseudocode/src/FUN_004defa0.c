// Name: FUN_004defa0
// Address: 004defa0
// Address Range: [[004defa0, 004df003]]
// Convention: unknown
// Signature: void FUN_004defa0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004defa0(int param_1)

{
  if (*(int *)(param_1 + 4) == *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
    *(uint *)(param_1 + 0x454) = (uint)(*(int *)(param_1 + 0x454) == 0);
    if (0.0 < *(float *)(param_1 + 0x344)) {
      FUN_004dd2c0(param_1);
    }
    if (0.0 < *(float *)(param_1 + 0x340)) {
      FUN_004dd270(param_1,0);
      return;
    }
  }
  return;
}
