// Name: sound_snddx.cpp_volumeToDirectSoundAttenuation_FUN_0055ab20
// Address: 0055ab20
// Address Range: [[0055ab20, 0055abb8]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_volumeToDirectSoundAttenuation_FUN_0055ab20(float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_volumeToDirectSoundAttenuation_FUN_0055ab20(float volume)

{
  double dVar1;
  uint uStack_14;
  
  dVar1 = (double)volume;
  if (dVar1 <= 0.0) {
    return -10000;
  }
  if (1.0 <= dVar1) {
    return 0;
  }
  dVar1 = floor(dVar1 * 0.6931471805599453 * _DAT_005d45a5);
  dVar1 = round(dVar1);
  uStack_14 = (int)ROUND(dVar1);
  if (uStack_14 < 1) {
    if (uStack_14 < -10000) {
      return -10000;
    }
  }
  else {
    uStack_14 = 0;
  }
  return uStack_14;
}
