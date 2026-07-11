// Name: FUN_0051b8a0
// Address: 0051b8a0
// Address Range: [[0051b8a0, 0051b8e2]]
// Convention: unknown
// Signature: void FUN_0051b8a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051b8a0(int param_1)

{
  FUN_0051b920(param_1,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),0xffffffff);
  if (*(float *)(param_1 + 0x14) <= (float)_DAT_00591b63) {
    return;
  }
  FUN_0051c3d0(param_1,*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c),
               *(uint *)(param_1 + 0x14),0xffffffff,&LAB_0051b650);
  return;
}
