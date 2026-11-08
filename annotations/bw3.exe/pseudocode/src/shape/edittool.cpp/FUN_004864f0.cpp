// Name: FUN_004864f0
// Address: 004864f0
// Address Range: [[004864f0, 00486575]]
// Convention: unknown
// Signature: int FUN_004864f0(undefined *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004864f0(byte *param_1)

{
  int iVar1;
  
  if (_DAT_01c5b0e0 == 0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  if (param_1 == (byte *)0x0) {
    param_1 = &DAT_005bd95a;
  }
  iVar1 = FUN_004b2a80(_DAT_01c5b0e0,param_1);
  return DAT_005fba18 / 0x28 + iVar1;
}
