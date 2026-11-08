// Name: FUN_005535e0
// Address: 005535e0
// Address Range: [[005535e0, 00553621]]
// Convention: unknown
// Signature: void FUN_005535e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005535e0(int param_1)

{
  if (*(int *)(param_1 + 0x158) != 0) {
    if (_DAT_02cf3280 != (int *)0x0) {
      (**(code **)(*_DAT_02cf3280 + 0x34))(_DAT_02cf3280,*(uint *)(param_1 + 0x158));
      *(uint *)(param_1 + 0x158) = 0;
      return;
    }
    *(uint *)(param_1 + 0x158) = 0;
  }
  return;
}
