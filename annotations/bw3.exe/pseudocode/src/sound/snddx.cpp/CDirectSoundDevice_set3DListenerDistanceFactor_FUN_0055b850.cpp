// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_0055b850
// Address: 0055b850
// Address Range: [[0055b850, 0055b875]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_0055b850(CDirectSoundDevice *this_ptr,double distance_in_feet)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_0055b850(CDirectSoundDevice *this_ptr,double distance_in_feet)

{
  if (_DAT_02cf49d0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02cf49d0 + 0x2c))(_DAT_02cf49d0,distance_in_feet._0_4_ * _DAT_005d46ed,0);
  return;
}
