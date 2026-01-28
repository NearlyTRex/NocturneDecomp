// Name: sound_sndmain.cpp_killSoundThread_FUN_005abcb0
// Address: 005abcb0
// Address Range: [[005abcb0, 005abd2c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_killSoundThread_FUN_005abcb0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_killSoundThread_FUN_005abcb0(void)

{
  int iVar1;
  
  iVar1 = 0;
  g_AudioThreadShutdownFlag = 1;
  do {
    if (g_AudioThreadRunning == 0) break;
    iVar1 = iVar1 + 1;
    wincore_winrun_cpp_sleep_FUN_005f40e0(0.01);
  } while (iVar1 < 100);
  if (g_AudioThreadRunning == 0) {
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0("killSoundThread - failed!\n");
  return (uint)(g_AudioThreadRunning == 0);
}
