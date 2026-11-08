// Name: FUN_004fc370
// Address: 004fc370
// Address Range: [[004fc370, 004fc3d3]]
// Convention: unknown
// Signature: void FUN_004fc370(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc370(int param_1)

{
  if (*(int *)(param_1 + 4) == *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    *(uint *)(param_1 + 0x454) = (uint)(*(int *)(param_1 + 0x454) == 0);
    if (0.0 < *(float *)(param_1 + 0x344)) {
      FUN_004fa710(param_1);
    }
    if (0.0 < *(float *)(param_1 + 0x340)) {
      FUN_004fa6c0(param_1,0);
      return;
    }
  }
  return;
}
