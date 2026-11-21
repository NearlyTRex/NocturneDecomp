// Name: sound_sndmain.cpp_setNumberOfSfxChannels_FUN_00556d70
// Address: 00556d70
// Address Range: [[00556d70, 00556daf]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_00556d70(int channel_count)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_00556d70(int channel_count)

{
  if (channel_count < 0x21) {
    g_MaxSoundChannels = channel_count;
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 4400;
  core_main_c_displayErrorAndQuit_FUN_004e4330("setNumberOfSfxChannels - too many!");
  g_MaxSoundChannels = channel_count;
  return;
}
