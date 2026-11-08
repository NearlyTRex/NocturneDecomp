// Name: FUN_00558640
// Address: 00558640
// Address Range: [[00558640, 005586a0]]
// Convention: unknown
// Signature: void FUN_00558640(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00558640(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005586b0();
  if (iVar1 != 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x1575;
    FUN_004e4330("selectSoundDevice - device already open.");
  }
  if (param_1 < 0) {
    param_1 = DAT_0060423c;
  }
  iVar1 = FUN_00558430();
  if ((param_1 < iVar1) && (-1 < param_1)) {
    DAT_0060423c = param_1;
    return;
  }
  DAT_0060423c = FUN_00558520();
  return;
}
