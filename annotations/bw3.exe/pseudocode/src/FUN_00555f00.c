// Name: FUN_00555f00
// Address: 00555f00
// Address Range: [[00555f00, 00555f1c]]
// Convention: unknown
// Signature: void FUN_00555f00(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555f00(uint param_1)

{
  *(uint *)(_DAT_02ceb91c * 0x60 + 0x2ceb96c) = param_1;
  return;
}
