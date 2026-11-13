// Name: sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_00573fe0
// Address: 00573fe0
// Address Range: [[00573fe0, 0057400f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_00573fe0(float distance_in_feet)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_00573fe0(float distance_in_feet)

{
  _DAT_00623308 = 1.0 / distance_in_feet;
  DAT_00623304 = distance_in_feet;
  if (_DAT_02c80650 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02c80650 + 0x28))(_DAT_02c80650,distance_in_feet);
  return;
}
