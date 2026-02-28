// Name: sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60
// Address: 005abb60
// Address Range: [[005abb60, 005abb98]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_005abb60(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_005abb60(void)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  if (g_RecordingDeviceInterface != (CSoundDevice *)0x0) {
    iVar1 = (*g_RecordingDeviceInterface->vtable->reset)(g_RecordingDeviceInterface);
    if (iVar1 == 0) {
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return 0;
    }
  }
  isRecordingStarted = 0;
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}
