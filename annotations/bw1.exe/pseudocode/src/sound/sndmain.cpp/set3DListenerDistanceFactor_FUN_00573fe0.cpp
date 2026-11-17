// Name: sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_00573fe0
// Address: 00573fe0
// Address Range: [[00573fe0, 0057400f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_00573fe0(float distance_in_feet)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_00573fe0(float distance_in_feet)

{
  g_FLOAT_00623308 = 1.0 / distance_in_feet;
  g_FLOAT_00623304 = distance_in_feet;
  if (g_CSoundDevice_PTR_02c80650 == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevice_PTR_02c80650->vtable->set3DListenerDistanceFactor)
            (g_CSoundDevice_PTR_02c80650,distance_in_feet);
  return;
}
