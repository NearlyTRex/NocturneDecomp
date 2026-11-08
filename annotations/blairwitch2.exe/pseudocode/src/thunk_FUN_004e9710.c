// Name: thunk_FUN_004e9710
// Address: 0046b490
// Address Range: [[0046b490, 0046b494]]
// Convention: unknown
// Signature: void thunk_FUN_004e9710(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004e9710(void)

{
  *(uint *)(_DAT_01d05014 * 4 + 0x1d05180) = _DAT_01c38b6c;
  *(uint *)(_DAT_01d05014 * 4 + 0x1d051a8) = _DAT_01c38b70;
  *(uint *)(_DAT_01d05014 * 4 + 0x1d051d0) = _DAT_01c38b74;
  *(uint *)(_DAT_01d05014 * 4 + 0x1d051f8) = _DAT_01c38b90;
  *(uint *)(_DAT_01d05014 * 4 + 0x1d05220) = _DAT_01c38b94;
  *(uint *)(_DAT_01d05014 * 4 + 0x1d05248) = _DAT_01c38b98;
  *(uint *)(_DAT_01d05014 * 4 + 0x1d05018) = _DAT_01c38b9c;
  *(uint *)(_DAT_01d05014 * 4 + 0x1d05040) = _DAT_01c38ba0;
  *(uint *)(_DAT_01d05014 * 4 + 0x1d05068) = _DAT_01c38ba4;
  *(uint *)(_DAT_01d05014 * 4 + 0x1d05090) = _DAT_01c38ba8;
  *(uint *)(_DAT_01d05014 * 4 + 0x1d050b8) = _DAT_01c38bac;
  *(uint *)(_DAT_01d05014 * 4 + 0x1d050e0) = _DAT_01c38bb0;
  *(uint *)(_DAT_01d05014 * 4 + 0x1d05108) = _DAT_01c38bb4;
  *(uint *)(_DAT_01d05014 * 4 + 0x1d05130) = _DAT_01c38bb8;
  *(uint *)(_DAT_01d05014 * 4 + 0x1d05158) = _DAT_01c38bbc;
  _DAT_01d05014 = _DAT_01d05014 + 1;
  if (_DAT_01d05014 < 10) {
    return;
  }
  _DAT_01d046a0 = "..\\engine\\matrix.c";
  _DAT_01d046a4 = 0x34b;
  FUN_004e4500("Matrix unbalance");
  return;
}
