// Name: FUN_005515b0
// Address: 005515b0
// Address Range: [[005515b0, 005515df]]
// Convention: unknown
// Signature: void FUN_005515b0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005515b0(float param_1)

{
  _DAT_0061bcb8 = 1.0 / param_1;
  DAT_0061bcb4 = param_1;
  if (_DAT_02648e80 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02648e80 + 0x28))(_DAT_02648e80,param_1);
  return;
}
