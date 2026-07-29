// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerPos_FUN_0052aa50
// Address: 0052aa50
// Address Range: [[0052aa50, 0052aa83]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_0052aa50(CDirectSoundDevice *this_ptr,double x,double y,double z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_0052aa50(CDirectSoundDevice *this_ptr,double x,double y,double z)

{
  if (_DAT_02dc9220 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02dc9220 + 0x38))(_DAT_02dc9220,(float)x,(float)y,(float)z,0);
  return;
}
