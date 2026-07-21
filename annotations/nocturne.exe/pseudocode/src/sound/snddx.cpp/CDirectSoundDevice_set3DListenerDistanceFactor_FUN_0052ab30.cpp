// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_0052ab30
// Address: 0052ab30
// Address Range: [[0052ab30, 0052ab55]]
// Convention: unknown
// Signature: void sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_0052ab30(undefined4 param_1,double param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_0052ab30(uint param_1,double param_2)

{
  if (_DAT_02dc9220 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02dc9220 + 0x2c))
            (_DAT_02dc9220,(float)((float10)param_2 * (float10)_DAT_0059424f),0);
  return;
}
