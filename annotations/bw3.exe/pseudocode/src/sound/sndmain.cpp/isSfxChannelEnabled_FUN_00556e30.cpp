// Name: sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30
// Address: 00556e30
// Address Range: [[00556e30, 00556e73]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return g_SfxChannelEnabled[channel_index];
  }
  g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
  g_INT_01d71de4 = 0x1147;
  core_main_c_displayErrorAndQuit_FUN_004e4330("isSfxChannelEnabled - invalid channel index: %d");
  return g_SfxChannelEnabled[channel_index];
}
