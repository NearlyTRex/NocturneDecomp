// Name: sound_sndmain.cpp_startRecording_FUN_00558c10
// Address: 00558c10
// Address Range: [[00558c10, 00558c8e]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_startRecording_FUN_00558c10(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_startRecording_FUN_00558c10(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingSystemActive_FUN_00558af0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_00558b00();
  if (iVar1 != 0) {
    return 1;
  }
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar1 = sound_sndmain_cpp_setRecordingFormat_FUN_00558b20
                    (g_RecordingBitsPerSample,g_RecordingChannelCount,g_RecordingSampleRate,
                     g_RecordingSamplesSigned);
  if (iVar1 != 0) {
    iVar1 = (*g_RecordingDeviceInterface->vtable->start)(g_RecordingDeviceInterface);
    if (iVar1 != 0) {
      isRecordingStarted = 1;
      sound_sndmain_cpp_unlockSound_FUN_00556fd0();
      return 1;
    }
  }
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return 0;
}
