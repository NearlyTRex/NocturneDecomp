// Name: FUN_00485380
// Address: 00485380
// Address Range: [[00485380, 0048540e]]
// Convention: unknown
// Signature: int FUN_00485380(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00485380(int param_1)

{
  int iVar1;
  
  if (_DAT_01c25590 == 0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(uint *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = FUN_004ab560(_DAT_01c25590,0x6a);
  if (param_1 == 0) {
    iVar1 = *(int *)(_DAT_01c25590 + 0x41ec);
  }
  else {
    iVar1 = FUN_004aafb0(_DAT_01c25590,param_1);
  }
  return DAT_006141bc / 0x50 + iVar1;
}
