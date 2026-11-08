// Name: FUN_005511e0
// Address: 005511e0
// Address Range: [[005511e0, 0055121f]]
// Convention: unknown
// Signature: void FUN_005511e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005511e0(int param_1)

{
  if (param_1 < 0x21) {
    DAT_0061bc94 = param_1;
    return;
  }
  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
  _DAT_01d046a4 = 0x1128;
  FUN_004e4500("setNumberOfSfxChannels - too many!");
  DAT_0061bc94 = param_1;
  return;
}
