// Name: FUN_005284a0
// Address: 005284a0
// Address Range: [[005284a0, 005284df]]
// Convention: unknown
// Signature: void FUN_005284a0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005284a0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00528480();
  if (iVar1 == 0) {
    DAT_005bea78 = param_1;
    return;
  }
  _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
  _DAT_01cc4804 = 0x1237;
  FUN_004c8440("enableHwSoundMixing - Can't do this while the device is open.");
  DAT_005bea78 = param_1;
  return;
}
