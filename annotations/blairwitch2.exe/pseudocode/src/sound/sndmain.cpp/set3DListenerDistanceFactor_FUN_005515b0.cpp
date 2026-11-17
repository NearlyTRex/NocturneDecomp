// Name: sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_005515b0
// Address: 005515b0
// Address Range: [[005515b0, 005515df]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_005515b0(float distance_in_feet)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_005515b0(float distance_in_feet)

{
  g_FLOAT_0061bcb8 = 1.0 / distance_in_feet;
  g_FLOAT_0061bcb4 = distance_in_feet;
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevicePtr->vtable->set3DListenerDistanceFactor)(g_CSoundDevicePtr,distance_in_feet);
  return;
}
