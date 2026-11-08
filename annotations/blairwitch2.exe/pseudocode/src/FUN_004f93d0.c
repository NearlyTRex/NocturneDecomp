// Name: FUN_004f93d0
// Address: 004f93d0
// Address Range: [[004f93d0, 004f9402]]
// Convention: unknown
// Signature: float FUN_004f93d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_004f93d0(void)

{
  _DAT_01d0d2d4 = _DAT_01d0d2d4 + _DAT_005de000;
  if (_DAT_01d098dc <= _DAT_01d0d2d4) {
    return _DAT_01d0d2d4;
  }
  _DAT_01d0d2d4 = _DAT_01d098dc;
  return _DAT_01d098dc;
}
