// Name: FUN_00550380
// Address: 00550380
// Address Range: [[00550380, 0055039c]]
// Convention: unknown
// Signature: void FUN_00550380(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00550380(uint param_1)

{
  *(uint *)(_DAT_0264161c * 0x60 + 0x264166c) = param_1;
  return;
}
