// Name: FUN_0047b690
// Address: 0047b690
// Address Range: [[0047b690, 0047b6e6]]
// Convention: unknown
// Signature: undefined4 FUN_0047b690(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0047b690(uint param_1)

{
  while (0 < _DAT_01c2559c) {
    FUN_0047e780(param_1);
  }
  if (_DAT_01c25598 == 0) {
    return param_1;
  }
  FUN_005b86a0(_DAT_01c25598);
  _DAT_01c25598 = 0;
  return param_1;
}
