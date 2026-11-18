// Name: sound_sndmain.cpp_isWithinListenerRadius_FUN_00557170
// Address: 00557170
// Address Range: [[00556090, 00556092] [00557170, 005571d2]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_00557170(double pos_x,double pos_y,double pos_z,float radius)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_00557170(double pos_x,double pos_y,double pos_z,float radius)

{
  if ((pos_z - (&g_DOUBLE_02cf2848)[g_INT_02cf28b8]) *
      (pos_z - (&g_DOUBLE_02cf2848)[g_INT_02cf28b8]) +
      (pos_y - (&g_DOUBLE_02cf2838)[g_INT_02cf28b8]) *
      (pos_y - (&g_DOUBLE_02cf2838)[g_INT_02cf28b8]) +
      (pos_x - (&g_DOUBLE_02cf2828)[g_INT_02cf28b8]) *
      (pos_x - (&g_DOUBLE_02cf2828)[g_INT_02cf28b8]) <= (double)radius * (double)radius) {
    return 1;
  }
  return 0;
}
