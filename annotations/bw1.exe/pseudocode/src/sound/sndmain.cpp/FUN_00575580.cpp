// Name: sound_sndmain.cpp_FUN_00575580
// Address: 00575580
// Address Range: [[00575580, 005755bf]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00575580(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00575580(uint param_1)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_00575540();
  if (uVar1 == 0) {
    DAT_00623300 = param_1;
    return;
  }
  _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
  _DAT_01d1d404 = 0x158f;
  core_main_c_FUN_005030e0("enableHwSoundMixing - Can't do this while the device is open.");
  DAT_00623300 = param_1;
  return;
}
