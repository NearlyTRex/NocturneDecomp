// Name: sound_sndmain.cpp_isRecordingStarted_FUN_00575990
// Address: 00575990
// Address Range: [[00575990, 0057599e]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isRecordingStarted_FUN_00575990(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isRecordingStarted_FUN_00575990(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sound_sndmain_cpp_isRecordingSystemActive_FUN_00575980();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = isRecordingStarted;
  }
  return iVar2;
}
