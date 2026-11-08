// Name: FUN_004f2430
// Address: 004f2430
// Address Range: [[004f2430, 004f2480]]
// Convention: unknown
// Signature: void FUN_004f2430(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f2430(void)

{
  _DAT_01c6e2b4 = _DAT_01d76c38 | 0x205;
  _DAT_01c6e2b8 = 0;
  if (_DAT_01d76c48 != 0) {
    _DAT_01c6e2b4 = _DAT_01d76c38 | 0x20d;
  }
  if (_DAT_01d76c44 == 0) {
    _DAT_01c6e2ac = _DAT_01d76c3c;
    return;
  }
  _DAT_01c6e2b4 = _DAT_01c6e2b4 | 0x122;
  _DAT_01c6e2ac = _DAT_01d76c3c;
  return;
}
