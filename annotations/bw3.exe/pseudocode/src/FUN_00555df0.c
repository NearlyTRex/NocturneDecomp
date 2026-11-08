// Name: FUN_00555df0
// Address: 00555df0
// Address Range: [[00555df0, 00555e0c]]
// Convention: unknown
// Signature: void FUN_00555df0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555df0(uint param_1)

{
  *(uint *)(_DAT_02ceb91c * 0x60 + 0x2ceb958) = param_1;
  return;
}
