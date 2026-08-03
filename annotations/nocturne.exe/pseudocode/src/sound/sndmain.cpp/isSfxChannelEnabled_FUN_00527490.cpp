// Name: sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490
// Address: 00527490
// Address Range: [[00527490, 005274d3]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(int channel_index)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return *(int *)(channel_index * 4 + 0x2dc79d8);
  }
  g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
  g_INT_01cc4804 = 0xf61;
  core_main_c_FUN_004c8440("isSfxChannelEnabled - invalid channel index: %d",channel_index);
  return *(int *)(channel_index * 4 + 0x2dc79d8);
}
