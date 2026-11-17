// Name: sound_sndmain.cpp_releaseRecordingDevice_FUN_00552f10
// Address: 00552f10
// Address Range: [[00552f10, 00552f44]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_releaseRecordingDevice_FUN_00552f10(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_releaseRecordingDevice_FUN_00552f10(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sound_sndmain_cpp_stopRecordingDevice_FUN_00553140();
  iVar2 = 0;
  if (iVar1 != 0) {
    if (g_CSoundDevice_PTR_02649868 == (CSoundDevice *)0x0) {
      iVar2 = 1;
    }
    else {
      iVar1 = (*g_CSoundDevice_PTR_02649868->vtable->close)(g_CSoundDevice_PTR_02649868);
      iVar2 = 0;
      if (iVar1 != 0) {
        g_CSoundDevice_PTR_02649868 = (CSoundDevice *)0x0;
        return 1;
      }
    }
  }
  return iVar2;
}
