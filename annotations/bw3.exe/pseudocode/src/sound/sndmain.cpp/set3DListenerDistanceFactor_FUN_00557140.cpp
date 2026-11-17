// Name: sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_00557140
// Address: 00557140
// Address Range: [[00557140, 0055716f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_00557140(float distance_in_feet)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_00557140(float distance_in_feet)

{
  g_FLOAT_00604244 = 1.0 / distance_in_feet;
  g_FLOAT_00604240 = distance_in_feet;
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevicePtr->vtable->set3DListenerDistanceFactor)(g_CSoundDevicePtr,distance_in_feet);
  return;
}
