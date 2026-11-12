// Name: sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20
// Address: 00556d20
// Address Range: [[00556d20, 00556d67]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(int channel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return *(float *)(channel_index * 4 + 0x2cf28c0);
  }
  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
  _DAT_01d71de4 = 0x112b;
  core_main_c_FUN_004e4330("getSfxChannelVol - invalid channel index: %d",channel_index);
  return *(float *)(channel_index * 4 + 0x2cf28c0);
}
