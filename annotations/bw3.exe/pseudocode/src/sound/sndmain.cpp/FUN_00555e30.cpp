// Name: FUN_00555e30
// Address: 00555e30
// Address Range: [[00555e30, 00555e82]]
// Convention: unknown
// Signature: void FUN_00555e30(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555e30(int param_1,uint param_2)

{
  if ((param_1 < 0) || (1 < param_1)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xe6e;
    FUN_004e4330("setNextSfxUserData - invalid user data index: %d",param_1);
  }
  *(uint *)(_DAT_02ceb91c * 0x60 + 0x2ceb964 + param_1 * 4) = param_2;
  return;
}
