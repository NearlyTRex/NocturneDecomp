// Name: sound_sndmain.cpp_popSfxOptions_FUN_005263c0
// Address: 005263c0
// Address Range: [[005263c0, 005263f9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005263c0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005263c0(void)

{
  g_SfxLastSlot = g_SfxLastSlot + -1;
  if (-1 < g_SfxLastSlot) {
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 3331;
  core_main_c_displayErrorAndQuit_FUN_004c8440("popSfxOptions - stack empty");
  return;
}
