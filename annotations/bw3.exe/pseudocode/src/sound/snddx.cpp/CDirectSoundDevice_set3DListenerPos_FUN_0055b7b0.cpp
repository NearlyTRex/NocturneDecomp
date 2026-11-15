// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerPos_FUN_0055b7b0
// Address: 0055b7b0
// Address Range: [[0055b7b0, 0055b7e3]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_0055b7b0(CDirectSoundDevice *this_ptr,double x,double y,double z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_0055b7b0(CDirectSoundDevice *this_ptr,double x,double y,double z)

{
  if (_DAT_02cf49d0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02cf49d0 + 0x38))(_DAT_02cf49d0,(float)x,(float)y,(float)z,1);
  return;
}
