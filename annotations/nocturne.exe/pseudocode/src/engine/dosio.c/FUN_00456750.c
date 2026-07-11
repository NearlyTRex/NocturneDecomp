// Name: FUN_00456750
// Address: 00456750
// Address Range: [[00456750, 0045679b]]
// Convention: unknown
// Signature: void FUN_00456750(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456750(uint param_1)

{
  if (4 < _DAT_01af4ed8) {
    _DAT_01cc4800 = "..\\engine\\dosio.c";
    _DAT_01cc4804 = 0x4d;
    FUN_004c8440("addGetFileInfoHook - too many!");
  }
  *(uint *)(_DAT_01af4ed8 * 4 + 0x1af4edc) = param_1;
  _DAT_01af4ed8 = _DAT_01af4ed8 + 1;
  return;
}
