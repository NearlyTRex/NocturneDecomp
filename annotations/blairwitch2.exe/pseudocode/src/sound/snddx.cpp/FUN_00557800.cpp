// Name: sound_snddx.cpp_FUN_00557800
// Address: 00557800
// Address Range: [[00557800, 00557855]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_00557800(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_snddx_cpp_FUN_00557800(void)

{
  uint error_code;
  int *apiStack_194 [101];
  
  if (_DAT_0264a5d0 != (int *)0x0) {
    apiStack_194[0] = _DAT_0264a5d0;
    error_code = (**(code **)(*_DAT_0264a5d0 + 0x44))();
    if (error_code != 0) {
      sound_snddx_cpp_FUN_00554ad0(error_code);
      _sprintf((char *)apiStack_194,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005549c0((char *)apiStack_194);
      return;
    }
  }
  return;
}
