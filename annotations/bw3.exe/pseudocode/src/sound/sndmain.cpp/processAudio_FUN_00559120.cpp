// Name: sound_sndmain.cpp_processAudio_FUN_00559120
// Address: 00559120
// Address Range: [[00559120, 00559196]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_processAudio_FUN_00559120(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_processAudio_FUN_00559120(void)

{
  int iVar1;
  
  if (g_CSoundDevice_PTR_02cf3280 != (CSoundDevice *)0x0) {
    iVar1 = wincore_winrun_cpp_waitForMutexTimeout_FUN_00581950
                      (g_HANDLE_02cf3418,(double)(g_FLOAT_02cf340c * 3.0f));
    if (iVar1 != 0) {
      g_INT_02cf341c = g_INT_02cf341c + 1;
      (*g_CSoundDevice_PTR_02cf3280->vtable->poll)(g_CSoundDevice_PTR_02cf3280);
      sound_sndmain_cpp_pollAllStreams_FUN_0055a1b0(0);
      g_INT_02cf341c = g_INT_02cf341c + -1;
      wincore_winrun_cpp_releaseMutex_FUN_00581990(g_HANDLE_02cf3418);
      return;
    }
  }
  return;
}
