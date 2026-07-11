// Name: FUN_005261b0
// Address: 005261b0
// Address Range: [[005261b0, 00526200]]
// Convention: unknown
// Signature: void FUN_005261b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005261b0(int param_1)

{
  if ((param_1 < 0) || (0x1f < param_1)) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0xccc;
    FUN_004c8440("setNextSfxChannel - invalid channel index: %d",param_1);
  }
  *(int *)(_DAT_02dc1b74 * 0x6c + 0x2dc1b78) = param_1;
  return;
}
