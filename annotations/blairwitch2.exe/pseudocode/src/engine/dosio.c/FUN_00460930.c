// Name: FUN_00460930
// Address: 00460930
// Address Range: [[00460930, 0046097b]]
// Convention: unknown
// Signature: void FUN_00460930(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460930(uint param_1)

{
  if (4 < _DAT_01b4d370) {
    _DAT_01d046a0 = "..\\engine\\dosio.c";
    _DAT_01d046a4 = 0x6a;
    FUN_004e4500("addGetFileInfoHook - too many!");
  }
  *(uint *)(_DAT_01b4d370 * 4 + 0x1b4d374) = param_1;
  _DAT_01b4d370 = _DAT_01b4d370 + 1;
  return;
}
