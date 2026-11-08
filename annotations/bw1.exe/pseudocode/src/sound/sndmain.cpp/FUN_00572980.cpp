// Name: FUN_00572980
// Address: 00572980
// Address Range: [[00572980, 005729cd]]
// Convention: unknown
// Signature: void FUN_00572980(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572980(int param_1)

{
  if ((param_1 < 0) || (0x1f < param_1)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xe70;
    FUN_005030e0("setNextSfxChannel - invalid channel index: %d",param_1);
  }
  *(int *)(_DAT_02c78cec * 0x60 + 0x2c78cf0) = param_1;
  return;
}
