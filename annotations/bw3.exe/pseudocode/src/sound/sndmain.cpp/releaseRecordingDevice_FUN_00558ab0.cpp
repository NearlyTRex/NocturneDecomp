// Name: sound_sndmain.cpp_releaseRecordingDevice_FUN_00558ab0
// Address: 00558ab0
// Address Range: [[00558ab0, 00558ae4]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_releaseRecordingDevice_FUN_00558ab0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_releaseRecordingDevice_FUN_00558ab0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sound_sndmain_cpp_stopRecordingDevice_FUN_00558ce0();
  iVar2 = 0;
  if (iVar1 != 0) {
    if (g_CSoundDevice_PTR_02cf3c68 == (CSoundDevice *)0x0) {
      iVar2 = 1;
    }
    else {
      iVar1 = (*g_CSoundDevice_PTR_02cf3c68->vtable->close)(g_CSoundDevice_PTR_02cf3c68);
      iVar2 = 0;
      if (iVar1 != 0) {
        g_CSoundDevice_PTR_02cf3c68 = (CSoundDevice *)0x0;
        return 1;
      }
    }
  }
  return iVar2;
}
