// Name: sound_sndmain.cpp_popSfxOptions_FUN_00556050
// Address: 00556050
// Address Range: [[00556050, 00556089]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_00556050(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_00556050(void)

{
  g_SfxLastSlot = g_SfxLastSlot + -1;
  if (-1 < g_SfxLastSlot) {
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 3754;
  core_main_c_displayErrorAndQuit_FUN_004e4330("popSfxOptions - stack empty");
  return;
}
