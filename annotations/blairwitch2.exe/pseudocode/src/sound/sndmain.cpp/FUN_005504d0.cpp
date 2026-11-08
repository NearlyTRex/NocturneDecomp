// Name: FUN_005504d0
// Address: 005504d0
// Address Range: [[005504d0, 00550509]]
// Convention: unknown
// Signature: void FUN_005504d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005504d0(void)

{
  _DAT_0264161c = _DAT_0264161c + -1;
  if (-1 < _DAT_0264161c) {
    return;
  }
  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
  _DAT_01d046a4 = 0xea7;
  FUN_004e4500("popSfxOptions - stack empty");
  return;
}
