// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerPos_FUN_005aee30
// Address: 005aee30
// Address Range: [[005aee30, 005aee63]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_005aee30 (CDirectSoundDevice *this_ptr,double x,double y,double z)

#include "nocturne.h"

void __cdecl
sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_005aee30
          (CDirectSoundDevice *this_ptr,double x,double y,double z)

{
  if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
    return;
  }
  (*g_DirectSound3DListener->vtable->SetPosition)
            (g_DirectSound3DListener,(float)x,(float)y,(float)z,0);
  return;
}
