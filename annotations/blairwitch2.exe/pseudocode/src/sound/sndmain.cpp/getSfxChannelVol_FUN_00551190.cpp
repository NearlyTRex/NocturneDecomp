// Name: sound_sndmain.cpp_getSfxChannelVol_FUN_00551190
// Address: 00551190
// Address Range: [[00551190, 005511d7]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(int channel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return *(float *)(channel_index * 4 + 0x26484c0);
  }
  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
  _DAT_01d046a4 = 0x1123;
  core_main_c_FUN_004e4500("getSfxChannelVol - invalid channel index: %d",channel_index);
  return *(float *)(channel_index * 4 + 0x26484c0);
}
