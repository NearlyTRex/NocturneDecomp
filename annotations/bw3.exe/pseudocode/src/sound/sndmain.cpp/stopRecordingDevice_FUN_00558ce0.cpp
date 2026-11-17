// Name: sound_sndmain.cpp_stopRecordingDevice_FUN_00558ce0
// Address: 00558ce0
// Address Range: [[00558ce0, 00558d18]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_00558ce0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_00558ce0(void)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  if (g_CSoundDevice_PTR_02cf3c68 != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevice_PTR_02cf3c68->vtable->reset)(g_CSoundDevice_PTR_02cf3c68);
    if (iVar1 == 0) {
      sound_sndmain_cpp_unlockSound_FUN_00556fd0();
      return 0;
    }
  }
  g_INT_02cf3c6c = 0;
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return 1;
}
