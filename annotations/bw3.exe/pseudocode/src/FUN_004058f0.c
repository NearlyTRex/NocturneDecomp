// Name: FUN_004058f0
// Address: 004058f0
// Address Range: [[004058f0, 0040599b]]
// Convention: unknown
// Signature: undefined * FUN_004058f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_004058f0(int param_1)

{
  if (_DAT_01c6e2a0 == 0) {
    if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5cc = FUN_00562c33;
    }
    else {
      _DAT_01c6b5cc = FUN_00562e69;
    }
  }
  else if (DAT_005fba20 == 0x20) {
    _DAT_01c6b5cc = (code *)&LAB_00560f31;
  }
  else {
    _DAT_01c6b5cc = (code *)&LAB_00561713;
  }
  _DAT_01c6e2b4 = 3;
  FUN_00406bf0(0xffff);
  _DAT_01c6e2b8 = 0;
  if (DAT_007303ec != 0) {
    FUN_004b3960(param_1 + 0x18,*(uint *)(param_1 + 4));
    return &DAT_00730404;
  }
  FUN_0043a840(*(uint *)(param_1 + 4),param_1 + 0x18);
  return &DAT_00730404;
}
