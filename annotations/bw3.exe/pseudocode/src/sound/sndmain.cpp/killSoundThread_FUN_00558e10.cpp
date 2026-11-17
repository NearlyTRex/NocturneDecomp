// Name: sound_sndmain.cpp_killSoundThread_FUN_00558e10
// Address: 00558e10
// Address Range: [[00558e10, 00558e8c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_killSoundThread_FUN_00558e10(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_killSoundThread_FUN_00558e10(void)

{
  int iVar1;
  
  iVar1 = 0;
  g_INT_02cf3414 = 1;
  do {
    if (g_INT_02cf3410 == 0) break;
    iVar1 = iVar1 + 1;
    wincore_winrun_cpp_sleep_FUN_00581a40(0.01);
  } while (iVar1 < 100);
  if (g_INT_02cf3410 == 0) {
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_0055a560("killSoundThread - failed!\n");
  return (uint)(g_INT_02cf3410 == 0);
}
