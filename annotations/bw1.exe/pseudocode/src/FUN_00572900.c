// Name: FUN_00572900
// Address: 00572900
// Address Range: [[00572900, 0057291c]]
// Convention: unknown
// Signature: void FUN_00572900(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572900(uint param_1)

{
  *(uint *)(_DAT_02c78cec * 0x60 + 0x2c78d2c) = param_1;
  return;
}
