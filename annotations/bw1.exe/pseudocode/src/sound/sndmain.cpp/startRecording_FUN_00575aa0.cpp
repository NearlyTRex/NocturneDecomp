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
                    (g_INT_00623320,g_INT_00623324,g_INT_00623328,g_INT_02c81040);
  if (iVar1 != 0) {
    iVar1 = (*g_CSoundDevice_PTR_02c81038->vtable->start)(g_CSoundDevice_PTR_02c81038);
    if (iVar1 != 0) {
      g_INT_02c8103c = 1;
      sound_sndmain_cpp_unlockSound_FUN_00573e70();
      return 1;
    }
  }
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return 0;
}
