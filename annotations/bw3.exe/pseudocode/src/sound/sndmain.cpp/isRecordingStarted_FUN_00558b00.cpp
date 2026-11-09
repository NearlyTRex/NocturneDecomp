// Name: sound_sndmain.cpp_isRecordingStarted_FUN_00558b00
// Address: 00558b00
// Address Range: [[00558b00, 00558b0e]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isRecordingStarted_FUN_00558b00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_isRecordingStarted_FUN_00558b00(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sound_sndmain_cpp_isRecordingSystemActive_FUN_00558af0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = _DAT_02cf3c6c;
  }
  return iVar2;
}
