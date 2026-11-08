// Name: FUN_004f3af0
// Address: 004f3af0
// Address Range: [[004f3af0, 004f3b22]]
// Convention: unknown
// Signature: float FUN_004f3af0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_004f3af0(void)

{
  _DAT_01d7a6b4 = _DAT_01d7a6b4 + _DAT_005c8349;
  if (_DAT_01d76cbc <= _DAT_01d7a6b4) {
    return _DAT_01d7a6b4;
  }
  _DAT_01d7a6b4 = _DAT_01d76cbc;
  return _DAT_01d76cbc;
}
