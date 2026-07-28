// Name: sound_sndmain.cpp_setNextSfxChannel_FUN_005261b0
// Address: 005261b0
// Address Range: [[005261b0, 00526200]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(int channel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(int channel_index)

{
  if ((channel_index < 0) || (0x1f < channel_index)) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0xccc;
    core_main_c_FUN_004c8440("setNextSfxChannel - invalid channel index: %d",channel_index);
  }
  *(int *)(_DAT_02dc1b74 * 0x6c + 0x2dc1b78) = channel_index;
  return;
}
