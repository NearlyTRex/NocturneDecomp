// Name: sound_sndmain.cpp_setNextSfxChannel_FUN_00572980
// Address: 00572980
// Address Range: [[00572980, 005729cd]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_00572980(int channel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_00572980(int channel_index)

{
  if ((channel_index < 0) || (0x1f < channel_index)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xe70;
    core_main_c_FUN_005030e0("setNextSfxChannel - invalid channel index: %d",channel_index);
  }
  *(int *)(_DAT_02c78cec * 0x60 + 0x2c78cf0) = channel_index;
  return;
}
