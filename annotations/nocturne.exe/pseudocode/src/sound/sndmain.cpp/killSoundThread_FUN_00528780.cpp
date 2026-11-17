// Name: sound_sndmain.cpp_killSoundThread_FUN_00528780
// Address: 00528780
// Address Range: [[00528780, 005287fc]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_killSoundThread_FUN_00528780(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_killSoundThread_FUN_00528780(void)

{
  int iVar1;
  
  iVar1 = 0;
  g_INT_02dc84b4 = 1;
  do {
    if (g_INT_02dc84b0 == 0) break;
    iVar1 = iVar1 + 1;
    wincore_winrun_cpp_sleep_FUN_00559cc0(0.01);
  } while (iVar1 < 100);
  if (g_INT_02dc84b0 == 0) {
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_00529980("killSoundThread - failed!\n");
  return (uint)(g_INT_02dc84b0 == 0);
}
