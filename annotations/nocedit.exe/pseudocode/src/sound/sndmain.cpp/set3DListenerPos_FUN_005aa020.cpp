// Name: sound_sndmain.cpp_set3DListenerPos_FUN_005aa020
// Address: 005aa020
// Address Range: [[005aa020, 005aa093]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_set3DListenerPos_FUN_005aa020(double pos_x, double pos_y, double pos_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_005aa020(double pos_x,double pos_y,double pos_z)

{
  g_Cached3DListenerPos.x = pos_x;
  g_Cached3DListenerPos.y = pos_y;
  g_Cached3DListenerPos.z = pos_z;
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevicePtr->vtable->set3DListenerPos)(g_CSoundDevicePtr,pos_x,pos_y,pos_z);
  return;
}
