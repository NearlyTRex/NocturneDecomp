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
  if (g_RecordingDeviceInterface != (CSoundDevice *)0x0) {
    iVar1 = (*g_RecordingDeviceInterface->vtable->reset)(g_RecordingDeviceInterface);
    if (iVar1 == 0) {
      sound_sndmain_cpp_unlockSound_FUN_00556fd0();
      return 0;
    }
  }
  isRecordingStarted = 0;
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return 1;
}
