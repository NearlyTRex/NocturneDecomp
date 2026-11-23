// Name: sound_sndmain.cpp_isSfxChannelEnabled_FUN_00573cd0
// Address: 00573cd0
// Address Range: [[00573cd0, 00573d13]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(int channel_index)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return g_SfxChannelEnabled[channel_index];
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 4406;
  core_main_c_displayErrorAndQuit_FUN_005030e0("isSfxChannelEnabled - invalid channel index: %d");
  return g_SfxChannelEnabled[channel_index];
}
