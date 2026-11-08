// Name: FUN_005b25b0
// Address: 005b25b0
// Address Range: [[005b25b0, 005b25e9]]
// Convention: unknown
// Signature: void FUN_005b25b0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b25b0(uint param_1)

{
  _DAT_02c9a61c = _DAT_02c9a61c + 1;
  *(uint *)(&DAT_02c9a5c4 + _DAT_02c9a61c * 4) = param_1;
  if (0x13 < _DAT_02c9a61c) {
    _DAT_02c9a61c = 0;
  }
  if ((_DAT_02c9a61c == _DAT_02c9a618) && (_DAT_02c9a618 = _DAT_02c9a618 + 1, 0x13 < _DAT_02c9a618))
  {
    _DAT_02c9a618 = 0;
  }
  return;
}
