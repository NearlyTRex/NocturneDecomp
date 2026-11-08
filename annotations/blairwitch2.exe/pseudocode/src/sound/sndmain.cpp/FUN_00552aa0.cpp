// Name: FUN_00552aa0
// Address: 00552aa0
// Address Range: [[00552aa0, 00552b00]]
// Convention: unknown
// Signature: void FUN_00552aa0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00552aa0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00552b10();
  if (iVar1 != 0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x156b;
    FUN_004e4500("selectSoundDevice - device already open.");
  }
  if (param_1 < 0) {
    param_1 = DAT_0061bcac;
  }
  iVar1 = FUN_00552890();
  if ((param_1 < iVar1) && (-1 < param_1)) {
    DAT_0061bcac = param_1;
    return;
  }
  DAT_0061bcac = FUN_00552980();
  return;
}
