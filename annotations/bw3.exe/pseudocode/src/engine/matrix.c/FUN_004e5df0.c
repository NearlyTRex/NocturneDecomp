// Name: FUN_004e5df0
// Address: 004e5df0
// Address Range: [[004e5df0, 004e5eee]]
// Convention: unknown
// Signature: void FUN_004e5df0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e5df0(void)

{
  *(uint *)(_DAT_01d726a0 * 4 + 0x1d7280c) = _DAT_01c6e2cc;
  *(uint *)(_DAT_01d726a0 * 4 + 0x1d72834) = _DAT_01c6e2d0;
  *(uint *)(_DAT_01d726a0 * 4 + 0x1d7285c) = _DAT_01c6e2d4;
  *(uint *)(_DAT_01d726a0 * 4 + 0x1d72884) = _DAT_01c6e2f0;
  *(uint *)(_DAT_01d726a0 * 4 + 0x1d728ac) = _DAT_01c6e2f4;
  *(uint *)(_DAT_01d726a0 * 4 + 0x1d728d4) = _DAT_01c6e2f8;
  *(uint *)(_DAT_01d726a0 * 4 + 0x1d726a4) = _DAT_01c6e2fc;
  *(uint *)(_DAT_01d726a0 * 4 + 0x1d726cc) = _DAT_01c6e300;
  *(uint *)(_DAT_01d726a0 * 4 + 0x1d726f4) = _DAT_01c6e304;
  *(uint *)(_DAT_01d726a0 * 4 + 0x1d7271c) = _DAT_01c6e308;
  *(uint *)(_DAT_01d726a0 * 4 + 0x1d72744) = _DAT_01c6e30c;
  *(uint *)(_DAT_01d726a0 * 4 + 0x1d7276c) = _DAT_01c6e310;
  *(uint *)(_DAT_01d726a0 * 4 + 0x1d72794) = _DAT_01c6e314;
  *(uint *)(_DAT_01d726a0 * 4 + 0x1d727bc) = _DAT_01c6e318;
  *(uint *)(_DAT_01d726a0 * 4 + 0x1d727e4) = _DAT_01c6e31c;
  _DAT_01d726a0 = _DAT_01d726a0 + 1;
  if (_DAT_01d726a0 < 10) {
    return;
  }
  _DAT_01d71de0 = "..\\engine\\matrix.c";
  _DAT_01d71de4 = 0x34b;
  FUN_004e4330("Matrix unbalance");
  return;
}
