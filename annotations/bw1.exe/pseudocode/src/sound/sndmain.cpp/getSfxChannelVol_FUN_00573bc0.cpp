// Name: sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0
// Address: 00573bc0
// Address Range: [[00573bc0, 00573c07]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(int channel_index)

#include "nocturne.h"

float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return g_SfxChannelVolumes[channel_index];
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 4378;
  core_main_c_displayErrorAndQuit_FUN_005030e0("getSfxChannelVol - invalid channel index: %d");
  return g_SfxChannelVolumes[channel_index];
}
