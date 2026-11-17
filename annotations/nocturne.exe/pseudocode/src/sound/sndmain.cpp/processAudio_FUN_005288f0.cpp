// Name: sound_sndmain.cpp_processAudio_FUN_005288f0
// Address: 005288f0
// Address Range: [[005288f0, 00528966]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_processAudio_FUN_005288f0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_processAudio_FUN_005288f0(void)

{
  int iVar1;
  short *unaff_EBX;
  int unaff_ESI;
  
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    iVar1 = wincore_winrun_cpp_waitForMutexTimeout_FUN_00559bf0
                      (g_SoundMutex,g_AudioLatencySeconds * 3);
    if (iVar1 != 0) {
      g_SoundLockCount = g_SoundLockCount + 1;
      (*g_CSoundDevicePtr->vtable->poll)(g_CSoundDevicePtr,unaff_EBX,unaff_ESI);
      sound_sndmain_cpp_pollAllStreams_FUN_005298f0(0);
      g_SoundLockCount = g_SoundLockCount + -1;
      wincore_winrun_cpp_releaseMutex_FUN_00559c30(g_SoundMutex);
      return;
    }
  }
  return;
}
