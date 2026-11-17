// Name: sound_sndmain.cpp_processAudio_FUN_00553580
// Address: 00553580
// Address Range: [[00553580, 005535f6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_processAudio_FUN_00553580(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_processAudio_FUN_00553580(void)

{
  int iVar1;
  
  if (g_CSoundDevice_PTR_02648e80 != (CSoundDevice *)0x0) {
    iVar1 = wincore_winrun_cpp_waitForMutexTimeout_FUN_0058fcc0
                      (g_HANDLE_02649018,(double)(g_FLOAT_0264900c * 3.0f));
    if (iVar1 != 0) {
      g_INT_0264901c = g_INT_0264901c + 1;
      (*g_CSoundDevice_PTR_02648e80->vtable->poll)(g_CSoundDevice_PTR_02648e80);
      sound_sndmain_cpp_pollAllStreams_FUN_00554610(0);
      g_INT_0264901c = g_INT_0264901c + -1;
      wincore_winrun_cpp_releaseMutex_FUN_0058fd00(g_HANDLE_02649018);
      return;
    }
  }
  return;
}
