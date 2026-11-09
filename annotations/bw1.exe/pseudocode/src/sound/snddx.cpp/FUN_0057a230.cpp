// Name: sound_snddx.cpp_FUN_0057a230
// Address: 0057a230
// Address Range: [[0057a230, 0057a285]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_0057a230(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_snddx_cpp_FUN_0057a230(void)

{
  uint error_code;
  char *pcVar1;
  int *apiStack_194 [101];
  
  if (_DAT_02c81da0 != (int *)0x0) {
    apiStack_194[0] = _DAT_02c81da0;
    error_code = (**(code **)(*_DAT_02c81da0 + 0x44))();
    if (error_code != 0) {
      pcVar1 = sound_snddx_cpp_FUN_00577500(error_code);
      FUN_005bfb40
                (apiStack_194,"DirectSux: Unable to %s.  (%s)","Commit hardware sfx 3d buffer settings"
                 ,pcVar1);
      sound_sndmain_cpp_FUN_005773f0(apiStack_194);
      return;
    }
  }
  return;
}
