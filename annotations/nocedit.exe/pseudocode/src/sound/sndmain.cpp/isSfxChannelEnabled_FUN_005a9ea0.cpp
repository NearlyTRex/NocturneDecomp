// Name: sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
// Address: 005a9ea0
// Address Range: [[005a9ea0, 005a9ee3]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return g_SfxChannelEnabled[channel_index];
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 4016;
  core_main_c_displayErrorAndQuit_FUN_00506f10("isSfxChannelEnabled - invalid channel index: %d",channel_index);
  return g_SfxChannelEnabled[channel_index];
}
