// Name: sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005a9de0
// Address: 005a9de0
// Address Range: [[005a9de0, 005a9e1f]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005a9de0(int channel_count)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_005a9de0(int channel_count)

{
  int in_stack_00000008;
  
  if (channel_count < 0x21) {
    g_MaxSoundChannels = channel_count;
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 0xf9b;
  core_main_c_displayErrorAndQuit_FUN_00506f10("setNumberOfSfxChannels - too many!");
  g_MaxSoundChannels = in_stack_00000008;
  return;
}
