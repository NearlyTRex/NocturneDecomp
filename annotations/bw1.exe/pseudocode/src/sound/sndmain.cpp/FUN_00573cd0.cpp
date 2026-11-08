// Name: FUN_00573cd0
// Address: 00573cd0
// Address Range: [[00573cd0, 00573d13]]
// Convention: unknown
// Signature: undefined4 FUN_00573cd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00573cd0(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x20)) {
    return *(uint *)(param_1 * 4 + 0x2c7fd10);
  }
  _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
  _DAT_01d1d404 = 0x1136;
  FUN_005030e0("isSfxChannelEnabled - invalid channel index: %d",param_1);
  return *(uint *)(param_1 * 4 + 0x2c7fd10);
}
