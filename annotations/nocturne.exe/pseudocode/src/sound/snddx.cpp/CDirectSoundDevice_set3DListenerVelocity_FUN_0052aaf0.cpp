// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_0052aaf0
// Address: 0052aaf0
// Address Range: [[0052aaf0, 0052ab23]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_0052aaf0(CDirectSoundDevice *this_ptr,double x_velocity,double y_velocity,double z_velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_0052aaf0(CDirectSoundDevice *this_ptr,double x_velocity,double y_velocity,double z_velocity)

{
  if (_DAT_02dc9220 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02dc9220 + 0x40))
            (_DAT_02dc9220,(float)x_velocity,(float)y_velocity,(float)z_velocity,0);
  return;
}
