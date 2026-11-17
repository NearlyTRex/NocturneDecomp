// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerPos_FUN_0055b7b0
// Address: 0055b7b0
// Address Range: [[0055b7b0, 0055b7e3]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_0055b7b0(CDirectSoundDevice *this_ptr,double x,double y,double z)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_0055b7b0(CDirectSoundDevice *this_ptr,double x,double y,double z)

{
  if (g_IDirectSound3DListener_PTR_02cf49d0 == (IDirectSound3DListener *)0x0) {
    return;
  }
  (*g_IDirectSound3DListener_PTR_02cf49d0->vtable->SetPosition)
            (g_IDirectSound3DListener_PTR_02cf49d0,(float)x,(float)y,(float)z,1);
  return;
}
