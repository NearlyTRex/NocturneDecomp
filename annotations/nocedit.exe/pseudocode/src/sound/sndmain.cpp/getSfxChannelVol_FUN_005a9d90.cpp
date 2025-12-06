// Name: sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
// Address: 005a9d90
// Address Range: [[005a9d90, 005a9dd7]]
// Convention: __cdecl
// Signature: float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)

#include "nocturne.h"

float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return g_SfxChannelVolumes[channel_index];
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 0xf96;
  core_main_c_displayErrorAndQuit_FUN_00506f10("getSfxChannelVol - invalid channel index: %d",channel_index);
  return g_SfxChannelVolumes[channel_index];
}
