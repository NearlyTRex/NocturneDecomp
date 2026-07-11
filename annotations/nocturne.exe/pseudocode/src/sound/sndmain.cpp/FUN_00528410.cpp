// Name: FUN_00528410
// Address: 00528410
// Address Range: [[00528410, 00528470]]
// Convention: unknown
// Signature: void FUN_00528410(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00528410(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00528480();
  if (iVar1 != 0) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x1211;
    FUN_004c8440("selectSoundDevice - device already open.");
  }
  if (param_1 < 0) {
    param_1 = DAT_005bea74;
  }
  iVar1 = FUN_00528230();
  if ((param_1 < iVar1) && (-1 < param_1)) {
    DAT_005bea74 = param_1;
    return;
  }
  DAT_005bea74 = FUN_00528320();
  return;
}
