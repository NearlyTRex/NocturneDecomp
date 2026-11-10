// Name: sound_sndmain.cpp_popSfxOptions_FUN_00556050
// Address: 00556050
// Address Range: [[00556050, 00556089]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_00556050(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_00556050(void)

{
  _DAT_02ceb91c = _DAT_02ceb91c + -1;
  if (-1 < _DAT_02ceb91c) {
    return;
  }
  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
  _DAT_01d71de4 = 0xeaa;
  core_main_c_FUN_004e4330("popSfxOptions - stack empty");
  return;
}
