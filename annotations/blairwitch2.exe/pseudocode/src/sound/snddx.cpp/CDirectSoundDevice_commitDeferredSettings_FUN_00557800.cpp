// Name: sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_00557800
// Address: 00557800
// Address Range: [[00557800, 00557855]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_00557800(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_00557800(CDirectSoundDevice *this_ptr)

{
  uint error_code;
  char acStack_190 [400];
  
  if (g_IDirectSound3DListener_PTR_0264a5d0 != (IDirectSound3DListener *)0x0) {
    error_code = (*g_IDirectSound3DListener_PTR_0264a5d0->vtable->CommitDeferredSettings)
                           (g_IDirectSound3DListener_PTR_0264a5d0);
    if (error_code != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(error_code);
      _sprintf(acStack_190,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_190);
      return;
    }
  }
  return;
}
