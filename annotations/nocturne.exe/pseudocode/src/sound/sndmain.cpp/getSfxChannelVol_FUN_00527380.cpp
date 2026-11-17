// Name: sound_sndmain.cpp_getSfxChannelVol_FUN_00527380
// Address: 00527380
// Address Range: [[00527380, 005273c7]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(int channel_index)

#include "nocturne.h"

float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return g_FLOAT_ARRAY_02dc7958[channel_index];
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 3911;
  core_main_c_displayErrorAndQuit_FUN_004c8440("getSfxChannelVol - invalid channel index: %d",channel_index);
  return g_FLOAT_ARRAY_02dc7958[channel_index];
}
