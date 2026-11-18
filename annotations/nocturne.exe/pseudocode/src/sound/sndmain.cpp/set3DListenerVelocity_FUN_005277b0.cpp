// Name: sound_sndmain.cpp_set3DListenerVelocity_FUN_005277b0
// Address: 005277b0
// Address Range: [[005277b0, 00527823]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_005277b0(double x_velocity,double y_velocity,double z_velocity)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_005277b0(double x_velocity,double y_velocity,double z_velocity)

{
  g_DOUBLE_02dc78f8 = x_velocity;
  g_DOUBLE_02dc7900 = y_velocity;
  g_DOUBLE_02dc7908 = z_velocity;
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevicePtr->vtable->set3DListenerVelocity)
            (g_CSoundDevicePtr,x_velocity,y_velocity,z_velocity);
  return;
}
