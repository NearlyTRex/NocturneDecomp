// Name: sound_snddx.cpp_checkDirectSoundError_FUN_005adf90
// Address: 005adf90
// Address Range: [[005adf90, 005adfe4]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_checkDirectSoundError_FUN_005adf90(HRESULT error_code, char * operation_description)

#include "nocturne.h"

int __cdecl
sound_snddx_cpp_checkDirectSoundError_FUN_005adf90(HRESULT error_code,char *operation_description)

{
  char *pcVar1;
  BADSPACEBASE *in_ESP;
  uint in_stack_0000000c;
  char acStack_188 [392];
  
  if (error_code == 0) {
    return 1;
  }
  pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xfffffe74,"DirectSux: Unable to %s.  (%s)",in_stack_0000000c,pcVar1);
  sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_188);
  return 0;
}
