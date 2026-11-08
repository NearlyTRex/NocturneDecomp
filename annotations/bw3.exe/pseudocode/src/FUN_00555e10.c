// Name: FUN_00555e10
// Address: 00555e10
// Address Range: [[00555e10, 00555e2c]]
// Convention: unknown
// Signature: void FUN_00555e10(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555e10(uint param_1)

{
  *(uint *)(_DAT_02ceb91c * 0x60 + 0x2ceb95c) = param_1;
  return;
}
