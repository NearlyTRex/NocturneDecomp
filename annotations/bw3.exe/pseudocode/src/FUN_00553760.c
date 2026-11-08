// Name: FUN_00553760
// Address: 00553760
// Address Range: [[00553760, 005537b7]]
// Convention: unknown
// Signature: void FUN_00553760(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00553760(int param_1)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    if ((*(int *)(param_1 + 0x158) != 0) && (_DAT_02cf3280 != (int *)0x0)) {
      (**(code **)(*_DAT_02cf3280 + 0x3c))
                (_DAT_02cf3280,*(int *)(param_1 + 0x158),*(uint *)(param_1 + 0x1a8),
                 *(uint *)(param_1 + 0x1ac));
    }
    *(uint *)(param_1 + 0x1ac) = 0;
    *(uint *)(param_1 + 0x1a8) = 0;
  }
  return;
}
