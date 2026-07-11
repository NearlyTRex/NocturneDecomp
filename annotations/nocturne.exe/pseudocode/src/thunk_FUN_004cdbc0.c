// Name: thunk_FUN_004cdbc0
// Address: 00460bf0
// Address Range: [[00460bf0, 00460bf4]]
// Convention: unknown
// Signature: void thunk_FUN_004cdbc0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004cdbc0(void)

{
  _DAT_01cc5174 = _DAT_01cc5174 + -1;
  if (_DAT_01cc5174 < 0) {
    _DAT_01cc4800 = "..\\engine\\matrix.c";
    _DAT_01cc4804 = 0x355;
    FUN_004c8440("Matrix unbalance2");
  }
  _DAT_01c039e8 = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5178);
  _DAT_01c039ec = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc51a0);
  _DAT_01c039f0 = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc51c8);
  _DAT_01c039f4 = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc51f0);
  _DAT_01c039f8 = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5218);
  _DAT_01c039fc = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5240);
  _DAT_01c03a00 = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5268);
  _DAT_01c03a04 = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5290);
  _DAT_01c03a08 = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc52b8);
  _DAT_01c039b8 = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc52e0);
  _DAT_01c039bc = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5308);
  _DAT_01c039c0 = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5330);
  _DAT_01c039dc = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5358);
  _DAT_01c039e0 = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5380);
  _DAT_01c039e4 = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc53a8);
  return;
}
