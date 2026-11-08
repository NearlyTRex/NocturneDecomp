// Name: FUN_00468b30
// Address: 00468b30
// Address Range: [[00468b30, 00468b46]]
// Convention: unknown
// Signature: undefined4 FUN_00468b30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00468b30(void)

{
  if (_DAT_01ba5c30 != 0) {
    return *(uint *)(_DAT_01ba5c30 + 0x41f0);
  }
  return 0xb;
}
