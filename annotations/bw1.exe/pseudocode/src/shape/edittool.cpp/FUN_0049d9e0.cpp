// Name: FUN_0049d9e0
// Address: 0049d9e0
// Address Range: [[0049d9e0, 0049da6e]]
// Convention: unknown
// Signature: int FUN_0049d9e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0049d9e0(int param_1)

{
  int iVar1;
  
  if (_DAT_01c3eb50 == 0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = FUN_004c4510(_DAT_01c3eb50,0x6a);
  if (param_1 == 0) {
    iVar1 = *(int *)(_DAT_01c3eb50 + 0x41ec);
  }
  else {
    iVar1 = FUN_004c3f50(_DAT_01c3eb50,param_1);
  }
  return DAT_0061b49c / 0x50 + iVar1;
}
