// Name: FUN_0046a700
// Address: 0046a700
// Address Range: [[0046a700, 0046a716]]
// Convention: unknown
// Signature: undefined4 FUN_0046a700(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0046a700(void)

{
  if (_DAT_01bdd7c4 != 0) {
    return *(uint *)(_DAT_01bdd7c4 + 0x41f0);
  }
  return 0xb;
}
