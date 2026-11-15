// Name: sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0055d360
// Address: 0055d360
// Address Range: [[0055d360, 0055d3b5]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0055d360(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0055d360(CDirectSoundDevice *this_ptr)

{
  uint error_code;
  int *apiStack_194 [101];
  
  if (_DAT_02cf49d0 != (int *)0x0) {
    apiStack_194[0] = _DAT_02cf49d0;
    error_code = (**(code **)(*_DAT_02cf49d0 + 0x44))();
    if (error_code != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(error_code);
      _sprintf((char *)apiStack_194,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_0055a560((char *)apiStack_194);
      return;
    }
  }
  return;
}
