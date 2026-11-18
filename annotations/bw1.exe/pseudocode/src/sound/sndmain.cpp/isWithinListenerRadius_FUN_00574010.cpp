// Name: sound_sndmain.cpp_isWithinListenerRadius_FUN_00574010
// Address: 00574010
// Address Range: [[00572b80, 00572b82] [00574010, 00574072]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_00574010(double pos_x,double pos_y,double pos_z,float radius)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_00574010(double pos_x,double pos_y,double pos_z,float radius)

{
  if ((pos_z - (&g_DOUBLE_02c7fc18)[g_INT_02c7fc88]) *
      (pos_z - (&g_DOUBLE_02c7fc18)[g_INT_02c7fc88]) +
      (pos_y - (&g_DOUBLE_02c7fc08)[g_INT_02c7fc88]) *
      (pos_y - (&g_DOUBLE_02c7fc08)[g_INT_02c7fc88]) +
      (pos_x - (&g_DOUBLE_02c7fbf8)[g_INT_02c7fc88]) *
      (pos_x - (&g_DOUBLE_02c7fbf8)[g_INT_02c7fc88]) <= (double)radius * (double)radius) {
    return 1;
  }
  return 0;
}
