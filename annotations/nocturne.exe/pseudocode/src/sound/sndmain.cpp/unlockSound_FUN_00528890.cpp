// Name: sound_sndmain.cpp_unlockSound_FUN_00528890
// Address: 00528890
// Address Range: [[00528890, 005288e0]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_unlockSound_FUN_00528890(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_unlockSound_FUN_00528890(void)

{
  if (g_INT_02dc84bc < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 4877;
    core_main_c_displayErrorAndQuit_FUN_004c8440("unlockSound - sound was not locked!");
  }
  g_INT_02dc84bc = g_INT_02dc84bc + -1;
  wincore_winrun_cpp_releaseMutex_FUN_00559c30(g_HANDLE_02dc84b8);
  return;
}
