// Name: crt_unknown.c_FUN_005674f8
// Address: 005674f8
// Address Range: [[005674f8, 00567532]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005674f8(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005674f8(void)

{
  if (_DAT_02de4e34 != (void *)0x0) {
    free(_DAT_02de4e34);
    _DAT_02de4e34 = (void *)0x0;
  }
  if (_DAT_02de4e38 != (void *)0x0) {
    free(_DAT_02de4e38);
    _DAT_02de4e38 = (void *)0x0;
  }
  return;
}
