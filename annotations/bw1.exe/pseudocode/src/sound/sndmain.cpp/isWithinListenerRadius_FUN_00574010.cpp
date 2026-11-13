// Name: sound_sndmain.cpp_isWithinListenerRadius_FUN_00574010
// Address: 00574010
// Address Range: [[00572b80, 00572b82] [00574010, 00574072]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_00574010(double pos_x,double pos_y,double pos_z,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_00574010(double pos_x,double pos_y,double pos_z,float radius)

{
  if ((pos_z - *(double *)(&DAT_02c7fc18 + _DAT_02c7fc88 * 8)) *
      (pos_z - *(double *)(&DAT_02c7fc18 + _DAT_02c7fc88 * 8)) +
      (pos_y - *(double *)(&DAT_02c7fc08 + _DAT_02c7fc88 * 8)) *
      (pos_y - *(double *)(&DAT_02c7fc08 + _DAT_02c7fc88 * 8)) +
      (pos_x - *(double *)(&DAT_02c7fbf8 + _DAT_02c7fc88 * 8)) *
      (pos_x - *(double *)(&DAT_02c7fbf8 + _DAT_02c7fc88 * 8)) <= (double)radius * (double)radius) {
    return 1;
  }
  return 0;
}
