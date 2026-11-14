// Name: sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005511e0
// Address: 005511e0
// Address Range: [[005511e0, 0055121f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_005511e0(int channel_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_005511e0(int channel_count)

{
  if (channel_count < 0x21) {
    DAT_0061bc94 = channel_count;
    return;
  }
  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
  _DAT_01d046a4 = 0x1128;
  core_main_c_FUN_004e4500("setNumberOfSfxChannels - too many!");
  DAT_0061bc94 = channel_count;
  return;
}
