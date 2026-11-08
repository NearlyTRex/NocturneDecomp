// Name: FUN_00552b50
// Address: 00552b50
// Address Range: [[00552b50, 00552b8f]]
// Convention: unknown
// Signature: void FUN_00552b50(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00552b50(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00552b10();
  if (iVar1 == 0) {
    DAT_0061bcb0 = param_1;
    return;
  }
  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
  _DAT_01d046a4 = 0x1598;
  FUN_004e4500("enableHwSoundMixing - Can't do this while the device is open.");
  DAT_0061bcb0 = param_1;
  return;
}
