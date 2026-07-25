// Name: FUN_004ceb90
// Address: 004ceb90
// Address Range: [[004ceb90, 004cebf5]]
// Convention: unknown
// Signature: void FUN_004ceb90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_004ceb90(void)

{
  _DAT_01cc5174 = _DAT_01cc5174 + -1;
  if (_DAT_01cc5174 < 0) {
    _DAT_01cc4800 = "..\\engine\\matrix.c";
    _DAT_01cc4804 = 0x5d6;
    FUN_004c8440("Matrix unbalance4");
  }
  _DAT_01c039b8 = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc52e0);
  _DAT_01c039bc = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5308);
  _DAT_01c039c0 = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5330);
  return;
}
