// Name: sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
// Address: 005a8cb0
// Address Range: [[005a8cb0, 005a8ce9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0(void)

{
  g_SfxLastSlot = g_SfxLastSlot + -1;
  if (-1 < g_SfxLastSlot) {
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 3375;
  core_main_c_displayErrorAndQuit_FUN_00506f10("popSfxOptions - stack empty");
  return;
}
