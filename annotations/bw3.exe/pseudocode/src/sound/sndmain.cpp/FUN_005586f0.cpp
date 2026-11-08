// Name: FUN_005586f0
// Address: 005586f0
// Address Range: [[005586f0, 0055872f]]
// Convention: unknown
// Signature: void FUN_005586f0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005586f0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005586b0();
  if (iVar1 == 0) {
    _DAT_02cf328c = param_1;
    return;
  }
  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
  _DAT_01d71de4 = 0x15a2;
  FUN_004e4330("enableHwSoundMixing - Can't do this while the device is open.");
  _DAT_02cf328c = param_1;
  return;
}
