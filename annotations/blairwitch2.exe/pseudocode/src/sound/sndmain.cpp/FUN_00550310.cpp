// Name: FUN_00550310
// Address: 00550310
// Address Range: [[00550310, 0055035d]]
// Convention: unknown
// Signature: void FUN_00550310(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00550310(int param_1)

{
  if ((param_1 < 0) || (0x1f < param_1)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xe70;
    FUN_004e4500("setNextSfxChannel - invalid channel index: %d",param_1);
  }
  *(int *)(_DAT_0264161c * 0x60 + 0x2641620) = param_1;
  return;
}
