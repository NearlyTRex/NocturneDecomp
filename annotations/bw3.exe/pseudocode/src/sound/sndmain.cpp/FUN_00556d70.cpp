// Name: FUN_00556d70
// Address: 00556d70
// Address Range: [[00556d70, 00556daf]]
// Convention: unknown
// Signature: void FUN_00556d70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556d70(int param_1)

{
  if (param_1 < 0x21) {
    DAT_00604224 = param_1;
    return;
  }
  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
  _DAT_01d71de4 = 0x1130;
  FUN_004e4330("setNumberOfSfxChannels - too many!");
  DAT_00604224 = param_1;
  return;
}
