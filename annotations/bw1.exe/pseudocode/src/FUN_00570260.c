// Name: FUN_00570260
// Address: 00570260
// Address Range: [[00570260, 005702b7]]
// Convention: unknown
// Signature: void FUN_00570260(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00570260(int param_1)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    if ((*(int *)(param_1 + 0x158) != 0) && (_DAT_02c80650 != (int *)0x0)) {
      (**(code **)(*_DAT_02c80650 + 0x3c))
                (_DAT_02c80650,*(int *)(param_1 + 0x158),*(uint *)(param_1 + 0x1a8),
                 *(uint *)(param_1 + 0x1ac));
    }
    *(uint *)(param_1 + 0x1ac) = 0;
    *(uint *)(param_1 + 0x1a8) = 0;
  }
  return;
}
