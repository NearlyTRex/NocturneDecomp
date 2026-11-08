// Name: FUN_005589e0
// Address: 005589e0
// Address Range: [[005589e0, 00558a40]]
// Convention: unknown
// Signature: void FUN_005589e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005589e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00558af0();
  if (iVar1 != 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x1694;
    FUN_004e4330("selectRecordingDevice - device already open.");
  }
  if (param_1 < 0) {
    param_1 = DAT_00604258;
  }
  iVar1 = FUN_005588a0();
  if ((param_1 < iVar1) && (-1 < param_1)) {
    DAT_00604258 = param_1;
    return;
  }
  DAT_00604258 = FUN_00558960();
  return;
}
