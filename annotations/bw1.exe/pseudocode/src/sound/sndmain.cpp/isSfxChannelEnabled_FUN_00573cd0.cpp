// Name: sound_sndmain.cpp_isSfxChannelEnabled_FUN_00573cd0
// Address: 00573cd0
// Address Range: [[00573cd0, 00573d13]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(int channel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return *(int *)(channel_index * 4 + 0x2c7fd10);
  }
  _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
  _DAT_01d1d404 = 0x1136;
  core_main_c_FUN_005030e0("isSfxChannelEnabled - invalid channel index: %d",channel_index);
  return *(int *)(channel_index * 4 + 0x2c7fd10);
}
