// Name: FUN_00555e90
// Address: 00555e90
// Address Range: [[00555e90, 00555edd]]
// Convention: unknown
// Signature: void FUN_00555e90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555e90(int param_1)

{
  if ((param_1 < 0) || (0x1f < param_1)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xe73;
    FUN_004e4330("setNextSfxChannel - invalid channel index: %d",param_1);
  }
  *(int *)(_DAT_02ceb91c * 0x60 + 0x2ceb920) = param_1;
  return;
}
