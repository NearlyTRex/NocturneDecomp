// Name: FUN_00518320
// Address: 00518320
// Address Range: [[00518320, 00518352]]
// Convention: unknown
// Signature: float FUN_00518320(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00518320(void)

{
  _DAT_01d25f34 = _DAT_01d25f34 + _DAT_005e9047;
  if (_DAT_01d2253c <= _DAT_01d25f34) {
    return _DAT_01d25f34;
  }
  _DAT_01d25f34 = _DAT_01d2253c;
  return _DAT_01d2253c;
}
