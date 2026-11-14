// Name: sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_005515b0
// Address: 005515b0
// Address Range: [[005515b0, 005515df]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_005515b0(float distance_in_feet)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_005515b0(float distance_in_feet)

{
  _DAT_0061bcb8 = 1.0 / distance_in_feet;
  DAT_0061bcb4 = distance_in_feet;
  if (_DAT_02648e80 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02648e80 + 0x28))(_DAT_02648e80,distance_in_feet);
  return;
}
