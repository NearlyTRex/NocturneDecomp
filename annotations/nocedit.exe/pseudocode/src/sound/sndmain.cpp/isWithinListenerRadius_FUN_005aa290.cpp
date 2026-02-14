// Name: sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290
// Address: 005aa290
// Address Range: [[005aa290, 005aa2e8]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290(double pos_x,double pos_y,double pos_z,double radius)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290(double pos_x,double pos_y,double pos_z,double radius)

{
  if ((pos_z - g_Cached3DListenerPos.z) * (pos_z - g_Cached3DListenerPos.z) +
      (pos_y - g_Cached3DListenerPos.y) * (pos_y - g_Cached3DListenerPos.y) +
      (pos_x - g_Cached3DListenerPos.x) * (pos_x - g_Cached3DListenerPos.x) <= radius * radius) {
    return 1;
  }
  return 0;
}
