// Name: FUN_005273d0
// Address: 005273d0
// Address Range: [[005273d0, 0052740f]]
// Convention: unknown
// Signature: void FUN_005273d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005273d0(int param_1)

{
  if (param_1 < 0x21) {
    DAT_005bea60 = param_1;
    return;
  }
  _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
  _DAT_01cc4804 = 0xf4c;
  FUN_004c8440("setNumberOfSfxChannels - too many!");
  DAT_005bea60 = param_1;
  return;
}
