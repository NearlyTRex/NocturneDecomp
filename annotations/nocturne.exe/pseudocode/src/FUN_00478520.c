// Name: FUN_00478520
// Address: 00478520
// Address Range: [[00478520, 00478594]]
// Convention: unknown
// Signature: void FUN_00478520(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00478520(int param_1)

{
  FUN_00409fc0(param_1);
  *(uint *)(param_1 + 0x440) = *(uint *)(param_1 + 0x22c);
  if (*(int *)(param_1 + 0x150) == 4) {
    FUN_00454510(param_1 + 0x240);
  }
  if (*(int *)(param_1 + 0x3c8) == 0) {
    *(uint *)(param_1 + 0x3c8) = *(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  }
  *(uint *)(param_1 + 0x430) = 0;
  *(uint *)(param_1 + 0x484) = 0;
  *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x160);
  return;
}
