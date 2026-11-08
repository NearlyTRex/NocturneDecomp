// Name: FUN_00493bd0
// Address: 00493bd0
// Address Range: [[00493bd0, 00493c26]]
// Convention: unknown
// Signature: undefined4 FUN_00493bd0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00493bd0(uint param_1)

{
  while (0 < _DAT_01c3eb5c) {
    FUN_00496df0(param_1);
  }
  if (_DAT_01c3eb58 == 0) {
    return param_1;
  }
  FUN_005c09f0(_DAT_01c3eb58);
  _DAT_01c3eb58 = 0;
  return param_1;
}
