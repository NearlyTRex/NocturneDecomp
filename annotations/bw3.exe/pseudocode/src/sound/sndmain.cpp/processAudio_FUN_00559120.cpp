// Name: sound_sndmain.cpp_processAudio_FUN_00559120
// Address: 00559120
// Address Range: [[00559120, 00559196]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_processAudio_FUN_00559120(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_processAudio_FUN_00559120(void)

{
  int iVar1;
  
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    iVar1 = wincore_winrun_cpp_waitForMutexTimeout_FUN_00581950
                      (g_SoundMutex,(double)(g_FLOAT_02cf340c * 3.0f));
    if (iVar1 != 0) {
      g_SoundLockCount = g_SoundLockCount + 1;
      (*g_CSoundDevicePtr->vtable->poll)(g_CSoundDevicePtr);
      sound_sndmain_cpp_pollAllStreams_FUN_0055a1b0(0);
      g_SoundLockCount = g_SoundLockCount + -1;
      wincore_winrun_cpp_releaseMutex_FUN_00581990(g_SoundMutex);
      return;
    }
  }
  return;
}
