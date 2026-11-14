// Name: sound_sndmain.cpp_setNumberOfSfxChannels_FUN_00556d70
// Address: 00556d70
// Address Range: [[00556d70, 00556daf]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_00556d70(int channel_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_00556d70(int channel_count)

{
  if (channel_count < 0x21) {
    DAT_00604224 = channel_count;
    return;
  }
  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
  _DAT_01d71de4 = 0x1130;
  core_main_c_FUN_004e4330("setNumberOfSfxChannels - too many!");
  DAT_00604224 = channel_count;
  return;
}
