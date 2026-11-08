// Name: FUN_00556e30
// Address: 00556e30
// Address Range: [[00556e30, 00556e73]]
// Convention: unknown
// Signature: undefined4 FUN_00556e30(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00556e30(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x20)) {
    return *(uint *)(param_1 * 4 + 0x2cf2940);
  }
  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
  _DAT_01d71de4 = 0x1147;
  FUN_004e4330("isSfxChannelEnabled - invalid channel index: %d",param_1);
  return *(uint *)(param_1 * 4 + 0x2cf2940);
}
