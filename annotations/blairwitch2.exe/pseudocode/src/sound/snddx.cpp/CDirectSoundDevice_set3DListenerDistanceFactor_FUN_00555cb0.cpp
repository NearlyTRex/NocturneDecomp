// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_00555cb0
// Address: 00555cb0
// Address Range: [[00555cb0, 00555cd5]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_00555cb0(CDirectSoundDevice *this_ptr,double distance_in_feet)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_00555cb0(CDirectSoundDevice *this_ptr,double distance_in_feet)

{
  if (_DAT_0264a5d0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_0264a5d0 + 0x2c))(_DAT_0264a5d0,distance_in_feet._0_4_ * _DAT_005e9bf9,0);
  return;
}
