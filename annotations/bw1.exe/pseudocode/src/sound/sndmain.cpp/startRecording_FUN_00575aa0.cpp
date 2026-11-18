// Name: sound_sndmain.cpp_startRecording_FUN_00575aa0
// Address: 00575aa0
// Address Range: [[00575aa0, 00575b1e]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_startRecording_FUN_00575aa0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_startRecording_FUN_00575aa0(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingSystemActive_FUN_00575980();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_00575990();
  if (iVar1 != 0) {
    return 1;
  }
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  iVar1 = sound_sndmain_cpp_setRecordingFormat_FUN_005759b0
                    (g_RecordingBitsPerSample,g_RecordingChannelCount,g_RecordingSampleRate,
                     g_RecordingSamplesSigned);
  if (iVar1 != 0) {
    iVar1 = (*g_RecordingDeviceInterface->vtable->start)(g_RecordingDeviceInterface);
    if (iVar1 != 0) {
      isRecordingStarted = 1;
      sound_sndmain_cpp_unlockSound_FUN_00573e70();
      return 1;
    }
  }
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return 0;
}
