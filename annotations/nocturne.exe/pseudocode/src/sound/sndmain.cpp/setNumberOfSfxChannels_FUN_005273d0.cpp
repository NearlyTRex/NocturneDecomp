// Name: sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005273d0
// Address: 005273d0
// Address Range: [[005273d0, 0052740f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_005273d0(int channel_count)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_005273d0(int channel_count)

{
  if (channel_count < 0x21) {
    DAT_005bea60 = channel_count;
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 3916;
  core_main_c_displayErrorAndQuit_FUN_004c8440("setNumberOfSfxChannels - too many!");
  DAT_005bea60 = channel_count;
  return;
}
