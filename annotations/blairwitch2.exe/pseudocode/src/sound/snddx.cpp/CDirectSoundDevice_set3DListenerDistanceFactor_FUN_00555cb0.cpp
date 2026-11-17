// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_00555cb0
// Address: 00555cb0
// Address Range: [[00555cb0, 00555cd5]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_00555cb0(CDirectSoundDevice *this_ptr,float distance_in_feet)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_00555cb0(CDirectSoundDevice *this_ptr,float distance_in_feet)

{
  if (g_IDirectSound3DListener_PTR_0264a5d0 == (IDirectSound3DListener *)0x0) {
    return;
  }
  (*g_IDirectSound3DListener_PTR_0264a5d0->vtable->SetDistanceFactor)
            (g_IDirectSound3DListener_PTR_0264a5d0,distance_in_feet * 0.3048f,0);
  return;
}
