// Name: sound_snddx.cpp_checkDirectSoundError_FUN_005adf90
// Address: 005adf90
// Address Range: [[005adf90, 005adfe4]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_checkDirectSoundError_FUN_005adf90(HRESULT error_code,char *operation_description)

#include "nocturne.h"

int __cdecl
sound_snddx_cpp_checkDirectSoundError_FUN_005adf90(HRESULT error_code,char *operation_description)

{
  char *pcVar1;
  char local_190 [400];
  
  if (error_code == 0) {
    return 1;
  }
  pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (local_190,"DirectSux: Unable to %s.  (%s)",operation_description,pcVar1);
  sound_sndmain_cpp_logSoundError_FUN_005adba0(local_190);
  return 0;
}
