// Name: crt_unknown.c_FUN_005bd118
// Address: 005bd118
// Address Range: [[005bd118, 005bd152]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bd118(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bd118(void)

{
  if (_DAT_02680174 != (void *)0x0) {
    debugFree(_DAT_02680174);
    _DAT_02680174 = (void *)0x0;
  }
  if (_DAT_02680178 != (void *)0x0) {
    debugFree(_DAT_02680178);
    _DAT_02680178 = (void *)0x0;
  }
  return;
}
