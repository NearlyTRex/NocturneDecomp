// Name: sound_sndmain.cpp_isWithinListenerRadius_FUN_005515e0
// Address: 005515e0
// Address Range: [[00550510, 00550512] [005515e0, 00551642]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_005515e0(double pos_x,double pos_y,double pos_z,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_005515e0(double pos_x,double pos_y,double pos_z,float radius)

{
  if ((pos_z - *(double *)(&DAT_02648448 + _DAT_026484b8 * 8)) *
      (pos_z - *(double *)(&DAT_02648448 + _DAT_026484b8 * 8)) +
      (pos_y - *(double *)(&DAT_02648438 + _DAT_026484b8 * 8)) *
      (pos_y - *(double *)(&DAT_02648438 + _DAT_026484b8 * 8)) +
      (pos_x - *(double *)(&DAT_02648428 + _DAT_026484b8 * 8)) *
      (pos_x - *(double *)(&DAT_02648428 + _DAT_026484b8 * 8)) <= (double)radius * (double)radius) {
    return 1;
  }
  return 0;
}
