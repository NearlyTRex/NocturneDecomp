// Name: sound_sndmain.cpp_popSfxOptions_FUN_00572b40
// Address: 00572b40
// Address Range: [[00572b40, 00572b79]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_00572b40(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_00572b40(void)

{
  g_SfxLastSlot = g_SfxLastSlot + -1;
  if (-1 < g_SfxLastSlot) {
    return;
  }
  g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
  g_INT_01d1d404 = 0xea7;
  core_main_c_displayErrorAndQuit_FUN_005030e0("popSfxOptions - stack empty");
  return;
}
