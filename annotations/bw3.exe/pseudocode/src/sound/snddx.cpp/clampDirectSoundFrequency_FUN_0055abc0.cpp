// Name: sound_snddx.cpp_clampDirectSoundFrequency_FUN_0055abc0
// Address: 0055abc0
// Address Range: [[0055abc0, 0055abfc]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_clampDirectSoundFrequency_FUN_0055abc0(float frequency)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_clampDirectSoundFrequency_FUN_0055abc0(float frequency)

{
  double dVar1;
  uint uStack_8;
  
  dVar1 = round((double)frequency);
  uStack_8 = (int)ROUND(dVar1);
  if (uStack_8 < 100) {
    uStack_8 = 100;
  }
  else if (100000 < uStack_8) {
    return 100000;
  }
  return uStack_8;
}
