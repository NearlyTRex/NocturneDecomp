// Name: FUN_0045e320
// Address: 0045e320
// Address Range: [[0045e320, 0045e336]]
// Convention: unknown
// Signature: undefined4 FUN_0045e320(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0045e320(void)

{
  if (_DAT_01b4d718 != 0) {
    return *(uint *)(_DAT_01b4d718 + 0x3170);
  }
  return 0xb;
}
