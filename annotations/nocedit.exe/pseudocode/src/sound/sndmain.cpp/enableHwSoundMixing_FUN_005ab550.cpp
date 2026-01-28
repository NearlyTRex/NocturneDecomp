// Name: sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550
// Address: 005ab550
// Address Range: [[005ab550, 005ab58f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550(int enable)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550(int enable)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_005ab530();
  if (uVar1 == 0) {
    g_HardwareMixingEnabled = enable;
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 0x135b;
  core_main_c_displayErrorAndQuit_FUN_00506f10("enableHwSoundMixing - Can't do this while the device is open.");
  g_HardwareMixingEnabled = enable;
  return;
}
