// Name: sound_sndmain.cpp_FUN_005512a0
// Address: 005512a0
// Address Range: [[005512a0, 005512e3]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_005512a0(int channel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_FUN_005512a0(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return *(int *)(channel_index * 4 + 0x2648540);
  }
  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
  _DAT_01d046a4 = 0x113f;
  core_main_c_FUN_004e4500("isSfxChannelEnabled - invalid channel index: %d",channel_index);
  return *(int *)(channel_index * 4 + 0x2648540);
}
