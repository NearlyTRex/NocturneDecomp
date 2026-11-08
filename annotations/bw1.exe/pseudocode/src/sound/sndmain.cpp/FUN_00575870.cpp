// Name: FUN_00575870
// Address: 00575870
// Address Range: [[00575870, 005758d0]]
// Convention: unknown
// Signature: void FUN_00575870(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00575870(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00575980();
  if (iVar1 != 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x1681;
    FUN_005030e0("selectRecordingDevice - device already open.");
  }
  if (param_1 < 0) {
    param_1 = DAT_0062331c;
  }
  iVar1 = FUN_00575730();
  if ((param_1 < iVar1) && (-1 < param_1)) {
    DAT_0062331c = param_1;
    return;
  }
  DAT_0062331c = FUN_005757f0();
  return;
}
