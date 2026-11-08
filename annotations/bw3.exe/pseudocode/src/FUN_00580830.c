// Name: FUN_00580830
// Address: 00580830
// Address Range: [[00580830, 00580869]]
// Convention: unknown
// Signature: void FUN_00580830(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00580830(uint param_1)

{
  _DAT_02d2032c = _DAT_02d2032c + 1;
  *(uint *)(&DAT_02d202d4 + _DAT_02d2032c * 4) = param_1;
  if (0x13 < _DAT_02d2032c) {
    _DAT_02d2032c = 0;
  }
  if ((_DAT_02d2032c == _DAT_02d20328) && (_DAT_02d20328 = _DAT_02d20328 + 1, 0x13 < _DAT_02d20328))
  {
    _DAT_02d20328 = 0;
  }
  return;
}
