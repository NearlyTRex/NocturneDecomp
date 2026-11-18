// Name: sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0057a230
// Address: 0057a230
// Address Range: [[0057a230, 0057a285]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0057a230(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0057a230(CDirectSoundDevice *this_ptr)

{
  uint error_code;
  char acStack_190 [400];
  
  if (g_DirectSound3DListener != (IDirectSound3DListener *)0x0) {
    error_code = (*g_DirectSound3DListener->vtable->CommitDeferredSettings)(g_DirectSound3DListener)
    ;
    if (error_code != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(error_code);
      _sprintf(acStack_190,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_190);
      return;
    }
  }
  return;
}
