// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerOrient_FUN_0052aa90
// Address: 0052aa90
// Address Range: [[0052aa90, 0052aae1]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_0052aa90(CDirectSoundDevice *this_ptr,double x_front,double y_front,double z_front,double x_top,double y_top,double z_top,double x_right,double y_right,double z_right)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_0052aa90(CDirectSoundDevice *this_ptr,double x_front,double y_front,double z_front,double x_top,double y_top,double z_top,double x_right,double y_right,double z_right)

{
  if (_DAT_02dc9220 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02dc9220 + 0x34))
            (_DAT_02dc9220,(float)x_right,(float)y_right,(float)z_right,(float)x_top,(float)y_top,
             (float)z_top,0);
  return;
}
