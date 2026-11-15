// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerPos_FUN_00578640
// Address: 00578640
// Address Range: [[00578640, 00578673]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_00578640(CDirectSoundDevice *this_ptr,double x,double y,double z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_00578640(CDirectSoundDevice *this_ptr,double x,double y,double z)

{
  if (_DAT_02c81da0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02c81da0 + 0x38))(_DAT_02c81da0,(float)x,(float)y,(float)z,1);
  return;
}
