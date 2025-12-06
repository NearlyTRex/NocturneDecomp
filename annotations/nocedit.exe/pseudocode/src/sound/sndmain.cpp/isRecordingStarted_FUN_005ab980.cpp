// Name: sound_sndmain.cpp_isRecordingStarted_FUN_005ab980
// Address: 005ab980
// Address Range: [[005ab980, 005ab98e]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_isRecordingStarted_FUN_005ab980(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isRecordingStarted_FUN_005ab980(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingSystemActive_FUN_005ab970();
  if (iVar1 != 0) {
    iVar1 = isRecordingStarted;
  }
  return iVar1;
}
