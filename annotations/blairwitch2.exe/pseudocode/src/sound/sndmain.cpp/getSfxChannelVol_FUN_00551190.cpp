// Name: sound_sndmain.cpp_getSfxChannelVol_FUN_00551190
// Address: 00551190
// Address Range: [[00551190, 005511d7]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(int channel_index)

#include "nocturne.h"

float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return g_SfxChannelVolumes[channel_index];
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 4387;
  core_main_c_displayErrorAndQuit_FUN_004e4500("getSfxChannelVol - invalid channel index: %d");
  return g_SfxChannelVolumes[channel_index];
}
