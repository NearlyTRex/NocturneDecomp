// Name: FUN_005512a0
// Address: 005512a0
// Address Range: [[005512a0, 005512e3]]
// Convention: unknown
// Signature: undefined4 FUN_005512a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005512a0(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x20)) {
    return *(uint *)(param_1 * 4 + 0x2648540);
  }
  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
  _DAT_01d046a4 = 0x113f;
  FUN_004e4500("isSfxChannelEnabled - invalid channel index: %d",param_1);
  return *(uint *)(param_1 * 4 + 0x2648540);
}
