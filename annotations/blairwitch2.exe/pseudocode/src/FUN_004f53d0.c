// Name: FUN_004f53d0
// Address: 004f53d0
// Address Range: [[004f53d0, 004f53f2]]
// Convention: unknown
// Signature: void FUN_004f53d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f53d0(void)

{
  _DAT_01d0c3a0 = 0;
  if ((_DAT_0264bcd0 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bcd0)();
    return;
  }
  return;
}
