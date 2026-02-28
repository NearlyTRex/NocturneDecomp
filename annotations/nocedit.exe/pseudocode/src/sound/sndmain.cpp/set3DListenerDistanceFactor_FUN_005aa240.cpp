// Name: sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_005aa240
// Address: 005aa240
// Address Range: [[005aa240, 005aa280]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_005aa240(double distance_in_feet)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_005aa240(double distance_in_feet)

{
  g_Cached3DDistanceFactorInverse = 1.0 / distance_in_feet;
  g_Cached3DDistanceFactor = distance_in_feet;
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevicePtr->vtable->set3DListenerDistanceFactor)(g_CSoundDevicePtr,distance_in_feet);
  return;
}
