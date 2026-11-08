// Name: FUN_00555ee0
// Address: 00555ee0
// Address Range: [[00555ee0, 00555efc]]
// Convention: unknown
// Signature: void FUN_00555ee0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555ee0(uint param_1)

{
  *(uint *)(_DAT_02ceb91c * 0x60 + 0x2ceb960) = param_1;
  return;
}
