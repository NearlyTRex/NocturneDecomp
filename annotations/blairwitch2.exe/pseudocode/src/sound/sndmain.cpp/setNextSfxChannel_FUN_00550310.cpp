// Name: sound_sndmain.cpp_setNextSfxChannel_FUN_00550310
// Address: 00550310
// Address Range: [[00550310, 0055035d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(int channel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(int channel_index)

{
  if ((channel_index < 0) || (0x1f < channel_index)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xe70;
    core_main_c_FUN_004e4500("setNextSfxChannel - invalid channel index: %d",channel_index);
  }
  *(int *)(_DAT_0264161c * 0x60 + 0x2641620) = channel_index;
  return;
}
