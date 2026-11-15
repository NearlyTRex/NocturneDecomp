// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerOrient_FUN_0055b7f0
// Address: 0055b7f0
// Address Range: [[0055b7f0, 0055b81d]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_0055b7f0(CDirectSoundDevice *this_ptr,float x_front,float y_front,float z_front,float x_top,float y_top,float z_top,float x_right,float y_right,float z_right)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_0055b7f0(CDirectSoundDevice *this_ptr,float x_front,float y_front,float z_front,float x_top,float y_top,float z_top,float x_right,float y_right,float z_right)

{
  if (_DAT_02cf49d0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02cf49d0 + 0x34))(_DAT_02cf49d0,x_right,y_right,z_right,x_top,y_top,z_top,1);
  return;
}
