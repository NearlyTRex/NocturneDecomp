// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005786e0
// Address: 005786e0
// Address Range: [[005786e0, 00578705]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005786e0(CDirectSoundDevice *this_ptr,double distance_in_feet)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005786e0(CDirectSoundDevice *this_ptr,double distance_in_feet)

{
  if (_DAT_02c81da0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02c81da0 + 0x2c))(_DAT_02c81da0,distance_in_feet._0_4_ * _DAT_005f4df3,0);
  return;
}
