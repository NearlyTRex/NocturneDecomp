// Name: sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
// Address: 005a8c30
// MANUAL RECONSTRUCTION
// Address Range: [[005a8c30, 005a8ca1]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30(void)

{
  g_SfxLastSlot = g_SfxLastSlot + 1;
  if (7 < g_SfxLastSlot) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 3360;
    core_main_c_displayErrorAndQuit_FUN_00506f10("pushSfxOptions - stack full");
  }
  memcpy(&g_SfxOptions[g_SfxLastSlot],&g_SfxOptions[g_SfxLastSlot + -1],sizeof(CSfxOptions));
  return;
}
