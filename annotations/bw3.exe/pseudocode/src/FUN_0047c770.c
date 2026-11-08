// Name: FUN_0047c770
// Address: 0047c770
// Address Range: [[0047c770, 0047c7c6]]
// Convention: unknown
// Signature: undefined4 FUN_0047c770(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0047c770(uint param_1)

{
  while (0 < _DAT_01c5b104) {
    FUN_0047f990(param_1);
  }
  if (_DAT_01c5b0e8 == 0) {
    return param_1;
  }
  FUN_005a3770(_DAT_01c5b0e8);
  _DAT_01c5b0e8 = 0;
  return param_1;
}
