// Name: FUN_0058eb70
// Address: 0058eb70
// Address Range: [[0058eb70, 0058eba9]]
// Convention: unknown
// Signature: void FUN_0058eb70(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058eb70(uint param_1)

{
  _DAT_02662ddc = _DAT_02662ddc + 1;
  *(uint *)(&DAT_02662d84 + _DAT_02662ddc * 4) = param_1;
  if (0x13 < _DAT_02662ddc) {
    _DAT_02662ddc = 0;
  }
  if ((_DAT_02662ddc == _DAT_02662dd8) && (_DAT_02662dd8 = _DAT_02662dd8 + 1, 0x13 < _DAT_02662dd8))
  {
    _DAT_02662dd8 = 0;
  }
  return;
}
