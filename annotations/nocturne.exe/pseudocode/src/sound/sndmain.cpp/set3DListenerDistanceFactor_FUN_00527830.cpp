// Name: sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_00527830
// Address: 00527830
// Address Range: [[00527830, 00527870]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_00527830(double distance_in_feet)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_00527830(double distance_in_feet)

{
  g_DOUBLE_005bea88 = 1.0 / distance_in_feet;
  g_DOUBLE_005bea80 = distance_in_feet;
  if (g_CSoundDevice_PTR_02dc8318 == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevice_PTR_02dc8318->vtable->set3DListenerDistanceFactor)
            (g_CSoundDevice_PTR_02dc8318,distance_in_feet);
  return;
}
