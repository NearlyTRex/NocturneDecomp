// Name: FUN_00527380
// Address: 00527380
// Address Range: [[00527380, 005273c7]]
// Convention: unknown
// Signature: undefined4 FUN_00527380(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00527380(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x20)) {
    return *(uint *)(param_1 * 4 + 0x2dc7958);
  }
  _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
  _DAT_01cc4804 = 0xf47;
  FUN_004c8440("getSfxChannelVol - invalid channel index: %d",param_1);
  return *(uint *)(param_1 * 4 + 0x2dc7958);
}
