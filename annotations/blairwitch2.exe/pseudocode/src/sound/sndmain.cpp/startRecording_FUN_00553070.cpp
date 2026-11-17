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
                    (g_INT_0061bcd0,g_INT_0061bcd4,g_INT_0061bcd8,g_INT_02649870);
  if (iVar1 != 0) {
    iVar1 = (*g_CSoundDevice_PTR_02649868->vtable->start)(g_CSoundDevice_PTR_02649868);
    if (iVar1 != 0) {
      g_INT_0264986c = 1;
      sound_sndmain_cpp_unlockSound_FUN_00551440();
      return 1;
    }
  }
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return 0;
}
