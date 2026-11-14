// Name: sound_sndmain.cpp_startRecording_FUN_00553070
// Address: 00553070
// Address Range: [[00553070, 005530ee]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_startRecording_FUN_00553070(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    (_DAT_0061bcd0,_DAT_0061bcd4,_DAT_0061bcd8,_DAT_02649870);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*_DAT_02649868 + 4))();
    if (iVar1 != 0) {
      _DAT_0264986c = 1;
      sound_sndmain_cpp_unlockSound_FUN_00551440();
      return 1;
    }
  }
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return 0;
}
