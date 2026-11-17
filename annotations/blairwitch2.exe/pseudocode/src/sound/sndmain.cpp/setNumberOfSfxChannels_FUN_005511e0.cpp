// Name: sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005511e0
// Address: 005511e0
// Address Range: [[005511e0, 0055121f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_005511e0(int channel_count)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_005511e0(int channel_count)

{
  if (channel_count < 0x21) {
    g_MaxSoundChannels = channel_count;
    return;
  }
  g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
  g_INT_01d046a4 = 0x1128;
  core_main_c_displayErrorAndQuit_FUN_004e4500("setNumberOfSfxChannels - too many!");
  g_MaxSoundChannels = channel_count;
  return;
}
