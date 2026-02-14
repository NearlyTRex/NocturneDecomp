// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005aef10
// Address: 005aef10
// Address Range: [[005aef10, 005aef35]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005aef10(CDirectSoundDevice *this_ptr,double distance_in_feet)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005aef10(CDirectSoundDevice *this_ptr,double distance_in_feet)

{
  if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
    return;
  }
  (*g_DirectSound3DListener->vtable->SetDistanceFactor)
            (g_DirectSound3DListener,
             (float)((float10)distance_in_feet * (float10)0.30480000000000002),0);
  return;
}
