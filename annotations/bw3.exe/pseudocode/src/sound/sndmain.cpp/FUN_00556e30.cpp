// Name: sound_sndmain.cpp_FUN_00556e30
// Address: 00556e30
// Address Range: [[00556e30, 00556e73]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_00556e30(int channel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_FUN_00556e30(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return *(int *)(channel_index * 4 + 0x2cf2940);
  }
  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
  _DAT_01d71de4 = 0x1147;
  core_main_c_FUN_004e4330("isSfxChannelEnabled - invalid channel index: %d",channel_index);
  return *(int *)(channel_index * 4 + 0x2cf2940);
}
