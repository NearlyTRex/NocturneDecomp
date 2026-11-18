// Name: sound_sndmain.cpp_lockSound_FUN_005532f0
// Address: 005532f0
// Address Range: [[005532f0, 00553376]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_lockSound_FUN_005532f0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_lockSound_FUN_005532f0(void)

{
  if (g_SoundMutex == (HANDLE)0x0) {
    g_SoundMutex = wincore_winrun_cpp_createMutex_FUN_0058fc90();
    if (g_SoundMutex == (HANDLE)0x0) {
      g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
      g_INT_01d046a4 = 0x17dd;
      core_main_c_displayErrorAndQuit_FUN_004e4500("lockSound - unable to create mutex object");
    }
  }
  wincore_winrun_cpp_waitForMutex_FUN_0058fca0(g_SoundMutex);
  g_SoundLockCount = g_SoundLockCount + 1;
  if (g_SoundLockCount < 100) {
    return;
  }
  g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
  g_INT_01d046a4 = 0x17e8;
  core_main_c_displayErrorAndQuit_FUN_004e4500("lockSound - lock imbalance?");
  return;
}
