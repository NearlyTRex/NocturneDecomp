// Name: FUN_0046fa20
// Address: 0046fa20
// Address Range: [[0046fa20, 0046fa76]]
// Convention: unknown
// Signature: undefined4 FUN_0046fa20(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0046fa20(uint param_1)

{
  while (0 < _DAT_01bcd07c) {
    FUN_004721e0(param_1);
  }
  if (_DAT_01bcd078 == 0) {
    return param_1;
  }
  FUN_005638d0(_DAT_01bcd078);
  _DAT_01bcd078 = 0;
  return param_1;
}
