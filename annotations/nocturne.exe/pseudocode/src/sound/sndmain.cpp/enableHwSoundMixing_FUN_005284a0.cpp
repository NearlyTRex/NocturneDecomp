// Name: sound_sndmain.cpp_enableHwSoundMixing_FUN_005284a0
// Address: 005284a0
// Address Range: [[005284a0, 005284df]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_enableHwSoundMixing_FUN_005284a0(int enable)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_enableHwSoundMixing_FUN_005284a0(int enable)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_00528480();
  if (uVar1 == 0) {
    DAT_005bea78 = enable;
    return;
  }
  PTR_01cc4800 = "..\\sound\\sndmain.cpp";
  INT_01cc4804 = 0x1237;
  core_main_c_FUN_004c8440("enableHwSoundMixing - Can't do this while the device is open.");
  DAT_005bea78 = enable;
  return;
}
