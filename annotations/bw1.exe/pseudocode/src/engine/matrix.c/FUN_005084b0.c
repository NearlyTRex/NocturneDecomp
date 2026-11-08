// Name: FUN_005084b0
// Address: 005084b0
// Address Range: [[005084b0, 005085b8]]
// Convention: unknown
// Signature: void FUN_005084b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005084b0(void)

{
  _DAT_01d1dd74 = _DAT_01d1dd74 + -1;
  if (_DAT_01d1dd74 < 0) {
    _DAT_01d1d400 = "..\\engine\\matrix.c";
    _DAT_01d1d404 = 0x358;
    FUN_005030e0("Matrix unbalance2");
  }
  _DAT_01c51d5c = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1dd78);
  _DAT_01c51d60 = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1dda0);
  _DAT_01c51d64 = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1ddc8);
  _DAT_01c51d68 = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1ddf0);
  _DAT_01c51d6c = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1de18);
  _DAT_01c51d70 = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1de40);
  _DAT_01c51d74 = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1de68);
  _DAT_01c51d78 = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1de90);
  _DAT_01c51d7c = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1deb8);
  _DAT_01c51d2c = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1dee0);
  _DAT_01c51d30 = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1df08);
  _DAT_01c51d34 = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1df30);
  _DAT_01c51d50 = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1df58);
  _DAT_01c51d54 = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1df80);
  _DAT_01c51d58 = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1dfa8);
  return;
}
