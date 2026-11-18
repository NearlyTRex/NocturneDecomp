// Name: sound_sndmain.cpp_isWithinListenerRadius_FUN_005515e0
// Address: 005515e0
// Address Range: [[00550510, 00550512] [005515e0, 00551642]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_005515e0(double pos_x,double pos_y,double pos_z,float radius)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_005515e0(double pos_x,double pos_y,double pos_z,float radius)

{
  if ((pos_z - (&g_DOUBLE_02648448)[g_INT_026484b8]) *
      (pos_z - (&g_DOUBLE_02648448)[g_INT_026484b8]) +
      (pos_y - (&g_DOUBLE_02648438)[g_INT_026484b8]) *
      (pos_y - (&g_DOUBLE_02648438)[g_INT_026484b8]) +
      (pos_x - (&g_DOUBLE_02648428)[g_INT_026484b8]) *
      (pos_x - (&g_DOUBLE_02648428)[g_INT_026484b8]) <= (double)radius * (double)radius) {
    return 1;
  }
  return 0;
}
