// Name: sound_sndmain.cpp_getSfxChannelVol_FUN_00551190
// Address: 00551190
// Address Range: [[00551190, 005511d7]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(int channel_index)

#include "nocturne.h"

float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return g_FLOAT_ARRAY_026484c0[channel_index];
  }
  g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
  g_INT_01d046a4 = 0x1123;
  core_main_c_displayErrorAndQuit_FUN_004e4500("getSfxChannelVol - invalid channel index: %d");
  return g_FLOAT_ARRAY_026484c0[channel_index];
}
