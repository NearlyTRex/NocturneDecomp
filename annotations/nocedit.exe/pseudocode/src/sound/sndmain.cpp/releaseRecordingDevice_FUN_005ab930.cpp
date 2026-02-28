// Name: sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930
// Address: 005ab930
// Address Range: [[005ab930, 005ab964]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_releaseRecordingDevice_FUN_005ab930(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_releaseRecordingDevice_FUN_005ab930(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sound_sndmain_cpp_stopRecordingDevice_FUN_005abb60();
  iVar2 = 0;
  if (iVar1 != 0) {
    if (g_RecordingDeviceInterface == (CSoundDevice *)0x0) {
      iVar2 = 1;
    }
    else {
      iVar1 = (*g_RecordingDeviceInterface->vtable->close)(g_RecordingDeviceInterface);
      iVar2 = 0;
      if (iVar1 != 0) {
        g_RecordingDeviceInterface = (CSoundDevice *)0x0;
        return 1;
      }
    }
  }
  return iVar2;
}
