// Name: FUN_00575580
// Address: 00575580
// Address Range: [[00575580, 005755bf]]
// Convention: unknown
// Signature: void FUN_00575580(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00575580(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00575540();
  if (iVar1 == 0) {
    DAT_00623300 = param_1;
    return;
  }
  _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
  _DAT_01d1d404 = 0x158f;
  FUN_005030e0("enableHwSoundMixing - Can't do this while the device is open.");
  DAT_00623300 = param_1;
  return;
}
