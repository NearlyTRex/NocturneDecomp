// Name: FUN_00552e40
// Address: 00552e40
// Address Range: [[00552e40, 00552ea0]]
// Convention: unknown
// Signature: void FUN_00552e40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00552e40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00552f50();
  if (iVar1 != 0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x168a;
    FUN_004e4500("selectRecordingDevice - device already open.");
  }
  if (param_1 < 0) {
    param_1 = DAT_0061bccc;
  }
  iVar1 = FUN_00552d00();
  if ((param_1 < iVar1) && (-1 < param_1)) {
    DAT_0061bccc = param_1;
    return;
  }
  DAT_0061bccc = FUN_00552dc0();
  return;
}
