// Name: sound_sndmain.cpp_isWithinListenerRadius_FUN_00557170
// Address: 00557170
// Address Range: [[00556090, 00556092] [00557170, 005571d2]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_00557170(double pos_x,double pos_y,double pos_z,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_00557170(double pos_x,double pos_y,double pos_z,float radius)

{
  if ((pos_z - *(double *)(&DAT_02cf2848 + _DAT_02cf28b8 * 8)) *
      (pos_z - *(double *)(&DAT_02cf2848 + _DAT_02cf28b8 * 8)) +
      (pos_y - *(double *)(&DAT_02cf2838 + _DAT_02cf28b8 * 8)) *
      (pos_y - *(double *)(&DAT_02cf2838 + _DAT_02cf28b8 * 8)) +
      (pos_x - *(double *)(&DAT_02cf2828 + _DAT_02cf28b8 * 8)) *
      (pos_x - *(double *)(&DAT_02cf2828 + _DAT_02cf28b8 * 8)) <= (double)radius * (double)radius) {
    return 1;
  }
  return 0;
}
