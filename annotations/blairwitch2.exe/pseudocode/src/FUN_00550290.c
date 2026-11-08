// Name: FUN_00550290
// Address: 00550290
// Address Range: [[00550290, 005502ac]]
// Convention: unknown
// Signature: void FUN_00550290(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00550290(uint param_1)

{
  *(uint *)(_DAT_0264161c * 0x60 + 0x264165c) = param_1;
  return;
}
