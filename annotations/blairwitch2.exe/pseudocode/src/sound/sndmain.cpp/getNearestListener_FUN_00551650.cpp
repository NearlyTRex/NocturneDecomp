// Name: sound_sndmain.cpp_getNearestListener_FUN_00551650
// Address: 00551650
// Address Range: [[00551650, 005516c7]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getNearestListener_FUN_00551650(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getNearestListener_FUN_00551650(double pos_x,double pos_y,double pos_z)

{
  if ((g_INT_026484bc != 0) &&
     ((pos_z - g_DOUBLE_02648450) * (pos_z - g_DOUBLE_02648450) +
      (pos_y - g_DOUBLE_02648440) * (pos_y - g_DOUBLE_02648440) +
      (pos_x - g_DOUBLE_02648430) * (pos_x - g_DOUBLE_02648430) <=
      (pos_z - g_DOUBLE_02648448) * (pos_z - g_DOUBLE_02648448) +
      (pos_y - g_DOUBLE_02648438) * (pos_y - g_DOUBLE_02648438) +
      (pos_x - g_DOUBLE_02648428) * (pos_x - g_DOUBLE_02648428))) {
    return 1;
  }
  return 0;
}
