// Name: sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20
// Address: 00556d20
// Address Range: [[00556d20, 00556d67]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(int channel_index)

#include "nocturne.h"

float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return g_SfxChannelVolumes[channel_index];
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 4395;
  core_main_c_displayErrorAndQuit_FUN_004e4330("getSfxChannelVol - invalid channel index: %d");
  return g_SfxChannelVolumes[channel_index];
}
