// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005786e0
// Address: 005786e0
// Address Range: [[005786e0, 00578705]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005786e0(CDirectSoundDevice *this_ptr,float distance_in_feet)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005786e0(CDirectSoundDevice *this_ptr,float distance_in_feet)

{
  if (g_IDirectSound3DListener_PTR_02c81da0 == (IDirectSound3DListener *)0x0) {
    return;
  }
  (*g_IDirectSound3DListener_PTR_02c81da0->vtable->SetDistanceFactor)
            (g_IDirectSound3DListener_PTR_02c81da0,distance_in_feet * 0.3048f,0);
  return;
}
