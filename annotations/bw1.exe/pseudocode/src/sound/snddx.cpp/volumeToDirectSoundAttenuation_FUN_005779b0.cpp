// Name: sound_snddx.cpp_volumeToDirectSoundAttenuation_FUN_005779b0
// Address: 005779b0
// Address Range: [[005779b0, 00577a48]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_volumeToDirectSoundAttenuation_FUN_005779b0(float volume)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_volumeToDirectSoundAttenuation_FUN_005779b0(float volume)

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
  dVar1 = floor(dVar1 * 0.6931471805599453 * 868.58900000000006);
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
