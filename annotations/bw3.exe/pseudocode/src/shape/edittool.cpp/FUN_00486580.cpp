// Name: FUN_00486580
// Address: 00486580
// Address Range: [[00486580, 0048660e]]
// Convention: unknown
// Signature: int FUN_00486580(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00486580(int param_1)

{
  int iVar1;
  
  if (_DAT_01c5b0e0 == 0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  if (param_1 == 0) {
    iVar1 = *(int *)(_DAT_01c5b0e0 + 0x41ec);
  }
  else {
    iVar1 = FUN_004b2b30(_DAT_01c5b0e0,param_1);
  }
  return DAT_005fba1c / 0x50 + iVar1;
}
