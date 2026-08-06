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
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 3276;
    core_main_c_displayErrorAndQuit_FUN_004c8440("setNextSfxChannel - invalid channel index: %d");
  }
  g_CSfxOptions_ARRAY_02dc1b78[_DAT_02dc1b74].channel_index = channel_index;
  return;
}
