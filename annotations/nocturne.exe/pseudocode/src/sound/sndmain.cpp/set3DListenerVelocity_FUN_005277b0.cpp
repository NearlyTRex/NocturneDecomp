// Name: sound_sndmain.cpp_set3DListenerVelocity_FUN_005277b0
// Address: 005277b0
// Address Range: [[005277b0, 00527823]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_005277b0(double x_velocity,double y_velocity,double z_velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_005277b0(double x_velocity,double y_velocity,double z_velocity)

{
  _DAT_02dc78f8 = x_velocity;
  _DAT_02dc7900 = y_velocity;
  _DAT_02dc7908 = z_velocity;
  if (_DAT_02dc8318 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02dc8318 + 0x20))(_DAT_02dc8318,x_velocity,y_velocity,z_velocity);
  return;
}
