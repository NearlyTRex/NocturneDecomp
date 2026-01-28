// Name: sound_sndmain.cpp_startRecording_FUN_005aba90
// Address: 005aba90
// Address Range: [[005aba90, 005abb0e]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_startRecording_FUN_005aba90(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_startRecording_FUN_005aba90(void)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = sound_sndmain_cpp_isRecordingSystemActive_FUN_005ab970();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_005ab980();
  if (iVar1 != 0) {
    return 1;
  }
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  iVar1 = sound_sndmain_cpp_setRecordingFormat_FUN_005ab9a0
                    (g_RecordingBitsPerSample,g_RecordingChannelCount,g_RecordingSampleRate,
                     g_RecordingSamplesSigned);
  if (iVar1 != 0) {
    DVar2 = (*g_RecordingDeviceInterface->vtable->AddRef)((IUnknown *)g_RecordingDeviceInterface);
    if (DVar2 != 0) {
      isRecordingStarted = 1;
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return 1;
    }
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 0;
}
