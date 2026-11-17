// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerOrient_FUN_00555c50
// Address: 00555c50
// Address Range: [[00555c50, 00555c7d]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_00555c50(CDirectSoundDevice *this_ptr,float x_front,float y_front,float z_front,float x_top,float y_top,float z_top,float x_right,float y_right,float z_right)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_00555c50(CDirectSoundDevice *this_ptr,float x_front,float y_front,float z_front,float x_top,float y_top,float z_top,float x_right,float y_right,float z_right)

{
  if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
    return;
  }
  (*g_DirectSound3DListener->vtable->SetOrientation)
            (g_DirectSound3DListener,x_right,y_right,z_right,x_top,y_top,z_top,1);
  return;
}
