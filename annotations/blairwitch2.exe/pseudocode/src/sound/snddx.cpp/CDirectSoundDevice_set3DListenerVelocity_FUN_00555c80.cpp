// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_00555c80
// Address: 00555c80
// Address Range: [[00555c80, 00555ca1]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_00555c80(CDirectSoundDevice *this_ptr,float x_velocity,float y_velocity,float z_velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_00555c80(CDirectSoundDevice *this_ptr,float x_velocity,float y_velocity,float z_velocity)

{
  if (_DAT_0264a5d0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_0264a5d0 + 0x40))(_DAT_0264a5d0,x_velocity,y_velocity,z_velocity,1);
  return;
}
