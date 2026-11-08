// Name: FUN_00572920
// Address: 00572920
// Address Range: [[00572920, 00572972]]
// Convention: unknown
// Signature: void FUN_00572920(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572920(int param_1,uint param_2)

{
  if ((param_1 < 0) || (1 < param_1)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xe6b;
    FUN_005030e0("setNextSfxUserData - invalid user data index: %d",param_1);
  }
  *(uint *)(_DAT_02c78cec * 0x60 + 0x2c78d34 + param_1 * 4) = param_2;
  return;
}
