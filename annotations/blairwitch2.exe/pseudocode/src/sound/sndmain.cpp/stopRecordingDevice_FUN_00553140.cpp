// Name: sound_sndmain.cpp_stopRecordingDevice_FUN_00553140
// Address: 00553140
// Address Range: [[00553140, 00553178]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_00553140(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_00553140(void)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  if (g_CSoundDevice_PTR_02649868 != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevice_PTR_02649868->vtable->reset)(g_CSoundDevice_PTR_02649868);
    if (iVar1 == 0) {
      sound_sndmain_cpp_unlockSound_FUN_00551440();
      return 0;
    }
  }
  g_INT_0264986c = 0;
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return 1;
}
