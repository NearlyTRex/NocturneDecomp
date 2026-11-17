// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_00555cb0
// Address: 00555cb0
// Address Range: [[00555cb0, 00555cd5]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_00555cb0(CDirectSoundDevice *this_ptr,float distance_in_feet)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_00555cb0(CDirectSoundDevice *this_ptr,float distance_in_feet)

{
  if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
    return;
  }
  (*g_DirectSound3DListener->vtable->SetDistanceFactor)
            (g_DirectSound3DListener,distance_in_feet * 0.3048f,0);
  return;
}
