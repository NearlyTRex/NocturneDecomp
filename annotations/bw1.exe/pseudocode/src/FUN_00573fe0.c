// Name: FUN_00573fe0
// Address: 00573fe0
// Address Range: [[00573fe0, 0057400f]]
// Convention: unknown
// Signature: void FUN_00573fe0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573fe0(float param_1)

{
  _DAT_00623308 = 1.0 / param_1;
  DAT_00623304 = param_1;
  if (_DAT_02c80650 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02c80650 + 0x28))(_DAT_02c80650,param_1);
  return;
}
