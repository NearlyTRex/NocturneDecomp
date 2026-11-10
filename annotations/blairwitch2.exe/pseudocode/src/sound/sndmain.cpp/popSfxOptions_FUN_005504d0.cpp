// Name: sound_sndmain.cpp_popSfxOptions_FUN_005504d0
// Address: 005504d0
// Address Range: [[005504d0, 00550509]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005504d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005504d0(void)

{
  _DAT_0264161c = _DAT_0264161c + -1;
  if (-1 < _DAT_0264161c) {
    return;
  }
  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
  _DAT_01d046a4 = 0xea7;
  core_main_c_FUN_004e4500("popSfxOptions - stack empty");
  return;
}
