// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerOrient_FUN_005aee70
// Address: 005aee70
// Address Range: [[005aee70, 005aeec1]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_005aee70(CDirectSoundDevice *this_ptr,double x_front,double y_front,double z_front,double x_top,double y_top,double z_top)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_005aee70(CDirectSoundDevice *this_ptr,double x_front,double y_front,double z_front,double x_top,double y_top,double z_top)

{
  double in_stack_00000038;
  double in_stack_00000040;
  double in_stack_00000048;
  
  if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
    return;
  }
  (*g_DirectSound3DListener->vtable->SetOrientation)
            (g_DirectSound3DListener,(float)in_stack_00000038,(float)in_stack_00000040,
             (float)in_stack_00000048,(float)x_top,(float)y_top,(float)z_top,0);
  return;
}
