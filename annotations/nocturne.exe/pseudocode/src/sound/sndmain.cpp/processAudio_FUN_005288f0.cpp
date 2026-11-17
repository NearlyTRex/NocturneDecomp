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
  
  if (g_CSoundDevice_PTR_02dc8318 != (CSoundDevice *)0x0) {
    iVar1 = wincore_winrun_cpp_waitForMutexTimeout_FUN_00559bf0
                      (g_HANDLE_02dc84b8,g_DOUBLE_02dc84a8 * 3);
    if (iVar1 != 0) {
      g_INT_02dc84bc = g_INT_02dc84bc + 1;
      (*g_CSoundDevice_PTR_02dc8318->vtable->poll)(g_CSoundDevice_PTR_02dc8318,unaff_EBX,unaff_ESI);
      sound_sndmain_cpp_pollAllStreams_FUN_005298f0(0);
      g_INT_02dc84bc = g_INT_02dc84bc + -1;
      wincore_winrun_cpp_releaseMutex_FUN_00559c30(g_HANDLE_02dc84b8);
      return;
    }
  }
  return;
}
