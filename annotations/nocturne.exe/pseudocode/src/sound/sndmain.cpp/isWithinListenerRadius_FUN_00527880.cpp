// Name: sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880
// Address: 00527880
// Address Range: [[00526400, 00526402] [00527880, 005278d8]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880(double param_1,double param_2,double param_3,double param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880(double param_1,double param_2,double param_3,double param_4)

{
  if ((param_3 - _DAT_02dc78f0) * (param_3 - _DAT_02dc78f0) +
      (param_2 - _DAT_02dc78e8) * (param_2 - _DAT_02dc78e8) +
      (param_1 - _DAT_02dc78e0) * (param_1 - _DAT_02dc78e0) <= param_4 * param_4) {
    return 1;
  }
  return 0;
}
