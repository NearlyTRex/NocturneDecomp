// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_005786b0
// Address: 005786b0
// Address Range: [[005786b0, 005786d1]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_005786b0(CDirectSoundDevice *this_ptr,float x_velocity,float y_velocity,float z_velocity)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_005786b0(CDirectSoundDevice *this_ptr,float x_velocity,float y_velocity,float z_velocity)

{
  if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
    return;
  }
  (*g_DirectSound3DListener->vtable->SetVelocity)
            (g_DirectSound3DListener,x_velocity,y_velocity,z_velocity,1);
  return;
}
