// Name: sound_snddx.cpp_FUN_0055d360
// Address: 0055d360
// Address Range: [[0055d360, 0055d3b5]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_0055d360(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_snddx_cpp_FUN_0055d360(void)

{
  uint error_code;
  char *pcVar1;
  int *apiStack_194 [101];
  
  if (_DAT_02cf49d0 != (int *)0x0) {
    apiStack_194[0] = _DAT_02cf49d0;
    error_code = (**(code **)(*_DAT_02cf49d0 + 0x44))();
    if (error_code != 0) {
      pcVar1 = sound_snddx_cpp_FUN_0055a670(error_code);
      FUN_005a28c0
                (apiStack_194,"DirectSux: Unable to %s.  (%s)","Commit hardware sfx 3d buffer settings"
                 ,pcVar1);
      sound_sndmain_cpp_FUN_0055a560(apiStack_194);
      return;
    }
  }
  return;
}
