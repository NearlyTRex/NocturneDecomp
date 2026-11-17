// Name: sound_sndmain.cpp_startRecording_FUN_00553070
// Address: 00553070
// Address Range: [[00553070, 005530ee]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_startRecording_FUN_00553070(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_startRecording_FUN_00553070(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingSystemActive_FUN_00552f50();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_00552f60();
  if (iVar1 != 0) {
    return 1;
  }
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  iVar1 = sound_sndmain_cpp_setRecordingFormat_FUN_00552f80
                    (g_RecordingBitsPerSample,g_RecordingChannelCount,g_RecordingSampleRate,
                     g_RecordingSamplesSigned);
  if (iVar1 != 0) {
    iVar1 = (*g_RecordingDeviceInterface->vtable->start)(g_RecordingDeviceInterface);
    if (iVar1 != 0) {
      isRecordingStarted = 1;
      sound_sndmain_cpp_unlockSound_FUN_00551440();
      return 1;
    }
  }
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return 0;
}
