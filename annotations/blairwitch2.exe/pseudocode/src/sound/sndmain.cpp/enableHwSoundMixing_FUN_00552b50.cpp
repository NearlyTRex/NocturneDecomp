// Name: sound_sndmain.cpp_enableHwSoundMixing_FUN_00552b50
// Address: 00552b50
// Address Range: [[00552b50, 00552b8f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_enableHwSoundMixing_FUN_00552b50(int enable)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_enableHwSoundMixing_FUN_00552b50(int enable)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_00552b10();
  if (uVar1 == 0) {
    g_INT_0061bcb0 = enable;
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 5528;
  core_main_c_displayErrorAndQuit_FUN_004e4500("enableHwSoundMixing - Can't do this while the device is open.");
  g_INT_0061bcb0 = enable;
  return;
}
