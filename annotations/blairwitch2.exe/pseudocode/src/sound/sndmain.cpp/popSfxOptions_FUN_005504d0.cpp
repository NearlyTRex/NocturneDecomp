// Name: sound_sndmain.cpp_popSfxOptions_FUN_005504d0
// Address: 005504d0
// Address Range: [[005504d0, 00550509]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005504d0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005504d0(void)

{
  g_SfxLastSlot = g_SfxLastSlot + -1;
  if (-1 < g_SfxLastSlot) {
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 3751;
  core_main_c_displayErrorAndQuit_FUN_004e4500("popSfxOptions - stack empty");
  return;
}
