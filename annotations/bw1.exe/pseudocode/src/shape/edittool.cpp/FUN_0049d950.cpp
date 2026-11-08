// Name: FUN_0049d950
// Address: 0049d950
// Address Range: [[0049d950, 0049d9d5]]
// Convention: unknown
// Signature: int FUN_0049d950(undefined *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0049d950(byte *param_1)

{
  int iVar1;
  
  if (_DAT_01c3eb50 == 0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = FUN_004c4510(_DAT_01c3eb50,0x6a);
  if (param_1 == (byte *)0x0) {
    param_1 = &DAT_005dc89d;
  }
  iVar1 = FUN_004c3ea0(_DAT_01c3eb50,param_1);
  return DAT_0061b498 / 0x28 + iVar1;
}
