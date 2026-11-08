// Name: thunk_FUN_004ea570
// Address: 0046b740
// Address Range: [[0046b740, 0046b744]]
// Convention: unknown
// Signature: void thunk_FUN_004ea570(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004ea570(void)

{
  _DAT_01d05270 = _DAT_01d05270 + -1;
  if (_DAT_01d05270 < 0) {
    _DAT_01d046a0 = "..\\engine\\matrix.c";
    _DAT_01d046a4 = 0x56c;
    FUN_004e4500("3D Window unbalance");
  }
  _DAT_01c38b78 = *(uint *)(_DAT_01d05270 * 4 + 0x1d0533c);
  _DAT_01c38b7c = *(uint *)(_DAT_01d05270 * 4 + 0x1d05364);
  _DAT_01c38b80 = *(uint *)(_DAT_01d05270 * 4 + 0x1d0538c);
  _DAT_01c38b84 = *(uint *)(_DAT_01d05270 * 4 + 0x1d053b4);
  _DAT_01c38b88 = *(uint *)(_DAT_01d05270 * 4 + 0x1d053dc);
  _DAT_01c38b8c = *(uint *)(_DAT_01d05270 * 4 + 0x1d05404);
  _DAT_01c38b90 = *(uint *)(_DAT_01d05270 * 4 + 0x1d0542c);
  _DAT_01c38b94 = *(uint *)(_DAT_01d05270 * 4 + 0x1d05454);
  _DAT_01c38b98 = *(uint *)(_DAT_01d05270 * 4 + 0x1d0547c);
  _DAT_01c35e38 = *(uint *)(_DAT_01d05270 * 4 + 0x1d05274);
  _DAT_01c35e3c = *(uint *)(_DAT_01d05270 * 4 + 0x1d0529c);
  _DAT_01c35e40 = *(uint *)(_DAT_01d05270 * 4 + 0x1d052c4);
  _DAT_01c35e44 = *(uint *)(_DAT_01d05270 * 4 + 0x1d052ec);
  DAT_006141e4 = *(uint *)(_DAT_01d05270 * 4 + 0x1d05314);
  _DAT_01c35e48 = *(uint *)(_DAT_01d05270 * 4 + 0x1d054a4);
  _DAT_01c35e50 = *(uint *)(_DAT_01d05270 * 4 + 0x1d054cc);
  _DAT_01c35e4c = *(uint *)(_DAT_01d05270 * 4 + 0x1d054f4);
  _DAT_01c35e54 = *(uint *)(_DAT_01d05270 * 4 + 0x1d0551c);
  return;
}
