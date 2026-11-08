// Name: FUN_00573c10
// Address: 00573c10
// Address Range: [[00573c10, 00573c4f]]
// Convention: unknown
// Signature: void FUN_00573c10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573c10(int param_1)

{
  if (param_1 < 0x21) {
    DAT_006232e4 = param_1;
    return;
  }
  _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
  _DAT_01d1d404 = 0x111f;
  FUN_005030e0("setNumberOfSfxChannels - too many!");
  DAT_006232e4 = param_1;
  return;
}
