// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_005aeed0
// Address: 005aeed0
// Address Range: [[005aeed0, 005aef03]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_005aeed0 (CDirectSoundDevice *this_ptr,double x_velocity,double y_velocity,double z_velocity)

#include "nocturne.h"

void __cdecl
sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_005aeed0
          (CDirectSoundDevice *this_ptr,double x_velocity,double y_velocity,double z_velocity)

{
  if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
    return;
  }
  (*g_DirectSound3DListener->vtable->SetVelocity)
            (g_DirectSound3DListener,(float)x_velocity,(float)y_velocity,(float)z_velocity,0);
  return;
}
