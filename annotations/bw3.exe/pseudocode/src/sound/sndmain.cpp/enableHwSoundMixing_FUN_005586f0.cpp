// Name: sound_sndmain.cpp_enableHwSoundMixing_FUN_005586f0
// Address: 005586f0
// Address Range: [[005586f0, 0055872f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_enableHwSoundMixing_FUN_005586f0(int enable)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_enableHwSoundMixing_FUN_005586f0(int enable)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_005586b0();
  if (uVar1 == 0) {
    _DAT_02cf328c = enable;
    return;
  }
  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
  _DAT_01d71de4 = 0x15a2;
  core_main_c_FUN_004e4330("enableHwSoundMixing - Can't do this while the device is open.");
  _DAT_02cf328c = enable;
  return;
}
