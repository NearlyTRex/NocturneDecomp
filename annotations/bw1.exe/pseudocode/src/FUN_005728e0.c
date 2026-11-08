// Name: FUN_005728e0
// Address: 005728e0
// Address Range: [[005728e0, 005728fc]]
// Convention: unknown
// Signature: void FUN_005728e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005728e0(uint param_1)

{
  *(uint *)(_DAT_02c78cec * 0x60 + 0x2c78d28) = param_1;
  return;
}
