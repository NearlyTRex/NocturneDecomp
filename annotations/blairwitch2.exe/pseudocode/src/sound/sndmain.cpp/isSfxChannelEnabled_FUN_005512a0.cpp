// Name: sound_sndmain.cpp_isSfxChannelEnabled_FUN_005512a0
// Address: 005512a0
// Address Range: [[005512a0, 005512e3]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(int channel_index)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return g_INT_ARRAY_02648540[channel_index];
  }
  g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
  g_INT_01d046a4 = 0x113f;
  core_main_c_displayErrorAndQuit_FUN_004e4500("isSfxChannelEnabled - invalid channel index: %d");
  return g_INT_ARRAY_02648540[channel_index];
}
