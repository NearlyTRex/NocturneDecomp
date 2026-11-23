// Name: sound_sndmain.cpp_setNumberOfSfxChannels_FUN_00573c10
// Address: 00573c10
// Address Range: [[00573c10, 00573c4f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_00573c10(int channel_count)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_00573c10(int channel_count)

{
  if (channel_count < 0x21) {
    g_MaxSoundChannels = channel_count;
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 4383;
  core_main_c_displayErrorAndQuit_FUN_005030e0("setNumberOfSfxChannels - too many!");
  g_MaxSoundChannels = channel_count;
  return;
}
