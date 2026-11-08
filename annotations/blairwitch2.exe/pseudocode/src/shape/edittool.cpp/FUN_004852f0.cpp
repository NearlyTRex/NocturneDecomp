// Name: FUN_004852f0
// Address: 004852f0
// Address Range: [[004852f0, 00485375]]
// Convention: unknown
// Signature: int FUN_004852f0(undefined *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004852f0(byte *param_1)

{
  int iVar1;
  
  if (_DAT_01c25590 == 0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(uint *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = FUN_004ab560(_DAT_01c25590,0x6a);
  if (param_1 == (byte *)0x0) {
    param_1 = &DAT_005d2b04;
  }
  iVar1 = FUN_004aaf00(_DAT_01c25590,param_1);
  return DAT_006141b8 / 0x28 + iVar1;
}
