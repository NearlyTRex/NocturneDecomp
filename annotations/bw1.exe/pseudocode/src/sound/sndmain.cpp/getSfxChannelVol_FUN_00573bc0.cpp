// Name: sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0
// Address: 00573bc0
// Address Range: [[00573bc0, 00573c07]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(int channel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return *(float *)(channel_index * 4 + 0x2c7fc90);
  }
  _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
  _DAT_01d1d404 = 0x111a;
  core_main_c_FUN_005030e0("getSfxChannelVol - invalid channel index: %d",channel_index);
  return *(float *)(channel_index * 4 + 0x2c7fc90);
}
