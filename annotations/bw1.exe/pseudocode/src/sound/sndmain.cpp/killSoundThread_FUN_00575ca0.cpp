// Name: sound_sndmain.cpp_killSoundThread_FUN_00575ca0
// Address: 00575ca0
// Address Range: [[00575ca0, 00575d1c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_killSoundThread_FUN_00575ca0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_killSoundThread_FUN_00575ca0(void)

{
  int iVar1;
  
  iVar1 = 0;
  g_AudioThreadShutdownFlag = 1;
  do {
    if (g_AudioThreadRunning == 0) break;
    iVar1 = iVar1 + 1;
    wincore_winrun_cpp_sleep_FUN_005b3860(0.01);
  } while (iVar1 < 100);
  if (g_AudioThreadRunning == 0) {
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005773f0("killSoundThread - failed!\n");
  return (uint)(g_AudioThreadRunning == 0);
}
