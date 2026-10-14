// Name: sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_00527830
// Address: 00527830
// Address Range: [[00527830, 00527870]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_00527830(double distance_in_feet)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_00527830(double distance_in_feet)

{
  _DAT_005bea88 = 1.0 / distance_in_feet;
  DAT_005bea80 = distance_in_feet._0_4_;
  DAT_005bea84 = distance_in_feet._4_4_;
  if (_DAT_02dc8318 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02dc8318 + 0x24))(_DAT_02dc8318,distance_in_feet);
  return;
}
