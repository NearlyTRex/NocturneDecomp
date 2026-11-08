// Name: FUN_005754d0
// Address: 005754d0
// Address Range: [[005754d0, 00575530]]
// Convention: unknown
// Signature: void FUN_005754d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005754d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00575540();
  if (iVar1 != 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x1562;
    FUN_005030e0("selectSoundDevice - device already open.");
  }
  if (param_1 < 0) {
    param_1 = DAT_006232fc;
  }
  iVar1 = FUN_005752c0();
  if ((param_1 < iVar1) && (-1 < param_1)) {
    DAT_006232fc = param_1;
    return;
  }
  DAT_006232fc = FUN_005753b0();
  return;
}
