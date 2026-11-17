// Name: sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0055d360
// Address: 0055d360
// Address Range: [[0055d360, 0055d3b5]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0055d360(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0055d360(CDirectSoundDevice *this_ptr)

{
  uint error_code;
  char acStack_190 [400];
  
  if (g_DirectSound3DListener != (IDirectSound3DListener *)0x0) {
    error_code = (*g_DirectSound3DListener->vtable->CommitDeferredSettings)(g_DirectSound3DListener)
    ;
    if (error_code != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(error_code);
      _sprintf(acStack_190,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_190);
      return;
    }
  }
  return;
}
