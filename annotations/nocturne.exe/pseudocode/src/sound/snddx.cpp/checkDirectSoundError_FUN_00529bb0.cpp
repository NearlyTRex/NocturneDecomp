// Name: sound_snddx.cpp_checkDirectSoundError_FUN_00529bb0
// Address: 00529bb0
// Address Range: [[00529bb0, 00529c04]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_checkDirectSoundError_FUN_00529bb0(HRESULT error_code,char *operation_description)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_checkDirectSoundError_FUN_00529bb0(HRESULT error_code,char *operation_description)

{
  char *pcVar1;
  char acStack_190 [400];
  
  if (error_code == 0) {
    return 1;
  }
  pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
  _sprintf(acStack_190,"DirectSux: Unable to %s.  (%s)",operation_description,pcVar1);
  sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_190);
  return 0;
}
