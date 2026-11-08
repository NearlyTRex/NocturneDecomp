// Name: FUN_00478e40
// Address: 00478e40
// Address Range: [[00478e40, 00478e8b]]
// Convention: unknown
// Signature: void FUN_00478e40(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00478e40(uint param_1)

{
  if (4 < _DAT_01b6892c) {
    _DAT_01d1d400 = "..\\engine\\dosio.c";
    _DAT_01d1d404 = 0x6a;
    FUN_005030e0("addGetFileInfoHook - too many!");
  }
  *(uint *)(_DAT_01b6892c * 4 + 0x1b68930) = param_1;
  _DAT_01b6892c = _DAT_01b6892c + 1;
  return;
}
