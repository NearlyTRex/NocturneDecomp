// Name: FUN_0054dbf0
// Address: 0054dbf0
// Address Range: [[0054dbf0, 0054dc47]]
// Convention: unknown
// Signature: void FUN_0054dbf0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054dbf0(int param_1)

{
  if (*(int *)(param_1 + 0x1a8) != 0) {
    if ((*(int *)(param_1 + 0x158) != 0) && (_DAT_02648e80 != (int *)0x0)) {
      (**(code **)(*_DAT_02648e80 + 0x3c))
                (_DAT_02648e80,*(int *)(param_1 + 0x158),*(uint *)(param_1 + 0x1a4),
                 *(uint *)(param_1 + 0x1a8));
    }
    *(uint *)(param_1 + 0x1a8) = 0;
    *(uint *)(param_1 + 0x1a4) = 0;
  }
  return;
}
