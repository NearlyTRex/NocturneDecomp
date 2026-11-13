// Name: sound_sndmain.cpp_getNearestListener_FUN_00551650
// Address: 00551650
// Address Range: [[00551650, 005516c7]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getNearestListener_FUN_00551650(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_getNearestListener_FUN_00551650(double pos_x,double pos_y,double pos_z)

{
  if ((_DAT_026484bc != 0) &&
     ((pos_z - _DAT_02648450) * (pos_z - _DAT_02648450) +
      (pos_y - _DAT_02648440) * (pos_y - _DAT_02648440) +
      (pos_x - _DAT_02648430) * (pos_x - _DAT_02648430) <=
      (pos_z - _DAT_02648448) * (pos_z - _DAT_02648448) +
      (pos_y - _DAT_02648438) * (pos_y - _DAT_02648438) +
      (pos_x - _DAT_02648428) * (pos_x - _DAT_02648428))) {
    return 1;
  }
  return 0;
}
