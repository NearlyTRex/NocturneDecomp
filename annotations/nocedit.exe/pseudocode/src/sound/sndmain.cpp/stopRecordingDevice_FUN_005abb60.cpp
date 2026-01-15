// Name: sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60
// Address: 005abb60
// Address Range: [[005abb60, 005abb98]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_005abb60(void)

{
  DWORD DVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  if (g_RecordingDeviceInterface != (IDirectSoundCapture *)0x0) {
    DVar1 = (*g_RecordingDeviceInterface->vtable->Release)((IUnknown *)g_RecordingDeviceInterface);
    if (DVar1 == 0) {
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return 0;
    }
  }
  isRecordingStarted = 0;
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}
