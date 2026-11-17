// Name: sound_sndmain.cpp_processAudio_FUN_00553580
// Address: 00553580
// Address Range: [[00553580, 005535f6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_processAudio_FUN_00553580(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_processAudio_FUN_00553580(void)

{
  int iVar1;
  
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    iVar1 = wincore_winrun_cpp_waitForMutexTimeout_FUN_0058fcc0
                      (g_SoundMutex,(double)(g_FLOAT_0264900c * 3.0f));
    if (iVar1 != 0) {
      g_SoundLockCount = g_SoundLockCount + 1;
      (*g_CSoundDevicePtr->vtable->poll)(g_CSoundDevicePtr);
      sound_sndmain_cpp_pollAllStreams_FUN_00554610(0);
      g_SoundLockCount = g_SoundLockCount + -1;
      wincore_winrun_cpp_releaseMutex_FUN_0058fd00(g_SoundMutex);
      return;
    }
  }
  return;
}
