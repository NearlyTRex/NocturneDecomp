// Name: sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
// Address: 005a8af0
// Address Range: [[005a8af0, 005a8b3a]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)

{
  if ((channel_index < 0) || (0x1f < channel_index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xcf8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setNextSfxChannel - invalid channel index: %d",channel_index);
  }
  g_SfxOptions[g_SfxLastSlot].channel_index = channel_index;
  return;
}
