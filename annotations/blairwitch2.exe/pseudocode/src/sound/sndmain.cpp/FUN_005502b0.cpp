// Name: FUN_005502b0
// Address: 005502b0
// Address Range: [[005502b0, 00550302]]
// Convention: unknown
// Signature: void FUN_005502b0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005502b0(int param_1,uint param_2)

{
  if ((param_1 < 0) || (1 < param_1)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xe6b;
    FUN_004e4500("setNextSfxUserData - invalid user data index: %d",param_1);
  }
  *(uint *)(_DAT_0264161c * 0x60 + 0x2641664 + param_1 * 4) = param_2;
  return;
}
