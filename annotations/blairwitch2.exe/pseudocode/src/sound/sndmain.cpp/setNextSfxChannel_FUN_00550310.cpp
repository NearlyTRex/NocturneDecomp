// Name: sound_sndmain.cpp_setNextSfxChannel_FUN_00550310
// Address: 00550310
// Address Range: [[00550310, 0055035d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(int channel_index)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(int channel_index)

{
  if ((channel_index < 0) || (0x1f < channel_index)) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
    g_INT_01d046a4 = 0xe70;
    core_main_c_displayErrorAndQuit_FUN_004e4500("setNextSfxChannel - invalid channel index: %d");
  }
  g_CSfxOptions_ARRAY_02641620[g_INT_0264161c].channel_index = channel_index;
  return;
}
