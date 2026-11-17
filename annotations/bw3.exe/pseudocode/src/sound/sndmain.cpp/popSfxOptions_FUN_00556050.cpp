// Name: sound_sndmain.cpp_popSfxOptions_FUN_00556050
// Address: 00556050
// Address Range: [[00556050, 00556089]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_00556050(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_00556050(void)

{
  g_INT_02ceb91c = g_INT_02ceb91c + -1;
  if (-1 < g_INT_02ceb91c) {
    return;
  }
  g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
  g_INT_01d71de4 = 0xeaa;
  core_main_c_displayErrorAndQuit_FUN_004e4330("popSfxOptions - stack empty");
  return;
}
