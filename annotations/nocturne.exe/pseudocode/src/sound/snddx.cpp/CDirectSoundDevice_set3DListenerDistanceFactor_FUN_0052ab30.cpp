// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_0052ab30
// Address: 0052ab30
// Address Range: [[0052ab30, 0052ab55]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_0052ab30(CDirectSoundDevice *this_ptr,double distance_in_feet)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_0052ab30(CDirectSoundDevice *this_ptr,double distance_in_feet)

{
  if (_DAT_02dc9220 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02dc9220 + 0x2c))
            (_DAT_02dc9220,(float)((float10)distance_in_feet * (float10)0.30480000000000002),0);
  return;
}
