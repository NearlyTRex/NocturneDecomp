// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerPos_FUN_00555c10
// Address: 00555c10
// Address Range: [[00555c10, 00555c43]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_00555c10(CDirectSoundDevice *this_ptr,double x,double y,double z)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_00555c10(CDirectSoundDevice *this_ptr,double x,double y,double z)

{
  if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
    return;
  }
  (*g_DirectSound3DListener->vtable->SetPosition)
            (g_DirectSound3DListener,(float)x,(float)y,(float)z,1);
  return;
}
