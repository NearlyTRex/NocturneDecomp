// Name: sound_sndmain.cpp_isRecordingStarted_FUN_00552f60
// Address: 00552f60
// Address Range: [[00552f60, 00552f6e]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isRecordingStarted_FUN_00552f60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_isRecordingStarted_FUN_00552f60(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sound_sndmain_cpp_isRecordingSystemActive_FUN_00552f50();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = _DAT_0264986c;
  }
  return iVar2;
}
