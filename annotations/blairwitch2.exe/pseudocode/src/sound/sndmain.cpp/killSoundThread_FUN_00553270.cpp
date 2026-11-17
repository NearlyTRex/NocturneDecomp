// Name: sound_sndmain.cpp_killSoundThread_FUN_00553270
// Address: 00553270
// Address Range: [[00553270, 005532ec]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_killSoundThread_FUN_00553270(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_killSoundThread_FUN_00553270(void)

{
  int iVar1;
  
  iVar1 = 0;
  g_INT_02649014 = 1;
  do {
    if (g_INT_02649010 == 0) break;
    iVar1 = iVar1 + 1;
    wincore_winrun_cpp_sleep_FUN_0058fd90(0.01);
  } while (iVar1 < 100);
  if (g_INT_02649010 == 0) {
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005549c0("killSoundThread - failed!\n");
  return (uint)(g_INT_02649010 == 0);
}
