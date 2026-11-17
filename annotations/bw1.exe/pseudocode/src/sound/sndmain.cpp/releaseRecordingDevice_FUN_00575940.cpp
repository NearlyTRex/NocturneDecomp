// Name: sound_sndmain.cpp_releaseRecordingDevice_FUN_00575940
// Address: 00575940
// Address Range: [[00575940, 00575974]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_releaseRecordingDevice_FUN_00575940(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_releaseRecordingDevice_FUN_00575940(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sound_sndmain_cpp_stopRecordingDevice_FUN_00575b70();
  iVar2 = 0;
  if (iVar1 != 0) {
    if (g_CSoundDevice_PTR_02c81038 == (CSoundDevice *)0x0) {
      iVar2 = 1;
    }
    else {
      iVar1 = (*g_CSoundDevice_PTR_02c81038->vtable->close)(g_CSoundDevice_PTR_02c81038);
      iVar2 = 0;
      if (iVar1 != 0) {
        g_CSoundDevice_PTR_02c81038 = (CSoundDevice *)0x0;
        return 1;
      }
    }
  }
  return iVar2;
}
