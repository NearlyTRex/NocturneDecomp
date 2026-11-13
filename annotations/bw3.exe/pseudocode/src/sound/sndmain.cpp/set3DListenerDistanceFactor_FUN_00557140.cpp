// Name: sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_00557140
// Address: 00557140
// Address Range: [[00557140, 0055716f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_00557140(float distance_in_feet)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_00557140(float distance_in_feet)

{
  _DAT_00604244 = 1.0 / distance_in_feet;
  DAT_00604240 = distance_in_feet;
  if (_DAT_02cf3280 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02cf3280 + 0x28))(_DAT_02cf3280,distance_in_feet);
  return;
}
