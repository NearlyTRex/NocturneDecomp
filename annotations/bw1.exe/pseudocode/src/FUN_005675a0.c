// Name: FUN_005675a0
// Address: 005675a0
// Address Range: [[005675a0, 005675e2]]
// Convention: unknown
// Signature: void FUN_005675a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005675a0(int param_1)

{
  FUN_00567620(param_1,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),0xffffffff);
  if (*(float *)(param_1 + 0x14) <= (float)_DAT_005f24c9) {
    return;
  }
  FUN_00568100(param_1,*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c),
               *(uint *)(param_1 + 0x14),0xffffffff,&LAB_00567360);
  return;
}
