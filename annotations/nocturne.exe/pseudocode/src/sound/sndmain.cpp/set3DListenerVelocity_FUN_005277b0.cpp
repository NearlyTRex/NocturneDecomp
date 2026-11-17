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
  if (g_CSoundDevice_PTR_02dc8318 == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevice_PTR_02dc8318->vtable->set3DListenerVelocity)
            (g_CSoundDevice_PTR_02dc8318,x_velocity,y_velocity,z_velocity);
  return;
}
