// Name: sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90
// Address: 00555e90
// Address Range: [[00555e90, 00555edd]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(int channel_index)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(int channel_index)

{
  if ((channel_index < 0) || (0x1f < channel_index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 3699;
    core_main_c_displayErrorAndQuit_FUN_004e4330("setNextSfxChannel - invalid channel index: %d");
  }
  g_CSfxOptions_ARRAY_02ceb920[g_SfxLastSlot].channel_index = channel_index;
  return;
}
