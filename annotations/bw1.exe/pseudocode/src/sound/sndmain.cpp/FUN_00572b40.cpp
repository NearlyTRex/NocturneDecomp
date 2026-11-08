// Name: FUN_00572b40
// Address: 00572b40
// Address Range: [[00572b40, 00572b79]]
// Convention: unknown
// Signature: void FUN_00572b40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572b40(void)

{
  _DAT_02c78cec = _DAT_02c78cec + -1;
  if (-1 < _DAT_02c78cec) {
    return;
  }
  _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
  _DAT_01d1d404 = 0xea7;
  FUN_005030e0("popSfxOptions - stack empty");
  return;
}
