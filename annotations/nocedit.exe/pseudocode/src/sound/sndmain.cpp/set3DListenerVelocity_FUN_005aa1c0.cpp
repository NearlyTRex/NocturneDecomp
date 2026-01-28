// Name: sound_sndmain.cpp_set3DListenerVelocity_FUN_005aa1c0
// Address: 005aa1c0
// Address Range: [[005aa1c0, 005aa233]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_005aa1c0 (double x_velocity,double y_velocity,double z_velocity)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_set3DListenerVelocity_FUN_005aa1c0
          (double x_velocity,double y_velocity,double z_velocity)

{
  g_Cached3DListenerVelocity.x = x_velocity;
  g_Cached3DListenerVelocity.y = y_velocity;
  g_Cached3DListenerVelocity.z = z_velocity;
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevicePtr->vtable->set3DListenerVelocity)
            (g_CSoundDevicePtr,x_velocity,y_velocity,z_velocity);
  return;
}
