// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_0055b820
// Address: 0055b820
// Address Range: [[0055b820, 0055b841]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_0055b820(CDirectSoundDevice *this_ptr,float x_velocity,float y_velocity,float z_velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_0055b820(CDirectSoundDevice *this_ptr,float x_velocity,float y_velocity,float z_velocity)

{
  if (_DAT_02cf49d0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02cf49d0 + 0x40))(_DAT_02cf49d0,x_velocity,y_velocity,z_velocity,1);
  return;
}
