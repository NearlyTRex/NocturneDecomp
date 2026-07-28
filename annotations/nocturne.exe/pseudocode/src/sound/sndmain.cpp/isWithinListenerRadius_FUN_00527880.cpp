// Name: sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880
// Address: 00527880
// Address Range: [[00526400, 00526402] [00527880, 005278d8]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880(double pos_x,double pos_y,double pos_z,double radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880(double pos_x,double pos_y,double pos_z,double radius)

{
  if ((pos_z - _DAT_02dc78f0) * (pos_z - _DAT_02dc78f0) +
      (pos_y - _DAT_02dc78e8) * (pos_y - _DAT_02dc78e8) +
      (pos_x - _DAT_02dc78e0) * (pos_x - _DAT_02dc78e0) <= radius * radius) {
    return 1;
  }
  return 0;
}
