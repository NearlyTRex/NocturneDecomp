// Name: FUN_005700e0
// Address: 005700e0
// Address Range: [[005700e0, 00570121]]
// Convention: unknown
// Signature: void FUN_005700e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005700e0(int param_1)

{
  if (*(int *)(param_1 + 0x158) != 0) {
    if (_DAT_02c80650 != (int *)0x0) {
      (**(code **)(*_DAT_02c80650 + 0x34))(_DAT_02c80650,*(uint *)(param_1 + 0x158));
      *(uint *)(param_1 + 0x158) = 0;
      return;
    }
    *(uint *)(param_1 + 0x158) = 0;
  }
  return;
}
