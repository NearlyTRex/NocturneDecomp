// Name: sound_sndmain.cpp_popSfxOptions_FUN_005263c0
// Address: 005263c0
// Address Range: [[005263c0, 005263f9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005263c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005263c0(void)

{
  _DAT_02dc1b74 = _DAT_02dc1b74 + -1;
  if (-1 < _DAT_02dc1b74) {
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 3331;
  core_main_c_displayErrorAndQuit_FUN_004c8440("popSfxOptions - stack empty");
  return;
}
