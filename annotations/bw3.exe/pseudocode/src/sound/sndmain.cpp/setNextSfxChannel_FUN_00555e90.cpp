// Name: sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90
// Address: 00555e90
// Address Range: [[00555e90, 00555edd]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(int channel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(int channel_index)

{
  if ((channel_index < 0) || (0x1f < channel_index)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xe73;
    core_main_c_FUN_004e4330("setNextSfxChannel - invalid channel index: %d",channel_index);
  }
  *(int *)(_DAT_02ceb91c * 0x60 + 0x2ceb920) = channel_index;
  return;
}
