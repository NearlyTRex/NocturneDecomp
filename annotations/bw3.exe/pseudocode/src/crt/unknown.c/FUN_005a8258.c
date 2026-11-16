// Name: crt_unknown.c_FUN_005a8258
// Address: 005a8258
// Address Range: [[005a8258, 005a8292]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a8258(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a8258(void)

{
  if (_DAT_02d252b4 != (void *)0x0) {
    debugFree(_DAT_02d252b4);
    _DAT_02d252b4 = (void *)0x0;
  }
  if (_DAT_02d252b8 != (void *)0x0) {
    debugFree(_DAT_02d252b8);
    _DAT_02d252b8 = (void *)0x0;
  }
  return;
}
