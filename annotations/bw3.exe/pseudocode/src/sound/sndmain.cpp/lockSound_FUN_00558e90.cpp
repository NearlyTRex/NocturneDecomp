// Name: sound_sndmain.cpp_lockSound_FUN_00558e90
// Address: 00558e90
// Address Range: [[00558e90, 00558f16]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_lockSound_FUN_00558e90(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_lockSound_FUN_00558e90(void)

{
  if (g_HANDLE_02cf3418 == (HANDLE)0x0) {
    g_HANDLE_02cf3418 = wincore_winrun_cpp_createMutex_FUN_00581920();
    if (g_HANDLE_02cf3418 == (HANDLE)0x0) {
      g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
      g_INT_01d71de4 = 0x17e7;
      core_main_c_displayErrorAndQuit_FUN_004e4330("lockSound - unable to create mutex object");
    }
  }
  wincore_winrun_cpp_waitForMutex_FUN_00581930(g_HANDLE_02cf3418);
  g_INT_02cf341c = g_INT_02cf341c + 1;
  if (g_INT_02cf341c < 100) {
    return;
  }
  g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
  g_INT_01d71de4 = 0x17f2;
  core_main_c_displayErrorAndQuit_FUN_004e4330("lockSound - lock imbalance?");
  return;
}
